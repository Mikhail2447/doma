#include <stdio.h>
int main(void){
    double vel;
    double rez;
    printf("Введите сумму покупки: ");
    scanf("%lf", &vel);
    if (vel > 100.00 && vel <= 500.00){
        rez = vel * 0.95;
        printf("Изначальная сумма:%.3lf | Скидка 5%% при сумме >100 | Итоговая сумма:%.3lf\n", vel, rez);
    }else if(vel > 500.00 && vel <= 1000.00){
        rez = vel * 0.9;
        printf("Изначальная сумма:%.3lf | Скидка 10%% при сумме >500 | Итоговая сумма:%.3lf\n", vel, rez);
    }else if(vel > 1000.00){
        rez = vel*0.85;
        printf("Изначальная сумма:%.3lf | Скидка 15%% при сумме >1000 | Итоговая сумма:%.3lf\n", vel, rez);
    }
    return 0;
}
//при расчете денег лучше использовать double, потому что он точнее