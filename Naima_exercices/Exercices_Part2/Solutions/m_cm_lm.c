#include <stdio.h>
//Convert cm to m and km using switch cases :
void main(){

 
   float numberCM,convertCmToM,convertCmToKm;


   
      printf("get number:\n");
      scanf("%f",&numberCM);
      
      convertCmToM = numberCM * 0.01;

      convertCmToKm = numberCM * 0.00001;
 
 
      printf("%f in m is : %f",numberCM, convertCmToM);
      printf("%f in km is : %f",numberCM,convertCmToKm);
  

}
