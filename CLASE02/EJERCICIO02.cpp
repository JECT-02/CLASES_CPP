/*
Propuesto 12
Enunciado: Dado dos números enteros, devolver el número Menor.
*/

#include<iostream>
using namespace std;

int main(){

    int num1, num2;

    cout<<"Ingrese el primero numero: ";
    cin>>num1;

    cout<<"Ingrese el segundo numero: ";
    cin>>num2;

    if(num1<num2){
        cout<<"El numero menor es: "<<num1<<endl;
    }else if(num2<num1){
        cout<<"EL numero menor es: "<<num2<<endl;
    }else{
        cout<<"Los numeros son iguales"<<endl;
    }

    return 0;
}