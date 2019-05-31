#include <iostream>
using namespace std;
int main(){
int r,p;
cin>>p>>r;
if (p==0){
    cout<<"C"<<endl;
}
else if (p==1){
    if (r==0){
        cout<<"B"<<endl;
    }
    else if (r==1){
        cout<<"A"<<endl;
    }
}
else{
    cout<<"Por favor escrever apenas '1' ou '0' "<<endl;
}
return 0;
}