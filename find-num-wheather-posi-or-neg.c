#include<stdio.h>
int main(){
	
	int num;
	printf("Enter the num to find wheather given no is positive or negative: \n");
	scanf("%d",&num);
	if(num==0){
		printf("given no is zero");
	}
	else if(num<0){
		printf("%d is negative number",num);
	}
	else{
		printf("%d is positive number",num);
	}
	
	return 0;
}
