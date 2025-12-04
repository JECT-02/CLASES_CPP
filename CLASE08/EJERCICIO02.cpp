/*
Dado un numero, devolver el digito mayor
*/

#include<iostream>
#include<cmath>

using namespace std;

int main(){

    long long n;
    cout<<"Ingrese un numero: ";
    cin>>n;

    long long mayor = -1;
    n = abs(n);

    while(n>0){
        long long digito = n%10;
        if(digito > mayor){
            mayor = digito;
        }

        n = n/10;
    }


    cout<<"El digito mayor es: "<<mayor<<endl;
    return 0;
}