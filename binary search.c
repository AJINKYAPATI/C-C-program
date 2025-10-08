#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    int key;
    printf("Enter the key :");
    scanf("%d",&key);

    int start=0,end=len-1,flag=1;

    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            flag=0;
            printf("key found at %d",mid);
            break;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }else if(arr[mid]>key){
            end=mid-1;
        }        
    }

    if(flag){
        printf("key not found ");
    }

    return 0;
}
