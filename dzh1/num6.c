#include <stdio.h>
int main(){
    const int year = 365;
    const int day = 24;
    const int hour = 3600;
    int x, tik,ch, dn;
    scanf("%d", &x);
    dn = x * year;
    ch = dn * day;
    tik = ch * hour;
    printf("Тики: %d|Часы: %d|Дни: %d|Годы: %d\n", tik, ch, dn, x);
    return 0;
}