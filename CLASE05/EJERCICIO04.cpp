/*
Programa que muestre la serie de fibonacci
*/


#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Ingrese el limite superior de la serie: ";
    cin>>n;

    int a = 1;
    int b = 1;
    cout<<"SERIE DE FIBONNACI"<<endl;
    cout<<a<< " "<<b<<" ";

    
    for(int i=0; i<100; i++){
        int aux = b;
        b = a + b;
        a = aux;

        if(b>n){
            break;
        }
        cout<<b<<" ";
    }

    return 0;
}