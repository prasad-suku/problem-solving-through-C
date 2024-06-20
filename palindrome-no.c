#include<stdio.h>
int main(){
//	palindrome 

int num,temp,mod,rev;

printf("enter the num:\n");
scanf("%d",&num);
temp = num;

while(num>0){
	
	mod = num%10;
	rev = rev*10+mod;
	num = num/10;
	
}
  //checking whether both are same even after reverse

    if(temp==rev){
    	printf("%d is palindrome no",temp);
	}
	else{
		printf("%d is not a palindrome no",temp);
	}
    
return 0;
}
