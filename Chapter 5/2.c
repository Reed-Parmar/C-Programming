#include<stdio.h>

void hello();
void bye();
int main(){
    for(int i=0;i<5;i++){
    hello();
    bye();}
    return 0;
}

void hello(){
    printf("hello\n");
}
void bye(){
    printf("byee\n");
}