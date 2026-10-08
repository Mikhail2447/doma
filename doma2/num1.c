#include <stdio.h>
int main(void){
    int de, he, oc, sum;
    scanf("%d %x %o",&de, &he, &oc);
    sum = de+he+oc;
    printf("UNIT_ID: %d\nUNIT_VERSION: %d\nUNIT_STATUS: %d\nSUM: %d\n", de, he, oc, sum);
    return 0;
}