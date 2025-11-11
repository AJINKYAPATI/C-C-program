#include <stdio.h>
#include <string.h>
void reversestr(char str[],int start,int end) {
    while(start<=end) {
        char temp=str[start];
        str[start++]=str[end];
        str[end--]=temp;
    }
}
void reversewords(char str[],int len) {
    int start=0,end;
    for(int i=0;i<=len;i++) {
        if(str[i]==' '||str[i]=='\0') {
            end=i-1;
            reversestr(str,start,end);
            start=i+1;
        }
    }
}

int main(){
    char str[]="hello java programming";
    int len=strlen(str);
    printf("befor reverse:%s\n",str);
    reversewords(str,len);
    printf("after reserve:%s",str);
    return 0;
}
