#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Elige una conversion"<<endl;
    cout<<"1. C  a  F"<<endl;
    cout<<"2. F  a  C"<<endl;
    cin>>n;
     if(n==1){
          float c;
          cout<<"Ingresa grados centigrados"<<endl;
          cin>>c;
          double f=(c*9/5)+(32);
          cout<<c<<"C equivale a "<<f<<"F";
      }else{
          float f;
          cout<<"Ingresa grados fahrenheit"<<endl;
          cin>>f;
          double c=(f-32)*5/9;
          cout<<f<<"F equivale  a "<<c<<"C";
      }
   return 0;
}
