#include<stdio.h>
int main()
{
    int num;
    do{
        printf("enter num: ");
        scanf("%d",&num);
        if(num%7!=0){
            printf("%d is not a multiple of 7\n",num);
        }
        else{
            printf("%d is a multiple of 7\n",num);
            break;
        }
    }while(1);
    return 0;
}