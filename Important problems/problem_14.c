#include <stdio.h>
int main() {
    int month, year, day;
    scanf("%d%d", &month, &year);
    if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month== 12)
    {
        day = 31;
        for (int i = 1; i <= day; i++) {
            printf("%d\t", i);
            if (i%7==0) printf("\n");
        }
    } else if (month==4 || month==6 || month== 9 || month== 11) {
        day = 30;
        for (int i = 1; i <= day; i++) {
            printf("%d ", i);
            if (i%7==0) printf("\n");
        }
    } else if(month==2) {
        if ((year%4==0 && year%100!=0) || year%4==0) day = 29;
        else day = 28;
        for (int i = 1; i <= day; i++) {
            printf("%d ", i);
            if (i%7==0) printf("\n");
        }
    }
    return 0;
}