/*converting length units*/
#include <stdio.h>
 int main()
 {
  float L;
   printf("enter length in centimeter:");
    scanf("%f",&L);
	float meter = L / 100 ;
	  printf("Lenth in meter=%fm\n",meter);
	float kilometer = L / 100000 ;
	  printf("Lenth in kilometer=%fkm\n",kilometer);
	  return 0;
	  }


