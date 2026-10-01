#include <stdio.h>
int main(){
    int reactor_core = 12;
    int r2 = reactor_core * 2;
    int r3 = reactor_core * reactor_core;
    printf("[");
    printf("%d", reactor_core);
    printf(", ");
    printf("%d", r2);
    printf(", ");
    printf("%d", r3);
    printf("]");
    return 0;
}