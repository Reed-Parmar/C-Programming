#include<stdio.h>
#include<string.h>
int main(){
    char name[50],id[50];
    printf("enter user name: ");
    scanf("%s",name);
    if(strcmp(name,"reedham")==0){
    printf("enter user id password: ");
    scanf("%s",id);
    if(strcmp(id,"open")==0){
        printf("access granted");
    }
    else{
        printf("access denied");
    }
}
else{
    printf("wrong user name");
}
    return 0;
}