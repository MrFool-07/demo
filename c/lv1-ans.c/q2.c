#include <stdio.h>
int main()
{
    int a, b; // 13
    printf("enter a no:");
    scanf("%d", &a);
    b = a % 10;
    int c;
    c = a / 10;
    printf("%d%d", b, c);
}