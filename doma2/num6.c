#include <stdio.h>
#include <stdint.h>
int main(void){
    int x;
    int g;
    scanf("%d", &x);
    g = x;
    x = (uint8_t)(g+10);
    printf("ADD: %u\n", (unsigned int)x);
    x = (uint8_t)(g*2);
    printf("MUL2: %u\n", (unsigned int)x);
    x = (uint8_t)(g*g);
    printf("SQR: %u\n", (unsigned int)x);

    return 0;
}
//uint8_t - это 8бит, тоесть 2^8=256 различных значений (0..255). Все что не влезло в 8бит отбрасывается