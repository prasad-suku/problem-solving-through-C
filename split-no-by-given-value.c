#include<stdio.h>
int main(){
	 int num,split;
	
	  
	  printf("ENTER THE NO want to splilt by no :");
	  scanf("%d",&num);
	  
	  while(num>0){
	  	
	  	split = num%10;  //split - 123%10 => 3 => 2 =>1
	  
	  	printf("%d",split);  // 3 => 2 => 1
	  	num = num/10;
	  }
	  
return 0;	  
}
