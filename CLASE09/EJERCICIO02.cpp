/*
parametros y procedimientos
*/

#include <iostream>
using namespace std;

int suma(int valor1, int valor2){
    int suma;
    suma = valor1 + valor2;
    valor1=10;
    return suma;
}

int resta(int &a, int &b){
    int resta;
    resta = a - b;
    a=10;
    return resta;
}

int main(){

    int resultado;
    int a=2;
    int b=5;
    resultado = suma(a,b);
    int resultado_resta;
    resultado_resta = resta(a,b);
    

    return 0;
}