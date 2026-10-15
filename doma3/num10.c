#include <stdio.h>
#include <wchar.h>
#include <locale.h>
int main(void){
    wchar_t a[30];
    wchar_t b[30];
    wchar_t c[30];
    setlocale(LC_ALL, "");
    wscanf(L"%ls", a);
    wscanf(L"%ls", b);
    wscanf(L"%ls", c);
    wprintf(L"%-*ls|", 15, a);
    wprintf(L"%*ls|", 20, b);
    wprintf(L"%.5ls\n", c);
    return 0;
}