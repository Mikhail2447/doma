#include <stdio.h>
#include <stdbool.h>
int main(void){
    int a, b;
    scanf("%d %d", &a, &b);
    bool pe1 = a;
    bool pe2 = b;
    printf("MODULE_READY: %d\nFAULT_STATE: %d\nBOOL_SIZE: %zu\nFLAGS_SUM: %d\n", pe1, pe2, sizeof(bool), pe1+pe2);
    return 0;
}