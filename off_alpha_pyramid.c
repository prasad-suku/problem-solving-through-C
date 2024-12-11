#include<stdio.h>
int main(){

  int i,j,space,totalrows,rows,letter='a';

  printf("enter totalrows:\n");
  scanf("%d",&totalrows);

  rows = totalrows/2 +1;

  int tempstats = totalrows;
  for(i=0;i<rows;i++){
      for(space=1;space<=i;space++){
        printf("  ");
      }

      for(j=0;j<tempstats;j++){
         printf("%c",j+letter);
      }
      tempstats = tempstats-2;
      printf("\n");
  }

  return 0;

}
