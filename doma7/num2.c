#include<stdio.h>
#include<ctype.h>
int main(void){
    int c;
    int ch = 0;
    printf("Вводите символы(чтобы завершить Ctrl+D)\n");
    while((c = getchar()) != EOF){
        if(c == '.' || c == '!' || c == '?'){
            ch++;
        }if(c == '\n'){
            printf("Количество предложений: %d\n", ch);
            ch = 0;
        }
    }
    return 0;
}