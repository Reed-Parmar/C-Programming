#include<stdio.h>
int main(){
    float c,f;
    printf("Enter temp in Celsius: ");
    scanf("%f",&c);
    f=1.8*c+32;
    printf("temp in Farenheit: %.2f",f);
    return 0;
}