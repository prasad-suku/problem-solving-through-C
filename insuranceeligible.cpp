#include<iostream>
using namespace std;
int main(){
	
	char married_status,gender;
	int age;
	cout<<"enTER THE MARRID STATUS:"<<endl;
	cin>>married_status;
	
	if(married_status=='m' || married_status=='M'){
		cout<<"You are eligible for insurance";
	}
	else if(married_status=='u' || married_status=='U')
	{
		  cout<<"ENter gender m|f"<<endl;
		  cin>>gender;
		 cout<<"Enter you age"<<endl;
		 cin>>age;
		 
		 if((gender =='m' || gender=='M') && (age>=30)){
		 	cout<<"YOU ARE ELIGIBLE FOR INSURANCE";
		 } 
		 else if((gender=='f' ||gender =='F' )&& (age>=25)){
		 	cout<<"YOU ARE ELIGIBLE";
		 }
		 else{
		 	cout<<"you are not eligible";
		 }
		  		  
		
		
	}
	else{
		cout<<"INVALID MARRIED STATUS";
	}
}

