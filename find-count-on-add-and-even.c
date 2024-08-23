#include<stdio.h>
int main(){
	int i,odd_count=0,even_count=0,n;
	printf("Enter the num :\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		if(i%2==0){
			even_count++;
		}
		else
		odd_count++;
	}
	printf("\n ODD COUNT :%d",odd_count);
		printf("\n EVEN COUNT :%d",even_count);
		return 0;
}
