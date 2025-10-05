#include<stdio.h>
#include<string.h>

int main(){
    char username[10]="admin";
    char passward[10]="admin@123";

    char user[10];
    char pass[10];
    printf("enter username");
    scanf("%s",&user);
    printf("enter passward");
    scanf("%s",passward);

    if(strcmp(username,user)==0){
        if(strcmp(passward,pass)==0){
        printf("login succesfully");

        }else{
             printf("incorrect passward..... please try again");
    }
    
}else{
        printf("user not found");
    }
}
