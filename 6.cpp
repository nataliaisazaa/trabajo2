//EJERCICIO TERMINADO, FUNCIONA CORRECTAMENTE

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define cper 100//CANTIDAD DE PERSONAS

using namespace std;

struct listado_gral//LISTADO GENERAL CON PERSONAS CON Y SIN DISCAPACIDAD
{
    char nombre[30];
    bool dis;
};listado_gral persona[cper] ;

int main()
{

    char tipo;
    int n,npersona;
    int cpdisc=0,cpsdisc=0;
    int pdisc[cpdisc];
    int psdisc[cpsdisc];

    cout<<"Digite la cantidad de personas a registrar: ";cin>>npersona;

    system("cls");

    cout<<"\n\t\tREGISTRO PERSONAS\n";
    cout<<"\n***********************************************\n";
    for(int i=0;i<npersona;i++){
        cout<<"\nDigite Nombre: ";
        cin.getline(persona[i].nombre,30);
        cin.ignore(256,'\n');
    do{
        cout<<"\nEs Discapacitado(Si<S> o No<N>: ";
            cin>>tipo;
            cin.ignore(256,'\n');

            switch(tipo){
            case 'S':
                persona[i].dis=true;
                n=1; pdisc[cpdisc]=i;cpdisc++;
                break;
            case 'N':
                persona[i].dis=false;
                n=1;psdisc[cpsdisc];cpsdisc++;
                break;
            default:cout<<"\nValor ingresado no valido.";
            n=0;
            }
        }while(n!=1);
            cout<<"\n***********************************************\n";
    }

   cout<<"\n***********************************************\n";
   cout<<"\t\tPERSONAS CON DISCAPACIDAD\n";
   cout<<"***********************************************\n";
   for(int i=0;i<cpdisc;i++){
       cout<<"\nNombre: "<<persona[pdisc[i]].nombre;
   }
   cout<<"\n***********************************************\n";
   cout<<"\t\tPERSONAS SIN DISCAPACIDAD\n";
   cout<<"***********************************************\n";
   for(int i=0;i<cpsdisc;i++){
       cout<<"\nNombre: "<<persona[psdisc[i]].nombre;
   }
    cout<<"\n\n";
    system("pause");
    return 0;
}
