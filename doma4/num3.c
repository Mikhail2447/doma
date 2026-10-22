#include <stdio.h>
int main(void){
    int N;
    scanf("%d", &N);
    unsigned long long i = 1;
    int c = N;
    while (c>0){
        printf("%llu ", i);
        i = i*1000;
        c--;
    }
    return 0;
    printf("\n");
}
//30 вариант
//постфиксный - значение сначала применяется, а потом изменяется
//префиксный - значение сначала изменяется, а потом применяется