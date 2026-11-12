#include<stdio.h>
#include<ctype.h>
int main(void){
    void fu(int *a, int *b){
        int min, max, rez;
        if(*a>=*b){
            min = *b;
            max = *a;
        }else{
            min = *a;
            max = *b;
        }if(min == 0){
            printf("Деление на 0\n");
            return;
        }
        rez = max % min;
        *a = rez;
        *b = rez;
    }
    int ch1, ch2;
    while(scanf("%d %d", &ch1, &ch2) == 2){
        printf("Изначальные значения: %d, %d\n", ch1, ch2);
        fu(&ch1, &ch2);
        printf("Измененные значения: %d, %d\n", ch1,ch2);
    }

    return 0;
}