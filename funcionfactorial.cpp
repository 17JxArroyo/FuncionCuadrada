//fecha:2023-06-08
//Autor> Joseph Arroyo
//Tema> disene la funcion que calcula el factorial de un entero.
//Por ejemplo: el factorial de 5 es 1x2x3x4x5 = 120
// el factoriaal de 4 es 1x2x3x4 = 24
//el factorial de 0 es 1



#include<iostream>
#include<conio.h>

using namespace std;

int Factorial(int num)
{
    if(num==0)
    return 1;
    else
    {
        for(int k=1; k<=num; k++)
        fac=fac*k;
    }
}

int main()
{
    cout<<endl<<"El factorial de 5 es "<<factorial (5);
    cout<<endl<<"El factorial de 5 es "<<factorial (6);
    cout<<endl<<"El factorial de 5 es "<<factorial (4);
}