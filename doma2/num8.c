#include <stdio.h>
#include <float.h>
int main(void){
    printf("FLOAT: size=%lu, digits=%d, max=%e\n", sizeof(float), FLT_DIG, FLT_MAX);
    printf("DOUBLE: size=%lu, digits=%d, max=%e\n", sizeof(double), DBL_DIG, DBL_MAX);
    printf("LDOUBLE: size=%lu, digits=%d, max=%Le\n", sizeof(long double), LDBL_DIG, LDBL_MAX);
    return 0;
}
//Примечание: количество цифр в показателе степени при выводе
 // (например, e+38, e+308 или e+4932) может отличаться в зависимости
 // от системы и компилятора. Кроме того, на некоторых платформах
 // long double может совпадать по размеру с double