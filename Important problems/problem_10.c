#include <stdio.h>
int main() {
    int a, b, temp;
    scanf("%d%d", &a, &b);
    for (int i = 1; i <= a; i++)
        if (a%i==0 && b%i==0) temp = i;
    printf("%d", temp);
    return 0;
}