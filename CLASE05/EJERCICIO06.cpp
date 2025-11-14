/*
SUMA DE FACTORIALES
*/


#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Ingrese el valor de n: ";
    cin>>n;

    int suma = 0;

    for(int i=1; i<=n; i++){
        int factorial=1;
        for(int j=1; j<=i; j++){
            factorial = factorial * j;
        }
        suma = suma + factorial;
    }

    cout<<"La suma de factoriales es: "<<suma<<endl;

    return 0;
}