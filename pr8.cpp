#include <iostream>

using namespace std;

void cambiar(int *x , int *y );

int main()
{

    int n1,n2;
    cout<<"ingrese el n1: ";
    cin>>n1;
    cout<<"ingrese el n2: ";
    cin>>n2;

    cout<<"Antes del cambio   n1 = "<<n1<<" y n2 = "<<n2<<endl<<endl;
    cambiar(&n1,&n2);
    cout<<"Despues del cambio n1 = "<<n1<<" y n2 = "<<n2<<endl<<endl;

    return 0;
}

void cambiar(int *x, int *y)
{
    int z;
    z = *x;
    *x = *y;
    *y = z;
}
