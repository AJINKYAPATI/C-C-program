#include<stdio.h>
int main(){
    int arr[]={20,45,66,77,88};
    int len = sizeof(arr)/sizeof(arr[0]);
    int key,flag=1;
    printf("Enter the key :");
    scanf("%d",&key);

    for(int i=0;i<len;i++){
        if(arr[i]==key){
            flag=0;
            printf("key found index %d",i);
            break;
        }
    }

    if(flag){
        printf("key not found");
    }

        return 0;
}
