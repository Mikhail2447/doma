#include <stdio.h>
#include <wchar.h>
#include <string.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL,"");
    wchar_t st[50];
    wscanf(L"%ls", st);
    wprintf(L"Агент %ls авторизован в системе\n", st);
    return 0;
}