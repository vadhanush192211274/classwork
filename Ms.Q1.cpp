1. What will be the output if you execute the following code in C?
 
#include<stdio.h>
int main(){
   int arr[]={6,12,18,24};
   int x=0;
   x=arr[1]+(arr[1]=2);
   printf("%d",x);
   return 0;
}
OUTPUT : 14
