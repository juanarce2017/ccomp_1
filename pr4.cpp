#include <iostream>

using namespace std;

int base,potencia,result,i;

int main (void)
{
    cout << "ingrese la base" <<endl;
    cin >> base;
    cout << "ingrese la potencia" <<endl;
    cin >> potencia;
    result=1;
    for (i=1 ; i<=potencia; i++)
    {
        result=result*base;
    }
    cout << "El resultado es " <<result<<endl;
  return 0;
}
