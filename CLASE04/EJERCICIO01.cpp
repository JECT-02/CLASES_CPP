/*
Propuesto 41
Enunciado: Calcule la suma de los cuadrados y cubos de los N primeros números naturales
*/

#include<iostream>
using namespace std;


int main(){

    int N;
    int cuadrado=0, cubo=0;

    cout<<"Ingrese el valor de N: ";
    cin>>N;

    for(int i=1; i<=N; i++){
        cuadrado = cuadrado + i*i;
        cubo = cubo + i*i*i;
    }

    cout<<"============"<<endl;
    cout<<"La suma de cuadrados es: "<<cuadrado<<endl;
    cout<<"La suma de cubos es: "<<cubo<<endl;


    return 0;
}
