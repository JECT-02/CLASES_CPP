/*
Propuesto 43
Enunciado: Dado un rango numérico entero positivo a y b, obtener la suma y la cantidad de los números
pares, impares y múltiplos de 3
*/

#include<iostream>
using namespace std;

int main(){

    int a, b;
    int suma_pares = 0, cantidad_pares = 0;
    int suma_impares = 0, cantidad_impares = 0, suma_3 = 0, cantidad_3 = 0;

    cout<<"Ingrese el limite inferior: ";
    cin>>a;

    cout<<"Ingrese el limite superior: ";
    cin>>b;

    for(int i=a; i<=b; i++){
        if(i % 2 == 0){
            suma_pares = suma_pares + i;
            cantidad_pares++;
        }
        if(i % 2 != 0){
            suma_impares = suma_impares + i;
            cantidad_impares++;
        }
        if(i%3 == 0){
            suma_3 = suma_3 + i;
            cantidad_3++;
        }
    }

    cout<<"Suma pares: "<<suma_pares<<endl;
    cout<<"Suma impares: "<<suma_impares<<endl;
    cout<<"Suma mult 3: "<<suma_3<<endl;
    cout<<"========="<<endl;
    cout<<"Cantidad pares: "<<cantidad_pares<<endl;
    cout<<"Cantidad Impares: "<<cantidad_impares<<endl;
    cout<<"Cantidad mul 3: "<<cantidad_3<<endl;

    return 0;
}