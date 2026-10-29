#include<stdio.h>
int main(void){
    double arr[8];
    double izm[8];
    //заполнение изначального массива
    for(int i = 0; i<2; i = i + 1){
        arr[i] = (double)i;
    }
    for(int i = 2; i < 8; i++){
        arr[i] = arr[i-1]+arr[i-2];
    }
    //заполнение измененного массива
    for(int i = 0;i<8;i++){
        if(i==0){
            izm[i] = arr[i];
        }else{
            izm[i] = arr[i]+izm[i-1];
        }
    }
    //вывод изначального массива
    for(int i = 0; i<8; i++){
        printf("%.6lf ", arr[i]);
    }
    printf("\n");
    //вывод измененного
    for(int i = 0; i<8; i++){
        printf("%.6lf ", izm[i]);
    }
    printf("\n");
    return 0;
}
//