#include <stdio.h>
#include <limits.h>
int main(void){
    printf("INT_MIN: %d\n", INT_MIN);
    printf("INT_MAX: %d\n", INT_MAX);
    printf("UINT_MAX: %u\n", UINT_MAX);
    int RANGE_OK = ((unsigned int)INT_MAX * 2u + 1u == UINT_MAX);//приведение к безнаковому типу необходимо,потому что INT_MAX*2 - переполнение знакового int
    printf("RANGE_OK: %d\n", RANGE_OK);
    return 0;
}