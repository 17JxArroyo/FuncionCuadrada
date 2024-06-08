//fecha:2023-06-08
//Autor> Joseph Arroyo
//Tema> disene las funciones que calculan las operaciones aritmeticas
//fundamentales: suma, resta, producto y division
#include<iostream>
#include<conio.h>
using namespace std;
double suma(double num1, double num2)
{
    return num1+num2;
}
double resta(double num1, double num2)
{
    return num1+num2;
}
double Producto(double num1, double num2)
{
    return num1+num2;
}
double Division(double num1, double num2)
{
    return num1+num2;
}


int main()
{
    cout<<endl<<"Funciones con las operaciones matematicas fundamentales ";
    double res = suma (10,23,4);
    cout<<endl<<"La suma es "<<res;

    cout<<endl<<"Una suma un poco complicada"<<Suma(12,3 Suma(2,4));
    cout<<endl<<"Una suma un poco complicada"<<Suma(suma(1,4) Suma(2,4));
    cout<<endl<<"Una suma un poco complicada"<<Suma(suma(1,Producto(2,3)) Suma(2,4));


    //Calculadora sencilla
    //Pida al usuario 2 numeros reales 

    char opcion;
    double n1,n2;
    cout<<endl<<"Ingresa el primer numero: ";
    cin>>n1;fflush(stdin);
    cout<<endl<<"Ingresa el segundo numero: ";
    cin>>n2;fflush(stdin);
    while(true)
    {
        cout<<endl<<"MENU PRINCIPAL"<<endl<<"=============";
        cout<<endl<<"+ Suma";
        cout<<endl<<"- Resta";
        cout<<endl<<"* Producto";
        cout<<endl<<"/ division";
        cout<<endl<<"1 Ingresar nuevos numeros";
        cout<<endl<<"S Salir";
        cout<<endl<<"Selecciona tu opcion: ";
        opcion = getch():fflush(stdin);
        switch(opcion)
        {
            case '+': cout<<endl<<"La suma es "<<Suma(n1,n2); break;
            case '-': cout<<endl<<"La resta es "<<resta(n1,n2); break;
            case '*': cout<<endl<<"El producto es "<<Producto(n1,n2); break;
            case '/': cout<<endl<<"La division es "<<Division(n1,n2); break;
            case '1':
                cout<<endl<<"Ingresa el primer numero: ";
                cin>>n1;fflush(stdin);
                cout<<endl<<"Ingresa el segundo numero: ";
                cin>>n2;fflush(stdin);
                break;
        }
        is(opcion=='s' || opcion'S')
        break;
    }
    
    return 0;
}