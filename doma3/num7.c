#include <stdio.h>
#include <string.h>
int main(void){
    #define c "LinuxDistro"
    const char st[] = "2026";
    printf("DISTRO: %s\n", c);
    printf("RDATE: %s\n", st);
    printf("STRLEN: %lu\n", strlen(c));
    printf("SIZEOF: %lu\n", sizeof(c));
    return 0;
}
//размер литерала - это его размер в байтах в памяти компьютера(включая \0)
//длина литерала - количество байт только значимых символов в строке(не включая \0)