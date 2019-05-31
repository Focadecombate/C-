#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	int d,e,f;
	cin>>a>>b>>c;
	d = a/2;
	e = b/3;
	f = c/5;
	if (a==0 || b==0 || c==0){
		cout<<0<<endl;}
	else{if(d>e && e>f){
		cout<<f<<endl;}
		else if (d>=e && f>=e){
		cout<<e<<endl;}
		else if (e>=d && f>=d){
		cout<<d<<endl;}
		else if (e>=d && d>=f){
		cout<<f<<endl;}
		else if (e>=d && d==f){
		cout<<f<<endl;}
		else if (d>=e && e==f){
		cout<<e<<endl;}
	}
return 0;
}
