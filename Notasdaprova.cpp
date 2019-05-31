#include <iostream>
using namespace std;
int main (){
int notas;
cin>>notas;
if (notas==0){
    cout<<"E"<<endl;
}
else if (notas<=35){
    cout<<"D"<<endl;
}
else if (notas<=60){
    cout<<"C"<<endl;
}
else if (notas<=85){
    cout<<"B"<<endl;
}
else{
    cout<<"A"<<endl;
}
return 0;
}