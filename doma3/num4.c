#include <stdio.h>
#include <string.h>
int main(void){
    char sl[] = "\x48\x65\x6C\x6C\x6F\t\x57\x6F\x72\x6C\x64";
    printf("%s\n", sl);
    printf("%lu\n%lu\n", strlen(sl), sizeof(sl));
    return 0;
}
// \t - это знак табуляции
// в шестнадцатеричной форме закадированы символы H e l l o W o r l d в соответствующем порядке