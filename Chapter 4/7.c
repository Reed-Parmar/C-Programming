#include<stdio.h>
int main() 
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);

    int mul=0;
    for(int i=1;i<=10;i++){
        mul=n*i;
        printf("%dx%d=%d\n",n,i,mul);
    }

    return 0;
}