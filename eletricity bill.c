#include<stdio.h>
int main(){

    int unit,bill;
    printf("enter units");
    scanf("%d",&unit);

    if(units<=100){
        bill=units*2;
        }else if(units>=101 && units<=200){
            bill=(100*2)+((unit-100)*3);
        }else{
            bill=(100*2)+(100*3)+((unit-200)*5);{
        }
    printf("total no of units:%d\n,units");
    printf("total eletricty bill:%d,bill");
}
