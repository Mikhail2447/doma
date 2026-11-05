#include <stdio.h>
#include <ctype.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL, "");
    int c;
    int count = 0;
    int count_chis = 0;
    int count_digit = 0;
    int count_space = 0;
    int count_other = 0;
    printf("Вводите символы(чтобы завершить #): \n");
    while ((c = getchar())!='\n' && c != EOF && c !='#'){
        if(c == '@'){
            count++;
        }
    if (isalpha((unsigned char)c)){
        count_chis++;
    }else if(isdigit((unsigned char)c)){
        count_digit++;
    }else if(isspace((unsigned char)c)){
        count_space++;
    }else{
        count_other++;
    }
    }
    printf("Количество замененных символов 'a' на '@':%d\n", count);
    printf("Количество букв:%d\n", count_chis);
    printf("Количество чисел:%d\n", count_digit);
    printf("Количество пробелов:%d\n", count_space);
    printf("Количсество прочих символов:%d\n", count_other);
    return 0;
}