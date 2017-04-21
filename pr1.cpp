#include<iostream>

using namespace std;

int main()
{
    float km, m;

    cout << "Escribe la cantidad de millas:\n";
    cin >> m;

    km = m*1.60934;

    cout << m << "  millas son " << km << " kilometros\n";

    return 0;
}


