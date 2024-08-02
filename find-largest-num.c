#include<stdio.h>
int main(){
	int arr[10],n,i,j,max[0];
	printf("Enter the limit :\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("ENTER THE VALUE WANT TO STORE:\n");
		scanf("%d",&arr[i]);
	}
	
//	looping for finding max value in array

for(i=0;i<n;i++){
	if(arr[i] > max[0])
		max[0] = arr[i];
	return max;
	
}

	printf("the max value is: %d\n",max);

	return 0;
	
}
