/*Propuesto 49
Enunciado: Obtenga la canüdad de los números primos de n cifras
*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int n;
    cout<<"Ingrese la cantidad de cifras: ";
    cin>>n;

    int cantidad = 0;

    int inicio = pow(10,n-1);
    int final = pow(10,n);

    for(int i=inicio;  i<final; i++){
        int contador = 0;
        for(int j=1; j<=i; j++){
            if(i%j == 0){
                contador++;
            }
        }

        if(contador == 2){
            cantidad++;
        }
    }

    cout<<"La cantidad de valores primos es: "<<cantidad<<endl;



}