#include <stdio.h>
#include <wchar.h>
#include <wctype.h>
#include <locale.h>
int main(void){
    wint_t c;
    int count_a = 0;
    int count_e = 0;
    int alpha = 0;
    int dig = 0;
    int spa = 0;
    int other = 0;
    setlocale(LC_ALL, "");
    wprintf(L"Введите символы(чтобы завершить #):\n");
    while((c = getwchar()) != '\n' && c != L'#' && c != WEOF){
        if (c == L'а'){
            count_a++;
        }else if (c ==L'е'){
            count_e++;
        }
        if(iswalpha(c)){
            alpha++;
        }else if(iswdigit(c)){
            dig++;
        }else if(iswspace(c)){
            spa++;
        }else{
            other++;
        }

    }
    wprintf(L"Количество 'а':%d\n", count_a);
    wprintf(L"Количество 'е':%d\n", count_e);
    wprintf(L"Количество букв:%d\n", alpha);
    wprintf(L"Количество чисел:%d\n", dig);
    wprintf(L"Количество пробелов:%d\n", spa);
    wprintf(L"Количество прочих символов:%d\n", other);

    return 0;
}
//getchar() считывает по 1 байту и широкие символы он будет считывать некоректно
//getwchar() считывает по 2 или 4 байта(в зависимости от ОС) и уже коректно считывает широкие символы