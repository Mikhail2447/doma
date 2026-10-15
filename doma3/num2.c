#include<stdio.h>
#include<string.h>
int main(void){
    char word1[15];
    char word2[15];
    scanf("%s %s", word1, word2);
    printf("%s-%s\n", word1, word2);
    printf("%lu\n", strlen(word1)+strlen(word2));
    return 0;
}
//scanf("%s") читает непрерывную последовательность символов, как только встречается пробел,то чтение текущего слова останавливается


