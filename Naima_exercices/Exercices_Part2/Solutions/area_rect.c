#include <stdio.h>
//area of  rectangle
void main(){

   float width,length;

   printf("get value from the user of width and lenght  \n");

   scanf("%f",&width);
   scanf("%f",&length);

   float area_rect = width * length;

   printf("area of this rectangle  is :\n %f * %f = %f sq.units",width,length,area_rect);
   

}