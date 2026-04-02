#include <stdio.h>

    int adder(int n1, int n2){
        return n1+=n2;
    }
    int main(void){
        int(*fPtr) (int,int); // declare a function pointer that takes two int parameters and returns an int
        fPtr=adder;

        printf("Using a aname of function: %d \n", adder(10,20)); // using the function name to call the function directly
        printf("Using a aname of function: %d \n", fPtr(10,20)); // using the function pointer to call the function
    return 0;

    }