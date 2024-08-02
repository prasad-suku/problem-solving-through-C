#include<stdio.h>
int main(){
	 
	 int n;
	 printf("Enter the num to find wheather given no is EVEN OR ODD N0 :");
	 scanf("%d",&n);
	 
	 if(n%2==0){
	 	printf("Given no is even no");
	 }
	 else if(n==0){
	 	printf("given no is zero ");
	 }
	 else
	 printf("given no is odd");
	
	return 0;
}
