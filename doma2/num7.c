#include <stdio.h>
int main(void){
    long double ld;
    double d;
    float f;
    scanf("%Lf", &ld);
    d = (double)ld;
    f = (float)ld;
    printf("FLOAT: %.6f\n", f);//округляется до числа кратного 8,так как не помещается в размерность float
    printf("DIUBLE: %.6f\n", d);
    printf("LDOUBLE: %.6Lf\n", ld);
    printf("FLOAT+1: %.6f\n", f+1);//остается таким же,так как округления идет до числа кратного 8(так как наше число занимает 27 бит из разрешенных 24)=> шаг равен 2^27-24
    printf("DIUBLE+1: %.6f\n", d+1);
    printf("LDOUBLE+1: %.6Lf\n", ld+1);
    return 0;
}