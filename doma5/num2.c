#include <stdio.h>
int main(void){
    const int height = 5;
    //номер столбца
    for(int i = 1; i<=height; i++){
        //количество пробелов равное высоте - текущему номеру строки(для первой будет 5-1=4 пробела)
        for(int pr = 1; pr <= height - i; pr++){
        printf(" ");
        }
        //количество символов равное номеру строки(для первой строки = 1)
        for(int sim = 1; sim <= i; sim++){
            printf("L");
        }
    printf("\n");
            
    }
    return 0;
}