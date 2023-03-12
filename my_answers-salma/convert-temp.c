#include <stdio.h>
 int main()
 {
  float celcius;
   printf("Enter temperature in Celcuis=");
    scanf("%f",&celcius);
	float fahrenheit = (celcius * 9/5 ) + 32;
	printf("Temperature in Fahrenheit=%f°F\n",fahrenheit);
	return 0;
	}
