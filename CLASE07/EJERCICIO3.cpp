/*
Imprimir los numeros de 2 en 2 de un rango inicio a final
*/

#include<iostream>
using namespace std;

int main(){

    int inicio;
    int final;

    cout<<"Ingrese el valor de inicio: ";
    cin>>inicio;
    cout<<"Ingrese el valor de final: ";
    cin>>final;

    int contador = inicio;

    while(contador <= final){
        cout<<contador<<"   ";
        contador = contador+2;
    }

    return 0;
}