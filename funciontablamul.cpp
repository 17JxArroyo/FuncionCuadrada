//fecha:2023-06-08
//Autor> Joseph Arroyo
//Tema> disene la funcion que imprima una tabla de multiplicar que
//se pasa como parametro

#include<iostream>
using namespace std;

void TablaMultiplicar(int tabla)
{
    cout<<endl<<"tabla de multiplicar del "<<tabla;

    for(int k=1; k<=12; k++)
    {
        cout<< endl << tabla << " x " << k << " = " << tabla*k;
    }
} 

//funcion que imprime la tabla de multiplicar. La funcion establece
//el limite inferior y limite superior de la tabla.
void TablaConLimites(int tabla, int incicio=1, int fin=12)
{

    cout<<endl<<"tabla de multiplicar del "<<tabla;

    for(int k=1; k<=12; k++)
    {
        cout<< endl << tabla << " x " << k << " = " << tabla*k;
    }

}

int mian()
{
    cout<<endl<<"Funcion tabla de multiplicar";
    TablaMultiplicar(5); cout<<endl; // llamda a la funcion
    TablaMultiplicar(10); cout<<endl;
    TablaMultiplicar(7); cout<<endl;

    int num;
    cout<<endl<<"Ingrese la tabla que desea imprimir: ";
    cin>>num;
    TablaConLimites(num);cout<<endl;
    TablaConLimites(3,4,10); cout<<endl;
    TablaConLimites(12,2,8); cout<<endl;
    TablaConLimites(11); cout<<endl;//la funcion asume los valores por defecto de 1 y 12

    return 0;
}