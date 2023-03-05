#include <stdio.h>
//absolute value of a given number
  void main(){
   int value;
   printf("get value from the user \n");
   scanf("%d",&value);
   if(value > 0){
           printf("absolute value is :\n |%d| = %d",value,value);
   }else{
                      printf("absolute value is :\n |%d| = %d",value,value*-1);

   }

}