#include<stdio.h>
int main(){
	int num ,sum=0;
	
	printf("ENTER THE NUM :");
	scanf("%d",&num);
	while(num>0){
		sum = sum + num%10;
		num = num/10;
		
	}
	printf("sum of value is :%d ",sum);
	return 0;
}
