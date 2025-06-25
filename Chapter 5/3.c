#include<stdio.h>

void printNam();
void printBon();
void printHello();

int main(){
    char n;
    printf("enter nationality: ");
    scanf("%c",&n);
    if(n=='i'){
        printNam();
    }
    else if(n=='f'){
        printBon();
    }
    else{
        printHello();
    }
    return 0;
}

void printNam(){
    printf("\nNamaste");
}
void printBon(){
    printf("\nBonjour");
}
void printHello(){
    printf("\nHello");
}