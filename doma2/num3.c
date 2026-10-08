#include <stdio.h>
int main(void){
    int de, oc, he;
    de = 10;
    oc = 010;
    he = 0x10;
    printf("DEC_10: %d\nOCT_10: %d\nHEX_10: %d\n", de, oc, he);
    printf("INT_SUFFIX: %lu %lu %lu %lu\n",sizeof(10), sizeof(10u), sizeof(10LL), sizeof(10ULL));
    printf("FLOAT_SUFFIX: %lu %lu %lu\n", sizeof(0.1f), sizeof(0.1), sizeof(0.1L));
    printf("FLOAT_EQ: %d\n", (0.1f==0.1));//0.1 в десятичной системе - это бесконечная дробь, которая округляется по разному в отличие от типа данных.Так как в типе float меньше доступных бит, то число округляется менее точно, чем в double
    char g = 'A';
    printf("CHAR_FORMS: %d %d %d\n", 'A', '\x41', '\101');
    printf("CHAR_LIT_VAR_STR: %lu %lu %lu\n", sizeof('A'), sizeof(g), sizeof("A"));

    

    return 0;
}