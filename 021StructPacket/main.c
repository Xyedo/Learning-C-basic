//
// Created by ACER on 27/05/2022.
//
#include "stdio.h"
#include "stdint.h"

struct Packet {
    int8_t crc;
    int8_t status;
    int16_t payload;
    int8_t bat;
    int8_t sensor;
    int16_t longAddr;
    int8_t shortAddr;
    int8_t addrMode;
};
void lecturerUnpacked(struct Packet *const ptrPacket, int32_t *userPacket);

int main(void) {
    int32_t userPacket;
    struct Packet unpacked;
    printf("what is your 32bit packet :");

    scanf("%x", &userPacket);
    fflush(stdin);
    lecturerUnpacked(&unpacked, &userPacket);
    printf("Packet.crc : %#x\n", unpacked.crc);
    printf("Packet.status : %#x\n", unpacked.status);
    printf("Packet.payload : %#x\n", unpacked.payload);
    printf("Packet.sensor : %#x\n", unpacked.sensor);
    printf("Packet.longAddr : %#x\n", unpacked.longAddr);
    printf("Packet.shortAddr : %#x\n", unpacked.shortAddr);
    printf("Packet.addrMode : %#x\n", unpacked.addrMode);
    printf("Size of struct unpacked is : %i", sizeof(unpacked));
    return 0;
}

void lecturerUnpacked(struct Packet *const ptrPacket, int32_t *userPacket) {
    ptrPacket->crc = (int8_t) *userPacket & 0b11;
    ptrPacket->status = (int8_t) *userPacket >> 2 & 0b1;
    ptrPacket->payload = (int16_t) *userPacket >> 3 & 0b111111111111;
    ptrPacket->bat = (int8_t) *userPacket >> 15 & 0b111;
    ptrPacket->sensor = (int8_t) *userPacket >> 18 & 0b111;
    ptrPacket->longAddr = (int16_t) *userPacket >> 21 & 0b11111111;
    ptrPacket->shortAddr = (int8_t) *userPacket >> 29 & 0b11;
    ptrPacket->addrMode = (int8_t) *userPacket >> 31 & 0b1;
}