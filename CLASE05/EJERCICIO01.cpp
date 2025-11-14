/*Calcular la suma de 2^1 + 2^2 + ... + 2^n*/

#include<iostream>
#include<cmath>

using namespace std;

int main(){

    int n;
    cout<<"Ingrese el valor de n: ";
    cin>>n;

    int suma = 0;

    for(int i=1; i<=n; i++){
        suma = suma + pow(2,i);
    }

    cout<<"El resultado de 2^1 + 2^2 + ... + 2^"<<n<<" es: "<<suma<<endl;

    return 0;
}