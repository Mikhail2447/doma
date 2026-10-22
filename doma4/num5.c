#include <stdio.h>
double in_to_cm (double in){
    const double zn = 2.54;
    double cm = in * zn;
    return cm;
}
int main(void){
    double value;
    while(scanf("%lf", &value) == 1){
        double rez = in_to_cm(value);
        printf("%.2lf\n", rez);
    }
    return 0;
}
//вариант 10
//// scanf() возвращает коллицесво коректно считаных элементов,в нашем случае это 1. Если ввод закончится, то вернется константа EOF = -1
//double используется для большей точности