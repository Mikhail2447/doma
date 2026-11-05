#include <stdio.h>
#include <math.h>
int main(void){
    int num;
    double chis, rez;
    while(1){
        printf("Меню\n");
        printf("1. Модуль числа\n");
        printf("2. Знак числа\n");
        printf("3. Округление вверх\n");
        printf("4. Округление вниз\n");
        printf("5. Выход\n");
        printf("Выберите пункт (1–5) и введите нужное число\n");

//для очистки буфера ввода мы используем getchar(), чтобы он "съел" символы, которые остаются в буфере, благодаря этому не будет бесконечного цикла
        if (scanf("%d %lf", &num, &chis) != 2){
            int c;
            while((getchar())!='\n' && c!=EOF);
            printf("Неверный ввод\n");
            continue;
        }
    }
    switch(num){
        case 1:
            rez = fabs(chis) 
            printf("Модуль числа = %lf\n", rez);
            break

        case 2:
            if (chis>0){
                rez = 1;
            }else if (chis<0){
                rez = -1;
            }else{
                rez = 0;
            }
            printf("Знак числа = %lf\n", rez);
            
        case 3:
            rez = ceil(chis);
            printf("Округленное вверх число = %lf\n", rez);
        
        case 4:
            rez = floor(chis);
            printf("Округленное вниз число = %lf\n", rez);

        case 5:
            printf("Завершение программы\n");
            return 0;

    }
    return 0;
}