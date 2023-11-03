#include <stdio.h>
int main() {
    int n, result, count = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        result = n%i;
        if (result==0) count++;
    }
    if (count==2) printf("Prime Number");
    else printf("Not Prime Number");
    return 0;
}