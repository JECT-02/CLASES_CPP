/*
   Adivina el numero:
   	- El rpograma genera un numero secreto aleatorio entre 1-100
   	- El ususario intenta adivinar el numero
   	- Si el usuario ingresa el # incorrecto el programa vuelove a pedir el #
   	- El programa debe advertir al usuario de ingresar un número mas alto o mas bajo
   	- Si el usuario ingresa el # correcto, el usuario gana
    Condicion : Que solo sea hasta cierto número de intentos 

    Condicion : solo se debe poner números , sino sale "Incorrecto , ingrese solo números
  */

#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main(){
    srand(time(0));
    int secreto;
    secreto = rand()%100 + 1;

    bool bandera = true;

    int intentos = 12;

    while(bandera){
        int valor;
        cout<<"Adivina el numero del 1 - 100: ";
        
        if(!(cin >> valor)){
            cin.clear();
            cin.ignore(1000,'\n');
            cout<<"No ingreso un numero, intente nuevamente"<<endl;
            continue;
        }

        if(valor == secreto){
            cout<<"Ganaste la adivinanza"<<endl;
            bandera = false;
        }else if(valor > secreto){
            cout<<"El secreto es mas pequeño"<<endl;
        }else{
            cout<<"El secreto es mas grande"<<endl;
        }


    }

    return 0;
}