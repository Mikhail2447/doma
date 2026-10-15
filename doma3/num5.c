#include <stdio.h>
int main(void){
    char si;
    scanf("%c", &si);
    printf("CODE_DEC: %d\n", si);
    printf("CODE_HEX: %x\n", si);
    printf("CODE_OCT: %o\n", si);
    printf("UPPER: %c\n", si - 32);
    printf("NEXT: %c\n", si+1);
    printf("PREV: %c\n", si - 1);

    return 0;
}