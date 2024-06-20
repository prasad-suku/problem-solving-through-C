#include<stdio.h>
int main(){
	
	int num,i,is_prime=0;
	printf("Enter the num to find wheather given no is prime or not:");
	scanf("%d",&num);
	
	for(i=2;i<num;i++){
		if(num%i==0){
			is_prime =1;
			break;
		}
	}
	
	if(is_prime==0){
		printf("this  is prime no");
	}
	else
	printf("not a prime no");
	return 0;
	
}
