#include <stdio.h>
int main()
{
    int a,b,c;
    float avg;
    printf("enter 3 numbers ");
    scanf("%d%d%d", &a,&b,&c);
    avg=a/3+b/3+c/3;
    printf("%.2f",avg);
    return 0;
}