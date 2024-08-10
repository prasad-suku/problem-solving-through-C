#include<stdio.h>
int main(){
	
	int a=0,b=1,n,c;
	
	printf("Enter the limit:");
	scanf("%d",&n);
	
	n = n-2;
	while(n>0){
		  
		 c= a+b;  //c= 0+1 =>1+1=2 => 2+5 =>5
	
		 a=b; // a=1 => a=2
		 b=c; // b=1 => b=3
		 
		 n--;
 	}
 		 printf("fibonaci values is %d",c);
	
	
	return 0;
}
