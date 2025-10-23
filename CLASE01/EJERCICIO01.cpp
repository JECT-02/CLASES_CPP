/*
Enunciado: Dado dos números enteros diferentes, devolver el número Mayor.
Análisis: Para la solución de este problema, se requiere que el usuario ingrese dos números enteros
diferentes y el sistema realice el proceso para devolver el número mayor.
*/

#include<iostream>
using namespace std;

int main(){

    int num1, num2;

    cout<<"Ingrese el primer numero: ";
    cin>>num1;

    cout<<"Ingrese el segundo numero: ";
    cin>>num2;

    if(num1>num2){
        cout<<"El numero mayor es "<<num1<<endl;
    }
    else if(num2>num1){
        cout<<"El numero mayor es "<<num2<<endl;
    }
    else{
        cout<<"Los numeros ingresados son iguales"<<endl;
    }

    return 0;
}