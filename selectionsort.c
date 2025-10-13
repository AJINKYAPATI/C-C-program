#include<stdio.h>
int main(){
    int arr[]={3,5,4,2,1};
    int len=sizeof(arr)/sizeof(arr[0]);

    printf("Before sorting: ");
    for(int i=0;i<len;i++){
        printf("%d",arr[i]);
    }
    for(int i=0;i<len-1;i++){
        int minindex=i;
        for(int j=i+1;j<len;j++){
            if(arr[minindex]>arr[j]){
                minindex=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[minindex];
        arr[minindex]=temp;
    }
        printf("\nAfter sorting: ");
        for(int i=0;i<len;i++){
            printf("%d",arr[i]);
        }

}
