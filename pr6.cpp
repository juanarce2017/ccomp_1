#include <iostream>

using namespace std;
float sumar ( float a, float b)
{
int result;
result = a + b;
return result;
}

int main()
{

   float a,b,result;
   float sumar ( float a, float b);

  cout << "Introduce los numeros a sumar" << endl;
  cin >> a >> b;
  result = sumar(a,b);

cout<<"la suma de "<<"+"<<a<<b<<" es:"<<result;

return 0;

}
