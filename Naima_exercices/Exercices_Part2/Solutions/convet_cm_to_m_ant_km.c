#include <stdio.h>
//Convert cm to m and km using switch cases :
void main(){

   int choice;
   float numberCM;
   int res;

   printf("hi");
   do{
      printf("get number:\n");
      scanf("%f",&numberCM);
      printf("what is your choice :\n");
      printf("-1- convert cm to m \n");
      printf("-2- convert cm to km \n"); 
 
      scanf("%d",&choice);

    switch(choice){
        case 1 : printf("%f in m is \n", numberCM * 0.01);
                 break;
        case 2:  printf("%f in km is \n",numberCM * 0.00001);
                 break;
        default :
              printf(" --- \n");break;

   }
 
printf("do you want to continue if no input 0? \n");
scanf("%d",&res);

   }while(res != 0);
   printf("by by");

}
