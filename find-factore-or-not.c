#include<stdio.h>
int main(){
	int val,diviser;
	printf("Enter the value :");
	scanf("%d",&val);
	printf("Enter the diviser :");
	scanf("%d",&diviser);
	
	if(val%diviser==0){
		printf("%d is a FACTOR ",val);
	}
	else
		printf("%d is not a FACTOR ",val);
		return 0;
}
