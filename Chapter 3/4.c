#include <stdio.h>
int main()
{
    int marks;
    printf("enter marks: ");
    scanf("%d",&marks);
    if(marks>=0 && marks <=100){
        if(marks<30){
            printf("Grade: C");
        }
        else if(marks>=30 && marks<70){
            printf("Grade: B");
        }
        else if(marks>=70 && marks<90){
            printf("Grade: A");
        }
        else if(marks>=90){
            printf("Grade: A+");
        }
    }
    else{
        printf("invalid marks");
    }
    return 0;
}