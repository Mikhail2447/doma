#include<stdio.h>
int main(void){
    int ch1, ch2, c;
    int rez = 0, rez2 = 0;
    int znak1 = 1, znak2 = 1;
    //фукнция с итеративным способом
    int inter(int ch1){
        if(ch1 < 0){
            znak1 = -1;
            ch1 = -ch1;
        }
        while(ch1 > 0){
            int posl = ch1 %10;
            rez = rez*10 + posl;
            ch1 /= 10;
        }
        return rez * znak1;
    }


//функция с рекурсивным способом
    int rec(int ch2){
        if(ch2 < 0){
            znak2 = -1;
            ch2 = -ch2;
        }
        if (ch2 <= 0){
            return rez2;
        }
        else{
            int posl2 =ch2 %10;
            rez2 = rez2*10 + posl2;
            ch2 /= 10;
            return rec(ch2);
        }
    }

    printf("Введите целое число: ");
    scanf("%d", &c);
    printf("Итеративный: %d\n", inter(c));
    printf("Рекурсивный: %d\n", rec(c));
    return 0;
}