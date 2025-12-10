/*
4. sintaxis general de una funcion
*/

#include <iostream>
using namespace std;

float suma(float valor1, float valor2){
    float suma;
    suma = valor1+valor2;
    return suma;
}

tipoDato nombreFuncion(tipo parametro1, tipo parametro2){
    //cuerpo de la funcion
    return valor; //opcional
}

int main(){

    float resultado;
    resultado = suma(5,7);
    cout<<"Resultado: "<<resultado<<endl;
    return 0;
}