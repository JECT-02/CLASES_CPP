/*
Dado la hora, minuto y segundo, determinar la hora del siguiente segundo
*/

#include<iostream>

using namespace std;

int main(){

    int hora, minuto, segundo;
    cout<<"Ingrese la hora actual: ";
    cin>>hora;

    cout<<"Ingrese el minuto actual: ";
    cin>>minuto;

    cout<<"Ingrese el segundo actual: ";
    cin>>segundo;

    cout<<"==== LA NUEVA HORA ES ===="<<endl;

    if(segundo != 59){
        cout<<"Hora: "<<hora<<endl;
        cout<<"Minuto: "<<minuto<<endl;
        cout<<"Segundo: "<<segundo+1<<endl;
    }
    else{
        if(minuto == 59){
            cout<<"Hora: "<<(hora+1)%24<<endl;
            cout<<"Minuto: "<<0<<endl;
            cout<<"Segundo: "<<0<<endl;
        }else{
            cout<<"Hora: "<<hora<<endl;
            cout<<"Minuto: "<<minuto+1<<endl;
            cout<<"Segundo: "<<0<<endl;
        }
    }

    return 0;
}