//
// Created by ACER on 27/05/2022.
//
#include "stdio.h"
#include "stdint.h"

struct Packet {
    int32_t crc: 2;
    int32_t status: 1;
    int32_t payload: 12;
    int32_t bat: 3;
    int32_t sensor: 3;
    int32_t longAddr: 8;
    int32_t shortAddr: 2;
    int32_t addrMode: 1;
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
    ptrPacket->crc = *userPacket & 0b11;
    ptrPacket->status = *userPacket >> 2 & 0b1;
    ptrPacket->payload = *userPacket >> 3 & 0b111111111111;
    ptrPacket->bat = *userPacket >> 15 & 0b111;
    ptrPacket->sensor = *userPacket >> 18 & 0b111;
    ptrPacket->longAddr = *userPacket >> 21 & 0b11111111;
    ptrPacket->shortAddr = *userPacket >> 29 & 0b11;
    ptrPacket->addrMode = *userPacket >> 31 & 0b1;
}