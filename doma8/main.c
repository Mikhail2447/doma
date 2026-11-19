#include <stdio.h>
#include "myarrfunc.h"
#include <stddef.h>
int main(void){
    int pr;
    //для кейса а
    int ca = 0, reza;
    //для б
    int rezb;
    int rabmass[1001] = {0};
    //для меню
    char c;
    int rez;
    while(1){
        printf("\n");
        printf("a\tЗадать размер массива\n");
        printf("b\tЗаполнить массив\n");
        printf("c\tПредставление массива (значения, адреса)\n");
        printf("d\tОпределение индексов элементов, значения которых ниже заданного k\n");
        printf("e\tОпределение количества элементов массива по значению выше введенного k\n");
        printf("f\tОпределение суммы элементов массива по значению ниже введенного k\n");
        printf("g\tВыход\n");
        printf("Выберите пункт:\n");
        
        rez = scanf(" %c", &c);
        if (rez == EOF){
            printf("Завершение программы\n");
            break;
        }else if(rez == 0){
            while((pr = getchar())!= '\n' && pr != EOF);
            printf("Неверный ввод\n");
            continue;
        }else if((int)c<97 || (int)c>103){
            while((pr = getchar())!= '\n'&& pr != EOF);
            printf("\nНеверный ввод\n");
            continue;
        }
        while((pr = getchar())!= '\n' && pr != EOF);
        switch(c){
        case 'a':
            printf("Введите длину массива от 1 до 1000:\n");
            reza = scanf("%d", &ca);
            //проверка на коректный ввод
            if (reza == EOF){
                while((pr = getchar())!= '\n'&& pr != EOF);
                printf("Завершение программы\n");
                return 0;
            }if(reza!=1 || ca == 0 || ca > 1000 || ca < 0){
                while((pr = getchar())!= '\n'&& pr != EOF);
                printf("\nНеверный ввод\n");
                break;
            }
            while((pr = getchar())!= '\n' && pr != EOF);
            break;
        case 'b':
        if(ca != 0){
            int pr;
            printf("Вводите целочисленные элементы массива(всего %d): ", ca);
            for(int i = 0; i<ca; i++){
                rezb = scanf("%d", &rabmass[i]);
                //проверка на коректный ввод
                if(rezb == EOF){
                    while((pr = getchar())!= '\n'&& pr != EOF);
                    printf("Завершение программы\n");
                    return 0;
                }if(rezb != 1){
                    while((pr = getchar())!= '\n'&& pr != EOF);
                    printf("\nНеверный ввод\n");
                    break;
                }
            }

        }else{
            printf("Вы не указали размер массива");
            break;
        }
        while((pr = getchar())!= '\n' && pr != EOF);
        break;

        case 'c':
        if(ca != 0){
            for(int i = 0; i<ca; i++){
                printf("|индекс: %d | значение: %d | адрес: %p| \n", i, rabmass[i], &rabmass[i]);
            }
        }else{
            printf("Вы не указали размер массива");
        }
        break;
        case 'd':
        fu1(rabmass, ca);
        break;

        case 'e':
        int gh2 = fu2(rabmass, ca);
        if (gh2 == -1){
            printf("Ошибка ввода\n");
            break;
        }    
        else if (gh2 == -2){
            printf("Сначала задайте размер массива\n");
            break;
        }    
        else if (gh2 == -3) {
            printf("Завершение программы\n");
            return 0;
        }else{
            printf("Количество элементов массива по значению выше введенного k: %d\n", gh2);
            break;
        }

        case 'f':
        int gh3 = fu3(rabmass, ca);
        if (gh3 == -1){
            printf("Ошибка ввода\n");
            break;
        }
        else if (gh3 == -2){
            printf("Сначала задайте размер массива\n");
            break;
        }
        else if (gh3 == -3) {
            printf("Завершение программы\n");
            return 0;
        }else{
            printf("Сумма элементов массива по значению ниже введенного k: %d\n", gh3);
            break;
        }

        case 'g':
        printf("Завершение программы");
        return 0;
        
    }
    }
    
    return 0;
}