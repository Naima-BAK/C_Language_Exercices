#include <stdio.h>
 //solve the equation ax+b=0 a must be different than 0 
 int main() 
 {
   float a;
   printf("enter a please : ");
    scanf("%f",&a);
	 if (a==0)
	 {
	  printf("error: this eq has no solutions\n");
	  }
	  else
	  { 
	    float b;
          printf("enter b please : ");
            scanf("%f",&b);
			float x = - b / a;
			printf("the solution of the equation %fx+%f=0 is x=%f\n",a ,b ,x);
			}
			return 0;





	 













 }
