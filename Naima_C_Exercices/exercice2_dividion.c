#include <stdio.h>
//division of two number :
  void main(){
   int a,b,x;
   printf("get a and b from the user \n");
   scanf("%d",&a);
   scanf("%d",&b);
if(a != 0){
   x = b/a;         
     printf("the x = %d / %d = %d ",b,a,x);

}else{
    printf("error a = 0");
}
   

}