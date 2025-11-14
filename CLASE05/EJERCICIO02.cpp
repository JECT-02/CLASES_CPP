/*
Ingresar un valor del 1 al 10 y una salida estandar de su tabla de multiplicar
*/

#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"Ingrese de que numero quiere su tabla de mutiplicar: ";
    cin>>n;

    if(n<1 || n>10){
        cout<<"Solo se permiten numeros del 1 al 10, ERROR"<<endl;
    }else{
        cout<<endl;
        cout<<"============= TABLA DE MULTIPLICAR ============="<<endl;
        for(int i=1; i<=10; i++){
            cout<<n<<" x "<<i<<" = "<<n * i<<endl;
        }
    }

    return 0;
}