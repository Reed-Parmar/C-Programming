#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter 3 numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("%d is the largest",a);
        }
        else{
            printf("%d is the largest",c);
        }
    }
    if(b>c){
        if(b>a){
            printf("%d is the largest",b);
        }
        else{
            printf("%d is the largest",a);
        }
    }
    return 0;

}