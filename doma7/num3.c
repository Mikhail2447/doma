#include <stdio.h>
#include <math.h>
int main(void){
    double ch1, ch2;
    double c;
    double func(double a, double b){
        double sum = (double)a + (double)b;
        double rez = (fabs((double)a - (double)b))/sum;
        return rez;
    }
    printf("Вводите по 2 числа: ");
    while(scanf("%lf %lf", &ch1, &ch2) == 2){
        if(ch1 == 0 && ch2 == 0){
            printf("Деление на 0\n");
        }else{
            c = func(ch1, ch2);
            printf("%.4lf\n",c);
        }
    }
    return 0;
}