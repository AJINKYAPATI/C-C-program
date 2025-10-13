#include<stdio.h>
int main(){
    int arr[]={3,5,4,2,1};
    int len=sizeof(arr)/sizeof(arr[0]);

    printf("Before sorting: ");
    for(int i=0;i<len;i++){
        printf("%d",arr[i]);
    }

    for( int i=0;i<len;i++){
        for(int j=0;j<len-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
        printf("\nAfter sorting: ");
        for(int i=0;i<len;i++){
            printf("%d",arr[i]);
        }
}
