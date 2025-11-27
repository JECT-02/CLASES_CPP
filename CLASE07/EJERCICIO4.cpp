/*
dado un rango de numeros determine cuantos primos contiene
*/

#include<iostream>
using namespace std;

int main(){

    int inicio, final;
    int num_primos = 0;

    cout<<"Ingrese el inicio: ";
    cin>>inicio;

    cout<<"Ingrese el final: ";
    cin>>final;

    int contador = inicio;

    while(contador<=final){
        int divisores = 0;
        int i = 1;
        while(i<=contador){
            if(contador % i == 0){
                divisores++;
            }
            i++;
        }

        if(divisores == 2){
            num_primos++;
        }
        contador++;
    }

    cout<<"El numero de valores primos en el rango es: "<<num_primos<<endl;

    return 0;
}
