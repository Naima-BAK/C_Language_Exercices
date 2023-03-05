#include <stdio.h>
//Solution of ax + b = 0
  void main(){
   float a,b,x;
   printf("get a and b from the user \n");
   scanf("%f",&a);
   scanf("%f",&b);

   if(a == 0){

           printf("the equation has no solution");
   }else{
    x = -b/a;
    printf("th solution of  %fx + %f = 0 is : %f ",a,b,x);

   }

}