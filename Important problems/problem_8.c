#include<stdio.h>
int main() {
    int n, temp, temp2, count;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        temp = n%i;
        if (temp==0)
        {
            count = 0;
            for (int j = 1; j <= i; j++)
            {
                temp2 = i%j;
                if (temp2==0) count++;
            }
            if (count==2) printf("%d ", i);          
        }
    }
    return 0; 
}