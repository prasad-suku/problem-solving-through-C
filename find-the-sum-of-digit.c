#include<stdio.h>
int main(){
	int num,sum,total=0;
	
	printf("Enter the number :\n");
	scanf("%d",&num);
	
	while(num>0){
		
		sum = num%10;  //143%10 = 3 => 4 =>1
		
		num = num/10;  //143/10 = 14
		
		total= total+sum;
	}
	
	printf("total is :%d",total);
	
	return 0;
	
}
