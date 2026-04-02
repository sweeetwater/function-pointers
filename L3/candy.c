#include <stdio.h>

    void funcOne(void){
        printf("funcOne was called! \n");
    }

    void funcTwo(void){
        printf("funcTwo was called!\n");
    }

    void main(void){
        funcOne();
        funcTwo();
        printf("Address of funcOne: 0x%p \n",funcOne); // changed %x to %p to be more accurate for pointer addresses
        printf("Address of funcTwo: 0x%p \n",funcTwo);

    }

