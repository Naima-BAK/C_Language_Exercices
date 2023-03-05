#include <stdio.h>
      int main () {
         float x;
            printf("please enter num1: ");
                    scanf("%f",&x);
                          printf("x=%f\n",x);
         float y;
           printf("please enter num2: ");
                    scanf("%f",&y);
                          printf("y=%f\n",y);
     if( y > 0 ) {

				 float result =  x / y ;

                   printf("the result of dividing  %f by  %f is : %f\n ",x ,y ,result);
	}

	else {
               	printf("ERROR:num2 must be greater than 0.\n");
	}
               return 0;
}
