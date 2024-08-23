
int main(){
	
	int year;
	
printf("Entert the year :");
scanf("%d",&year);
//printf("%d",year);

if(year%4==0){
	  if(year%100==0){
	  	if(year%400==0){
	  		printf("%d : is lear year",year);
		  }
		  else{
		  	printf("not a leap year");
		  }
	  }
	  else{
	  	printf("leap year:");
	  }
//	  printf("leap year");
}
else
{
	printf("Not a year year");
}
return 0;
}
