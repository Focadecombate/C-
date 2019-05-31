#include <iostream>
using namespace std;
int main (void){
int n,p,q;
char c;
cin>>n>>p>>c>>q;
switch (c){
case '+':
    if (n>=(p+q)){
        cout<<p+q<<endl;
    }
    else{
        cout<<"OVERFLOW"<<endl;
    }
    break;
case '*':
    if (n>=(p*q)){
        cout<<p*q<<endl;
    }
    else{
        cout<<"Overflow"<<endl;
    }
    break;
default:
    cout<<"Use apenas + ou *"<<endl;
    break;
}
return 0;
}