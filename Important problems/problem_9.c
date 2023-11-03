#include <stdio.h>
int main() {
    int number_of_input, n, sum = 0;
    scanf("%d", &number_of_input);
    for (int i = 1; i <= number_of_input; i++) {
        scanf("%d", &n);
        sum = sum + n;
    }
    printf("%0.1lf", (double)sum/number_of_input);
}