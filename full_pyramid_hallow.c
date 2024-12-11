#include<stdio.h>
int main(){

 int totalrows,rows,i,j,space,stars;


  printf("eNTER THE TOTALROWS:\n");
  scanf("%d",&totalrows);

  if(totalrows%2==0){
    printf("enter the odd number");
    exit(0);
  }

  rows = totalrows/2 +1;
   //off pyramid

   for(i=1;i<=rows;i++){

      //space
      for(space=1;space<=rows-i;space++){
        printf("  ");
      }
      //start
      for(j=1;j<=i*2-1;j++){
         printf("$ ");
      }
      printf("\n");
   }

   //below

   int gap = 1;
   stars= totalrows -2;
   for(i=1;i<=rows-1;i++){
      for(space=1;space<=gap;space++){
        printf("  ");

      }
      gap++;
      for(j=1;j<=stars;j++){
        printf("# ");

      }
       stars = stars-2;
      printf("\n");
   }



   return 0;
}
