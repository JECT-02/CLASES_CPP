/*
Calcular el cuadrado de un numero
*/

#include<iostream>
#include<cmath>

using namespace std;

int main(){

    float n;
    cout<<"Ingrese el valor de n: ";
    cin>>n;

    float cuadrado;
    cuadrado = pow(n,2);

    cout<<"El cuadrado de tu numero es: "<<cuadrado<<endl;

    return 0;
}