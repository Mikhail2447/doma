#include <stdio.h>
#include <stdint.h>
int main(void){
    int ip, co;
    float nap;
    uint8_t cods;
    uint16_t checksum;
    scanf("%x %o %f", &ip, &co, &nap);
    cods = (uint8_t)co;
    checksum = (uint16_t)(ip + cods);
    printf("PACKET_ID: %d\nSTATUS_CODE: %d\nSTATUS_CHAR: %c\nVOLTAGE: %.2f\nCHECKSUM: %d\n", ip, cods, (char)cods, nap, checksum);
    return 0;
}