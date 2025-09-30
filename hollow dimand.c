#include<stdio.h>
int main(){

    for(int i=1;i<=6;i++){
        //for space
        for(int j=6;j>=i;j--){
            printf(" ");
        }

        //for star
        for(int j=1;j<=i*2-1;j++){
            if(i==1||i==7||j==1||j==i)
            printf("* ");
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    
    for(int i=5;i>=1;i--){
        //for space
        for(int j=6;j>=i;j--){
            printf(" ");
        }

        //for star
        for(int j=1;j<=i*2-1;j++){
            if(i==1||i==6||j==1||j==i)
            printf("* ");
            else {
                printf("  ");
            }       
         }
            printf("\n");
    }

    return 0;
}
