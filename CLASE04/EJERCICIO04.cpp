/*
Propuesto 44
Enunciado: Calcule la suma y la cantidad de números de la serie de fibonacci, menores a N. La serie de
fibonacci es una secuencia de números cuya característica es, que cada número de la serie debe ser igual
a la suma de los 2 números anteriores, la serie empieza con 0 y 1, entonces si el número N ingresado es
30,entonces la serie de fibonnaci menor a 30 sera 0 1 1 2 3 5 8 13 21 lo que se pide es la suma 
y cantidad de valores
cantidad de números de la serie.
*/

#include<iostream>
using namespace std;

int main(){

    int N;
    cout<<"Ingrese el valor de N: ";
    cin>>N;

    int suma = 1;
    int cantidad = 2;

    int a = 0;
    int b = 1;


    while(b<=N){
        int aux = b;
        b = a+b;
        a = aux;

        suma = suma + b;
        cantidad++;
    }

    cout<<"La suma de la serie de fibonnaci es: "<<suma<<endl;
    cout<<"La cantidad de valores en la serie es: "<<cantidad<<endl;

    return 0;
}