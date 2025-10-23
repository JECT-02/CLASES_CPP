/*
Propuesto 19
Enunciado: Dado 3 longitudes, diga si forman un triángulo.
TEOREMA: En todo triángulo, cada lado es menor que la suma de los otros dos, pero mayor que su
diferencia.
*/
//        |l1 - l3|  < l2 < |l1 + l3| -> el triangulo existe

#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int l1, l2, l3;

    cout<<"Ingrese la longitud del lado 1: ";
    cin>>l1;

    cout<<"Ingrese la longitud del lado 2: ";
    cin>>l2;

    cout<<"Ingrese la longitud del lado 3: ";
    cin>>l3;

    // verificar existencia

    if(abs(l1-l3) < l2 && l2 < abs(l1+l3)){
        cout<<"El triangulo si existe"<<endl;
    }else{
        cout<<"El triangulo no existe"<<endl;
    }

    return 0;
}