/*
Programa que muestre la serie de fibonacci
*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Ingrese la cantidad de valores de fibbonaci que desea: ";
    cin>>n;
    
    int a = 1;
    int b = 1;

    cout<<" .: RESULTADO : ."<<endl;
    cout<<a<<" "<<b<<" ";

    for(int i=1; i<=n-2; i++){
        int aux = b;
        b = a+b;
        a = aux;

        cout<<b<<" ";
    }

    return 0;
}