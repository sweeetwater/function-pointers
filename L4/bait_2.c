#include <stdio.h>   // ooo a piece of candy

void main (void){
    int arr[3] = {7,14,21};         

    int *ptr= arr; // ptr is now pointing to the address of arr

         printf("%d \n\n", ptr[1]); 
         printf("%d \n\n", arr[1]);
}