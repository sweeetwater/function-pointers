#include <stdio.h>

    void main(){
        char tmp[5]={1,2,3,4,5};            //ooo a piece of candy 
        char *arr = tmp+4;              // arr is now pointing to the address of tmp[4], which is 5

        printf("%d \n\n",arr[-2]); // prints out whats in index 2 of arr, which is 3
        
    }