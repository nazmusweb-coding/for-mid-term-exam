#include <stdio.h>
int main() {
    int n, step1, step2 = 0, temp;
    scanf("%d", &n);
    temp = n;
    while (n>0)
    {
        step1 = n%10;
        step2 = step2 + (step1*step1*step1);
        n = n/10; 
    }
    if (step2==temp) printf("Armstrong Number");
    else printf("Not Armstrong Number");
    return 0;
}