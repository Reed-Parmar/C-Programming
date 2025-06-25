#include <stdio.h>

int main()
{
    int isSunday=1;
    int isSnowing=0;
    printf("%d\n",isSnowing || isSunday);

    int isMonday=1;
    int isRaining=1;
    printf("%d\n", isMonday || isRaining);
    
    int a;
    scanf("%d",&a);
    printf("%d", a>9 && a<100);

    

    return 0;
}