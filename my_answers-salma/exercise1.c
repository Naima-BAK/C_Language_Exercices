#include <stdio.h>
   int absoluteValue(int x)  
{
 
  if (x >= 0 ) {
      return x;
	 } else { 
	         return -x;
 }
}



int main()
{
 int x;
   printf("enter a number please:");
   scanf("%d",&x);
   printf("The absolute value of %d is %d\n", x, absoluteValue(x));
   return 0;
   }














