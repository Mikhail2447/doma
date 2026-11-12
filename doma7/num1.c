#include<stdio.h>
#include<ctype.h>
int main(void){
    int c;
    printf("Вводите символы(чтобы завершить Ctrl+D)\n");
    while((c = getchar())!=EOF){
        if(ispunct((unsigned char)c)){
            continue;
        }else{
            putchar(c);
        }
    }
    return 0;
}
//17