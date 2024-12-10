#include<stdio.h>
int main(){

  int a,b,diff;

  printf("enter a value");
  scanf("%d",&a);
   printf("enter a value");
  scanf("%d",&a);


   if(a>b){
      diff = a-b;
    a= a-diff;
     b = b+diff;


   }
   else if(a<b){
    diff= b-a;

    a = a+diff;
    b = b-diff;

   }
   else{
    printf("invalid");
   }

 printf("after swap :\n");
  printf("a :%d",a);
  printf("b :%D",b);


  return 0;
}
