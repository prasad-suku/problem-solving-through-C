#include<iostream>
using namespace std;
int main(){
   int a=0,b=1,n,c;
   cout<<"enter the limit"<<endl;
   cin>>n;
   n = n-2;

   while(n>0){
    c = a+b;  // c= 0+1=>1
    a=b;   //a = 1
    b=c; // b=1
    n--;
   }

   cout<<"total"<<c;
   return 0;

}
