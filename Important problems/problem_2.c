#include <stdio.h>
int main() {
    int n, product = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        product = product * i;
    }
    printf("%d", product);
    return 0;
}