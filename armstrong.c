#include<stdio.h>
int main(){
	int arms=0,num,mod;
	
	printf("ENter the number :");
	scanf("%d",&num);
	int temp = num;
	while(num>0){
		mod = num%10;
		arms = arms+(mod*mod*mod);
		num = num/10;
	}
	 
	 if(temp==arms){
	 	printf("this is armstrong no");
	 	
	 }
	 else{
	 	printf("not a armstrong");
	 	
	 }
	return 0;
}
