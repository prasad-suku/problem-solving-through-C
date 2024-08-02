#include<stdio.h>
int main(){

int a,b;
a=10,b=5;
printf("before swapping a is %d and b is %d \n",a,b);
a=a-b;
b=b+a;
printf("after swapping a is %d and b is %d ",a,b);
return 0;
}
