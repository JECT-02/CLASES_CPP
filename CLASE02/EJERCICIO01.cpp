/*
Propuesto 11
Enunciado: Dado la edad de una persona determinar si es Mayor de edad o Menor de edad, considere
que mayor de edad es mayor o igual a 18.
*/

#include<iostream>
using namespace std;

int main(){

    int edad;
    cout<<"Ingrese la edad: ";
    cin>>edad;

    if(edad>=18){
        cout<<"La persona es mayor de edad"<<endl;
    }else{
        cout<<"La persona es menor de edad"<<endl;
    }

    return 0;
}