#include <stdio.h>
int main()
{
    int n1,n2,n3;
    printf("enter 3 numbers: ");
    scanf("%d%d%d", &n1,&n2,&n3);

    if(n1<n2)
    {
        if (n3<n2){
            printf("%d is the largest number",n2);
        }
    }

    if(n2<n3)
    {
        if(n1<n3){
            printf("%d is the largest number",n3);
        }
    }
    if(n3<n1)
    {
        if(n2<n1){
            printf("%d is the largest number",n1);
        }
    }
    return 0;
}