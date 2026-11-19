#include<stddef.h>
#include <stdio.h>
//кейс d
int fu1(int *izn, int razm){
    int rez, k, pr, ch = 0;
    printf("Введите значение k: ");
    rez = scanf("%d",&k);
    //проверка на ввод и очистка буфера
    if(rez == EOF){
        while((pr = getchar())!= '\n'&& pr != EOF);
        printf("Завершение программы\n");
        return 0;
    }if(rez != 1){
        while((pr = getchar())!= '\n'&& pr != EOF);
        printf("\nНеверный ввод\n");
        return -1;
    }
    //
    if(razm!=0){
        printf("Индексы со значением меньше %d: ", k);
        for(int i = 0; i<razm; ++i){
            if (izn[i]<k){
                printf("%d | ", i);
            }else{
                ch++;
            }
        }
        if (ch == razm){
            printf("Таких значений не найдено");
        }
    }else{
        printf("\nВы не указали размер массива\n");
    }
    while((pr = getchar())!= '\n' && pr != EOF);
    return -2;
}
// кейс e
int fu2(int *izn, int razm){
    int rez, k, pr, kol = 0;
    printf("Введите значение k: ");
    rez = scanf("%d",&k);
    //проверка на ввод и очистка буфера
    if(rez == EOF){
        while((pr = getchar())!= '\n'&& pr != EOF);
        printf("Завершение программы\n");
        return -3;
    }if(rez != 1){
        while((pr = getchar())!= '\n'&& pr != EOF);
        return -1;
    }
    //
    if(razm != 0){
        for(int i = 0; i<razm; ++i){
            if(izn[i] > k){
                kol++;
            }
        }
    }else{
        return -2;
    }
    while((pr = getchar())!= '\n' && pr != EOF);
    return kol;
}
//кейс f
int fu3(int *izn, int razm){
    int rez, k, pr, su = 0;
    printf("Введите значение k: ");
    rez = scanf("%d",&k);
    //проверка на ввод и очистка буфера
    if(rez == EOF){
        while((pr = getchar())!= '\n'&& pr != EOF);
        return -3;
    }if(rez != 1){
        while((pr = getchar())!= '\n'&& pr != EOF);
        return -1;
    }
    //
    if(razm != 0){
        for(int i = 0; i<razm; i++){
            if(izn[i]<k){
                su += izn[i];
            }
        }
    }else{
        return -2;
    }
    while((pr = getchar())!= '\n' && pr != EOF);
    return su;
}