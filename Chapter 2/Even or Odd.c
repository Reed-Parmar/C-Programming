#include<stdio.h>

int main()

{
    int a;
    printf("enter value of a = ");
    scanf("%d",&a);
    if(a%2==0){
        printf("a is even\n");
    }
    else{
        printf("a is odd\n");
    }
    return 0;
}