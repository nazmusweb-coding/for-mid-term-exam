#include <stdio.h>
int main() {
    int n, fib0, fib1, fibn;
    scanf("%d", &n);
    fib0 = 0;
    fib1 = 1;
    for (int i = 1; i < n; i++)
    {
        fibn = fib0+fib1;
        fib0 = fib1;
        fib1 = fibn;
    }
    printf("%d", fibn);
    return 0;
}