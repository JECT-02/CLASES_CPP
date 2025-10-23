/*
Propuesto 17
Enunciado: Dado los siguientes datos de entrada: Saldo anterior, Tipo de Movimiento R (retiro) o D
ideposito) y Monto de la transacción, obtener como dato de Salida el saldo actual.
*/

#include<iostream>
using namespace std;

int main(){

    float saldo = 200;

    char movimiento;
    float monto;

    cout<<"Ingrese el tipo de movimiento (R or D): ";
    cin>>movimiento;


    if(movimiento == 'R' || movimiento == 'r'){
        cout<<"Ingrese el monto a retirar: ";
        cin>>monto;
        if(monto>saldo){
            cout<<"Error no cuenta con fondos suficientes"<<endl;
        }else{
            cout<<"Su saldo anterior es: "<<saldo<<endl;
            cout<<"Su retiro fue de: "<<monto<<endl;
            cout<<"Su nuevo saldo es: "<<saldo-monto<<endl;
            saldo = saldo - monto;
        }
    }
    else if(movimiento == 'D' || movimiento == 'd'){
        cout<<"Ingrese el monto a depositar: ";
        cin>>monto;
        if(monto<0){
            cout<<"Error no puede depositar montos negativos"<<endl;
        }else{
            cout<<"El saldo anterior es: "<<saldo<<endl;
            cout<<"Su deposito es de: "<<monto<<endl;
            cout<<"Su nuevo saldo es:"<<saldo + monto<<endl;
            saldo = saldo + monto;
        }
    }
    else{
        cout<<"Movimiento no valido"<<endl;
    }
    return 0;
}