/*
Enunciado: Dado un número entero, devolver el doble del número si el número es Posiüvo, el Triple del
¡úmero si es Negativo, y Cero si el número es Neutro.
*/

#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"Ingrese un numero: ";
    cin>>n;

    if(n>0){
        cout<<"El numero es positivo"<<endl;
        cout<<"El doble es: "<<2*n<<endl;
    }else if(n<0){
        cout<<"El numero es negativo"<<endl;
        cout<<"El triple del numero es: "<<3*n<<endl;
    }else{
        cout<<"El numero es neutro"<<endl;
        cout<<0<<endl;
    }

    return 0;
}