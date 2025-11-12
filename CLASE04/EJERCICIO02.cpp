/*
Propuesto 42
Enunciado: Obtener la suma y la cantidad de los números divisibles por 3 y 5 a la vez, de los N primeros
números naturales.
*/

#include<iostream>
using namespace std;

int main(){

    int N;
    int suma = 0, cantidad = 0;

    cout<<"Ingrese hasta que numero verificar: ";
    cin>>N;

    for(int i=1; i<=N; i++){
        if(i%3 == 0 && i%5 == 0){
            suma = suma + i;
            cantidad++;
        }
    }

    cout<<"La suma de los divisores de 3 y 5 es: "<<suma<<endl;
    cout<<"La cantidad de valores encontrados es: "<<cantidad<<endl;

    return 0;
}