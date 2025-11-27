/*
Programa que lee una secuencia de números positivos hasta leer un número
negativo, se imprime la cantidad de números positivos ingresados y la sumatoria
de los números positivos ingresados.
*/
#include<iostream>
using namespace std;

int main(){

    float n;
    int contador = 0;
    float suma = 0;

    cout<<"Ingrese un numero positivo o un negativo si quiere terminar: ";
    cin>>n;

    while(n>=0){
        contador++;
        suma = suma + n;
        cout<<"Ingrese un numero positivo o un negativo si quiere terminar: ";
        cin>>n;
    }

    cout<<"El numero de valores ingresados es: "<<contador<<endl;
    cout<<"La suma de los valores es: "<<suma<<endl;

    return 0;
}