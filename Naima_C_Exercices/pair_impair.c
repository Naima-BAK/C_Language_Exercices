
#include <stdio.h>
//pair & impair :
void main(){

   int a;
   printf("get a from the user \n");
   scanf("%d",&a);

   if(a%2 == 0){
       printf(" %d est pair",a);

   }else{
      printf(" %d est impair",a);
   }

}