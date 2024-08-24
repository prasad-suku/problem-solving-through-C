#include<iostream>
using namespace std;
int main(){
	
	int h;
	int t;
	float c;
	cout<<"ENter h,f,t"<<endl;
	cin>>h>>t>>c;
	
	if(h>50 &&  c <0.7 && t>5600){
		cout<<"GRADE -10"<<endl;
	}
	
	else if(h>=50 && c<0.7){
		cout<<"GRADE -9"<<endl;
	}
	
		else if(t>5600 && c<0.7){
		cout<<"GRADE -8"<<endl;
	}
	
	else if(h>50 && t<5600){
		cout<<"GRADE -7"<<endl;
	}
	 else if(h>50 || t<5600 || c<0.7){
	 	cout<<'grade -6';
	 }
	 else{
	 	cout<<"grade 5";
	 }
	
	return 0;
}
