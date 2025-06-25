#include <stdio.h>
int main()
{
    int day;
    printf("enter day:");
    scanf("%d",&day);
    switch (day){
        case 1: printf("monday");
        break;
        case 2: printf("tuesday");
        break;
        case 3: printf("wednesday");
        break;
        case 4: printf("thrusday");
        break;
        case 5: printf("friday");
        break;
        case 6: printf("saturday");
        break;
        case 7: printf("sunday");
        break;
        default: printf("not a valid day");
    }


    char say;
    printf("\n enter say: ");
    scanf("%c",&say);
    switch (say){
        case 'm' : printf("monday");
        break;
        case 't' : printf("tuesday");
        break;
        case 'w' : printf("wednesday");
        break;
        case 'h' : printf("thrusday");
        break;
        case 'f' : printf("friday");
        break;
        case 's' : printf("saturday");
        break;
        case 'u' : printf("sunday");
        break;
    }
    return 0;
}