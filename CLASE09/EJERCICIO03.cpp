/*
con parametro
*/

#include <iostream>
using namespace std;

int multiplicacion(int a, int b){
    int multiplicacion;
    multiplicacion = a * b;
    a = 10;
    b = 9;
    return multiplicacion;
}

int main(){
    int resultado;
    int a=4;
    int b=2;
    resultado = multiplicacion(a,b);
    cout<<"Resultado: "<<resultado<<endl;
    cout<<"Valor de a: "<<a<<endl;
    cout<<"Valor de b: "<<b<<endl;

    return 0;
}