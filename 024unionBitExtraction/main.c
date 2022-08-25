//
// Created by ACER on 27/05/2022.
//
#include "stdio.h"
#include "stdint.h"

union Packet {
    uint32_t packetValue;
    struct {
        int32_t crc: 2;
        int32_t status: 1;
        int32_t payload: 12;
        int32_t bat: 3;
        int32_t sensor: 3;
        int32_t longAddr: 8;
        int32_t shortAddr: 2;
        int32_t addrMode: 1;
    }packetFields;

};


int main(void) {
    union Packet packet;

    printf("what is your 32bit packet :");

    scanf("%x", &packet.packetValue);
    fflush(stdin);
    printf("Packet.crc : %#x\n", packet.packetFields.crc);
    printf("Packet.status : %#x\n", packet.packetFields.status);
    printf("Packet.payload : %#x\n", packet.packetFields.payload);
    printf("Packet.sensor : %#x\n", packet.packetFields.sensor);
    printf("Packet.longAddr : %#x\n", packet.packetFields.longAddr);
    printf("Packet.shortAddr : %#x\n", packet.packetFields.shortAddr);
    printf("Packet.addrMode : %#x\n", packet.packetFields.addrMode);
    printf("Size of struct unpacked is : %i", sizeof(packet));
    return 0;
}

