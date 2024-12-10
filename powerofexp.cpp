#include<iostream>
using namespace std;
int main(){
    int base,res=1,exp;
    cout<<"Enter the base value:"<<endl;
    cin>>base;
    cout<<"Enter the expr value:"<<endl;
    cin>>exp;

    while(exp>0){
        res = base*res;
        exp--;
    }

    cout<<"total value is:"<<res;
    return 0;



}
