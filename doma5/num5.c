#include<stdio.h>
#include <math.h>
double calc(double a, double b){
    double rez = sin(a)+cos(b);
    return rez;
}
int main(void){
    double a, b;
    while(scanf("%lf %lf", &a, &b)==2){
        double go = calc(a,b);
        printf("%.4lf\n", go);
    }
    return 0;
}
// функция с возвращаемым типом double нужна для больше точности вычислений
//return прерывает текущую функцию и передает результат вчислений в вызывающую функцию