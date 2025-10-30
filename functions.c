#include <stdio.h>
void test(int a,int b){
    printf("Addition :%d\n",a+b);
}
int main(){
    //function - it is set of instruction to perform some particular
    //task (reuse)
    //calling function - a function which tries to call another fun
    //called function - a function which comes under exceution
    //function calling statement - transferring control form calling to called

    test(10,20);
    printf("main function\n");
    test(23,45);
    test(90,89);
    // test();//fcs
}
