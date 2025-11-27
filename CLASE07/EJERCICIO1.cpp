/*
SUMA DE DOS NUMEROS HASTA QUE EL USUARIO INGRESE N
*/
#include<iostream>
using namespace std;

int main(int argc, char** argv){
    
    int a, b;
    bool bandera = true;
    string opcion = "";

    while(bandera == true){
        cout<<"Ingrese el numero a: ";
        cin>>a;
        cout<<"Ingrese el numero b: ";
        cin>>b;

        cout<<"La suma es: "<<a+b<<endl;

        cout<<"Desea continua con las sumas (S/N): ";
        cin>>opcion;

        if(opcion == "S"){
            bandera = true;
        }else{
            bandera = false;
        }
    }

    return 0;
}