#include<stdio.h>
int main(void){
    int N;
    while(scanf("%d", &N) == 1 && N>0){
        //инициализация нуля типа double нужна для того,чтобы избежать неявного приведения к int
        double su = 0.0;
        for(double i=1.0; i < N+1; ++i){
            su += (1/(i*i*i+1));
        }
        printf("%.6lf\n", su);
    }
    return 0;
}