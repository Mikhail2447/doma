#include <stdio.h>
#include <stdint.h>
int main(void){
    uint16_t r;
    scanf("%hu", &r);
    double g = 3.14159 * (double)r * (double)r;
    printf("Размер типа uint16_t: %llu\n", (unsigned long long)sizeof(uint16_t));
    printf("Размер  double: %llu\n", (unsigned long long)sizeof(double));
    printf("Результат: %f\n", g);
    return 0;
}//результат без явного приведения типов может быть искажен из-за переполнения какого либо типа(например uint16_t)
//24 вариант