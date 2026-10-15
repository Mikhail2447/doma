#include <stdio.h>
#include <wchar.h>
#include <string.h>
#include <locale.h>
int main(void){
    const char st[] = "Сбой матрицы";
    const wchar_t si[] = L"Сбой матрицы";
    setlocale(LC_ALL, "");
    printf("char -> sizeof: %lu bytes, strlen: %lu chars\n", sizeof(st), strlen(st));
    printf("wchar -> sizeof: %lu bytes, wcslen: %lu chars\n", sizeof(si), wcslen(si));
    return 0;
}
// широкие символы нужны для удобной работы с символами кирилицы 
