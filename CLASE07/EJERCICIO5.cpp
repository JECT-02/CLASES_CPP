/*
Dado un rango de numeros, indicar cuantos capicuas hay
*/

#include<iostream>
using namespace std;

int main(){

    int start, end;
    cout<<"Ingrese el valor inicial: ";
    cin>>start;
    cout<<"Ingrese el valor final: ";
    cin>>end;

    int suma = 0;

    int iterador = start;

    while(iterador<=end){
        int inverso = 0;
        int copia = iterador;

        while(copia != 0){
            int cifra = copia%10;
            inverso = inverso*10 + cifra;
            copia = copia/10;
        }
        
        if(iterador == inverso){
            cout<<iterador<<"   ";
            suma = suma + iterador;
        }
        iterador++;
    }
    cout<<endl;
    cout<<"La suma de los numeros capicuas es: "<<suma<<endl;

    return 0;
}