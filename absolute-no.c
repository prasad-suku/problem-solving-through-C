#include<stdio.h>
int main(){
	
	int num,abs;
	
	printf("\nenter the number:");
	scanf("%d",&num);
	if(num<0){
		num = -(num);  // num = -(-4) => num = 4
			printf("num is %d",num);
	}
	else
	printf("num is %d",num);
	return 0;
}
