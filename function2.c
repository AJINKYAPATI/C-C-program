#include <stdio.h>
int test(int a, int b) {
    printf("value :%d\n",a+b);
    return a+b;
}
int main(){
    int a=test(20,10);
    printf("value :%d\n",test(a,++a));
    int b=test(10,10);
    int c=test(a,b);
    printf("%d\n",test(a,c));
    printf("%d\n",a+b+c);
}
