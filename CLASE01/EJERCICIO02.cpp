/*
Enunciado: Después de ingresar 4 notas, obtener el promedio de la tres mejores notas y el mensaje
Aprobado si el promedio es mayor o iguala 11, caso contrario Desaprobado
*/


#include<iostream>
using namespace std;

int main(){

    float nota1, nota2, nota3, nota4;
    float menor;
    float promedio;

    cout<<"Ingrese la nota 1: ";
    cin>>nota1;
    cout<<"Ingrese la nota 2: ";
    cin>>nota2;
    cout<<"Ingrese la nota 3: ";
    cin>>nota3;
    cout<<"Ingrese la nota 4: ";
    cin>>nota4;

    if(nota1>=nota2){
        menor = nota2;
    }else{
        menor = nota1;
    }

    if(nota3 >= menor){
        menor = menor;
    }else{
        menor = nota3;
    }

    if(nota4 >= menor){
        menor = menor;
    }else{
        menor = nota4;
    }

    promedio = (nota1+nota2+nota3+nota4-menor)/3;

    cout<<"La nota eliminada es: "<<menor<<endl;

    if(promedio>=11){
        cout<<"Su promedio es "<<promedio<<" usted esta aprobado"<<endl;
    }else{
        cout<<"Su promedio es "<<promedio<< "usted esta desaprobado"<<endl;
    }


    return 0;
}