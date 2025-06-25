#include <stdio.h>

int main()
{
    printf("%d\n", 4<5 && 7>6);
    printf("%d\n", 5>6 || 9>6);
    printf("%d\n",!3>4 && 5<6 && 7<9);
    float a=1,b=4;
    a/=b;
    printf("%f",a);
    return 0;
}