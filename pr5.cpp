#include <iostream>

using namespace std;

int main() {

   int numero, n1;
   cout<<"Escribe un numero de uno a nueve : "; cin>>numero;
   n1 = numero;

  if(numero < 0 ){
      cout<<"Numero no permitido";

   }else{

       if(n1 == 0 ){
         cout<<"Cero";
      }else if(n1 == 1 ){
         cout<<"Uno";
      }else if(n1 == 2 ){
         cout<<"Dos";
      }else if(n1 == 3 ){
         cout<<"Tres";
      }else if(n1 == 4 ){
         cout<<"Cuatro";
      }else if(n1 == 5 ){
         cout<<"Cinco";
     }else if(n1 == 6){
         cout<<"Seis";
      }else if(n1 == 7){
         cout<<"Siete";
      }else if(n1 == 8){
         cout<<"Ocho";
      }else if(n1 == 9){
         cout<<"Nueve";
      }
   }

}
