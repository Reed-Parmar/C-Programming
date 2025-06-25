#include <stdio.h>
#include<math.h>

int main()
{
    int x;
    float y,z;
    scanf("%d%f",&x,&y);
    printf("%d %.2f\n",x,y);
    z=x/y;
    printf("%.9f",z);
    
    return 0;
}