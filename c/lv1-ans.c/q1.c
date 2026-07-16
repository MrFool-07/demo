#include <stdio.h>
int main()
{
    int a, sum, sum1, sum2; // 12
    printf("enter a no:");
    scanf("%d", &a);
    sum = a / 100;         // 5
    sum1 = (a % 100) / 10; // 6
    sum2 = a % 10;         // 2
    printf("%d %d %d \n", sum, sum1, sum2);
    printf("%d", sum + sum1 + sum2);
}