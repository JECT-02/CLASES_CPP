/*
3 NUMEROS ORDENAR DE FORMA ASCENDENTE Y DESCENDENTE
*/

#include<iostream>
using namespace std;

int main(){

    int num1, num2, num3;
    int menor, intermedio, mayor;

    cout<<"Ingrese el primer numero: ";
    cin>>num1;

    cout<<"Ingrese el segundo numero: ";
    cin>>num2;

    cout<<"Ingrese el tercer numero: ";
    cin>>num3;

    if(num1>=num2 && num1 >= num3){
        mayor = num1;
        if(num2>=num3){
            intermedio = num2;
            menor = num3;
        }else{
            intermedio = num3;
            menor = num2;
        }
    }

    if(num2 >= num1 && num2 >= num3){
        mayor = num2;
        if(num1>=num3){
            intermedio = num1;
            menor = num3;
        }else{
            intermedio = num3;
            menor = num1;
        }
    }

    if(num3>=num2 && num3 >= num1){
        mayor = num3;
        if(num1>=num2){
            intermedio = num1;
            menor = num2;
        }else{
            intermedio = num2;
            menor = num1;
        }
    }

    // imprimir en orden ascendente

    cout<<"====================== ORDEN ASCENDENTE ========================"<<endl;
    cout<<"Menor: "<<menor<<endl;
    cout<<"Intermedio: "<<intermedio<<endl;
    cout<<"Mayor: "<<mayor<<endl;

    // Imprimir de manera descendente

    cout<<"===================== ORDEN DESCENDENTE ========================"<<endl;
    cout<<"Mayor: "<<mayor<<endl;
    cout<<"Intermedio: "<<intermedio<<endl;
    cout<<"Menor: "<<menor<<endl;

    return 0;
}