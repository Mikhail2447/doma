#include <stdio.h>
#include <string.h>
int main(void){
    char st[20] = "SibSUTIS";
    printf("SIZEOF: %lu\n", sizeof(st));
    printf("STRLEN: %lu\n", strlen(st));
    printf("FREE_BYTES: %lu\n", sizeof(st) - strlen(st) - 1);
    //sizeof считает длину(в байтах) всего массива, а strlen считает длину строки(колличейство байт)не включая завершающий нуль
    char st2[20] = "СибГУТИ";
    printf("SIZEOF: %lu\n", sizeof(st2));
    printf("STRLEN: %lu\n", strlen(st2));
    printf("FREE_BYTES: %lu\n", sizeof(st2) - strlen(st2) - 1);
    return 0;
}
//каждый русский символ занимает 2байта