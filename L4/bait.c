#include <stdio.h>   //ooo a piece of candy
     
void main(){
     int arr[3]={7,14,21};
     printf("%d \n\n", arr[2]);     // prints out whats in index 2 of arr, which is 21
     printf("%d \n\n", *(arr+1));   // a fancy way to print out whats in index 1 of arr, which is 14 without using the [] operator

     }