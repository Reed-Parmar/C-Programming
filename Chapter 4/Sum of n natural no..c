#include<stdio.h>
int main() 
{
    int n;
    printf("enter value of n: ");
    scanf("%d",&n);

    /*int sum=0;
    for(int i=0;i<=n;i++){
        sum=sum+i;
    }
    printf("sum = %d\n",sum);

    for (int i=n;i>=1;i--){
        printf("%d\n",i);
    }*/
    int sum=0;
    for(int i=1,j=n;i<=n && j>=1;i++,j--){
        sum+=i;
        printf("%d\n",j);
    }
    printf("sum = %d\n",sum);
    return 0;
}