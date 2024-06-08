//fecha:2023-06-08
//Autor> Joseph Arroyo
//Tema> disene la funcion que recibe como parametro un entero
#include<iostream>
using namespace std;

//eleva un entero al cuadrado
int Cuadrado(int num)
{
 int res;
 res = num*num;

 return res;   
} 

int main()
{
    cout<<endl<<"funcion que calcula el cuadrado de un enetero.";
    int x = Cuadrado(12) + 100*4/2;
    cout<<endl<<"El resultado de la variable x es "<<x;

    cout<<endl<<"El cuadrado de 12 es "<<x;

    cout<<endl<<"El cuadrado de 5 es"<<Cuadrado(5);
    cout<<endl<<"El cuadrado de 11 es "<<Cuadrado(11);

    cout<<endl<<"Ingrese el numero que quieres elevar al cuadradp: ";
    cin>>x;
    cout<<endl<<"El cuadrado de "<< x<< " es "<<Cuadrado(x);

    cout<<endl<<"El cuadrado es "<<Cuadrado(Cuadrado(3));

    return 0;
}