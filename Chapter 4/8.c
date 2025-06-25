#include<stdio.h>
int main() 
{
    int num;


    /*do{
    printf("enter a number: ");
    scanf("%d",&num);
    if(num%2==0){
        printf("%d is even\n",num);
    }
    else{
        printf("%d is odd\n",num);
        break;
    }
    }while(num%2==0);*/


    /*while(num){
        printf("enter num: ");
        scanf("%d",&num);
        if(num%2==0){
        printf("%d is even\n",num);
        }
        else{
            printf("%d is odd",num);
            break;
        }
    }*/


    for(num;num;num){
        printf("enter num: ");
        scanf("%d",&num);
        if(num%2==0){
            printf("%d is even\n",num);
        }
        else{
            printf("%d is odd",num);
            break;
        }
    }
    return 0;
}