#include<stdio.h>
int main(){
	int n1=20,n2=39,tem;
	
	tem = n1;  // tem = 20
	n1 = n2;   //n1 = 39
	n2 = tem;  //n2 = 20
	
	printf("After swapping :");
	printf("\nN1 IS %d: ",n1);
	printf("\nN2 IS %d: ",n2);
	return 0;
}
