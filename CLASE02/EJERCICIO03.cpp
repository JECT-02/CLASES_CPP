/*
Propuesto 15
Enunciado: Crear un programa que al ingresar tres números enteros, devuelva los números ordenado en
forma ascendente y en forma descendente.
*/

#include<iostream>
using namespace std;

int main(){

    int num1, num2, num3;

    cout<<"Ingrese el primero numero: ";
    cin>>num1;

    cout<<"Ingrese el segundo numero: ";
    cin>>num2;

    cout<<"Ingrese el tercer numero: ";
    cin>>num3;

    // Imprimir de manera ascendente
    if(num1<=num2 && num1<=num3){
        cout<<"EL numero menor es: "<<num1<<endl;;
        if(num2<=num3){
            cout<<"EL numero intermedio es: "<<num2<<endl;
            cout<<"El numero mayor es: "<<num3<<endl;
        }else{
            cout<<"El numero intermedio es: "<<num3<<endl;
            cout<<"El numero mayor es: "<<num2<<endl;
        }
    }
    else if(num2<=num1 && num2<=num3){
        cout<<"El numero menor es: "<<num2<<endl;
        if(num1<=num3){
            cout<<"El numero intermedio es: "<<num1<<endl;
            cout<<"El numero mayor es: "<<num3<<endl;
        }else{
            cout<<"EL numero intermedio es: "<<num3<<endl;
            cout<<"El numero mayor es: "<<num1<<endl;
        }
    }

    else if(num3<=num1 && num3 <= num2){
        cout<<"El numero menor es: "<<num3<<endl;
        if(num1<=num2){
            cout<<"El numero intermedio es: "<<num1<<endl;
            cout<<"El numero mayor es: "<<num2<<endl;
        }else{
            cout<<"EL numero intermedio es: "<<num2<<endl;
            cout<<"El numero mayor es: "<<num1<<endl;
        }
    }

    return 0;
}