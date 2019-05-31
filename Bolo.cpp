#include <iostream>
using namespace std;
int main (){
int a,b,c;
int d,e,f;
cin>>a>>b>>c;
d=a/2;
e=b/3;
f=c/5;
if (d==0 || e==0 || f==0) {
    cout<<"0"<<endl;
}
else if (d>=e && e>=f){
    cout<<f<<endl;
}
else if (d>=e && f>=e){
    cout<<e<<endl;
}
else if (e>=f && f>=d){
    cout<<d<<endl;
}
else if (f>=e && f>=d){
    cout<<d<<endl;
}
else if (f>=e && d>=e){
    cout<<e<<endl;
}
else{
    cout<<f<<endl;
}
return 0;
}