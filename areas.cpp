#include <iostream>

using namespace std;

int main()
{
int radio,lado,base,altura;
float area,area2,area3;

    cout<<"Circulo"<< endl;
    cout<<"Ingress el radio"<<endl;
    cin>> radio;
    area=3.14*radio*radio;
    cout<<"area:"<<area<<endl;

    cout<<"Cuadrado"<< endl;
    cout<<"Ingress el lado"<<endl;
    cin>> lado;
    area2=lado*lado;
    cout<<"area:"<<area2<<endl;

    cout<<"rectangulo"<< endl;
    cout<<"Ingress la base "<<endl;
    cin>> base;
    cout<<"Ingress la altura "<<endl;
    cin>> altura;

    area3=base*altura;
    cout<<"area:"<<area3<<endl;



}
