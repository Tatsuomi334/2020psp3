#include <stdio.h>

 void func(int a,int* b){
   a=10;
   *b = 10;
   }int main(void){
     int a = 1;
     int b = 1;
     func(a,&b);
    
   printf("a=%d ,b=%d\n",a,b);
   return 0;
 }