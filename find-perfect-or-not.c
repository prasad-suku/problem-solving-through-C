#include<stdio.h>
int main(){
	int num,sum=0,i;
	
	printf("Enter the number to find perfect no:");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
		if(num%i==0){
			sum = sum+i;
		}
	
	}
	
		if(sum ==num){
			printf("this is perfect no");
		}
		else{
			printf("not a perfect no");
		}
	return 0;
}
