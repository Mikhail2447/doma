#include <stdio.h>
#include <string.h>
int main(void){
    char st[50];
    scanf("%s", st);
    int raz = (int)strlen(st) + 5;
    printf("\"%s\"\n", st);
    printf("\"%20s\"\n", st);
    printf("\"%-20s\"\n", st);
    printf("%-*s%s%*s\n",raz/2, "\"", st, raz/2, "\"");
    return 0;
}