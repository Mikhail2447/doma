#include <stdio.h>
int main(void){
    int c;
    int shp, sho;
    int sumh, sumo;
    printf("Введите двузначое число:\n");
    while(scanf("%d", &c) == 1 && c != 0){
        if ((c/10)==(c%10)){
            shp++;
            sumh+=c;
        }else{
            sho++;
            sumo+=c;
        }
    }
    if (shp == 0){
        shp = 1;
    }else if(sho == 0){
        sho = 1;
    }
    printf("Количество палиндромов:%d | Среднее значение:%lf\n", shp, (double)sumh/(double)shp);
    printf("Количество остальных:%d | Среднее значение:%lf\n", sho, (double)sumo/(double)sho);
    return 0;
}
//у оператора && приоритет больше чем у ||
//если A && B, A = 0 ,а B=1(или наоборот), то выражение равно 0
//если A || B , A=1, а B=0(или наоборот), то выражение всеравно будет 1