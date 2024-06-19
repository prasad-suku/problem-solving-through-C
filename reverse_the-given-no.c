#include<stdio.h>
int main(){
	
	int n,rev=0;
	printf("enter the number:");
	scanf("%d",&n);
	
	while(n>0){
		
		rev = (rev*10)+n%10; // =>3 =>12%10 =2 =>30+2=.32 =>
		n = n/10; //12 => 1
		
		
	}
	printf("rev %d",rev);
	
	
	
	return 0;
}
