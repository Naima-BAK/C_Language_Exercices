#include <stdio.h>
//LEAP YEAR:
 main(){

   int year;

   printf("input year");
   scanf("%d",&year);
   
   if(year % 4 == 0 ) {
   	    if(year % 100 != 0){
   	    	   	printf("the year %d it's' a leap year ",year);
		}else if( year % 100 == 0 && year % 400 == 0 ){	
   		        printf("the year %d it's a leap year ",year);
			
        }else{
        	   	printf("the year %d it's not' a leap year ",year);
		}
}
  

   
}
