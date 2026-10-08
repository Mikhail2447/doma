#include <stdio.h>
#include <stdint.h>
int main(void){
    long long int8 = (long long) INT8_MAX - (long long)INT8_MIN+1ull;
    long long int16 = (long long)INT16_MAX - (long long)INT16_MIN+1ull;
    long long int32 = (long long)INT32_MAX - (long long)INT32_MIN+1ull;
    unsigned long long unt8 = (unsigned long long)UINT8_MAX - 0ull + 1ull;
    unsigned long long unt16 = (unsigned long long)UINT16_MAX - 0ull + 1ull;
    unsigned long long unt32 = (unsigned long long)UINT32_MAX - 0ull + 1ull;
    printf("INT8: size= %zu, min=%d, max=%d, values=%lld\n", sizeof(int8_t), INT8_MIN, INT8_MAX, int8);
    printf("UINT8: size=%zu, min=%u, max=%u, values=%llu\n", sizeof(uint8_t), 0,UINT8_MAX, unt8);
    printf("INT16: size= %zu, min=%d, max=%d, values=%lld\n", sizeof(int16_t), INT16_MIN, INT16_MAX, int16);
    printf("UINT16: size=%zu, min=%u, max=%u, values=%llu\n", sizeof(uint16_t), 0,UINT16_MAX, unt16);
    printf("INT32: size= %zu, min=%d, max=%d, values=%lld\n", sizeof(int32_t), INT32_MIN, INT32_MAX, int32);
    printf("UINT32: size=%zu, min=%u, max=%u, values=%llu\n", sizeof(uint32_t), 0,UINT32_MAX, unt32);
    return 0;
}
//и знаковый и беззнаковый тип размера N байт имеет 2^(8*N) значений
//у беззнакового типа весь диапазон значений лежит от 0 до 2^(8N)-1
//у знакового типа кол-во значений делится пополам относительно нуля. 2^(8*n-1) - на отрицательные и 2^(8*n-1)-1 - на положиельные