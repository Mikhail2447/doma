#include <stdio.h>
int main(void){
    char st[50];
    int width;
    scanf("%s %d", st, &width);
    printf("%*s\n", width, st);
    printf("%-*s\n", width + 5, st);
    return 0;
}