#include<iostream>
using namespace std;
int main(){
  int n,i,total=0;
  cout<<"enter the limit";
  cin>>n;
  
  for(i=1;i<=n;i++){
  	total+=i;
  }
  
  cout<<'total'<<total;
	return 0;
 }
