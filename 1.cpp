/***1-Estructura competidor
  Natalia Isaza Serrano***/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

struct competidor
{
    char nombre[30];
    int edad;
    char sexo;
    char club[10];
};

competidor participante;

int main()
{
    cout<<"Concursante\n";
    cout<<"Digite Nombre:\n ";
        cin.getline(participante.nombre,30);
        cin.ignore(256,'\n');

    cout<<"Digite Sexo (M=Masculino F=Femenino):\n ";
        cin>>participante.sexo;
        cin.ignore(256,'\n');

    cout<<"Digite Club:\n ";
        cin.getline(participante.club,10);
        cin.ignore(256,'\n');

    cout<<"Digite Edad:\n ";
        cin>>participante.edad;

    cout<<"DATOS DEL PARTICIPANTE\n";

    cout<<"Nombre: "<<participante.nombre<<"\n";
    cout<<"Edad: "<<participante.edad<<"\n";
    cout<<"Sexo: "<<participante.sexo<<"\n";
    cout<<"Club: "<<participante.club<<"\n";

    if(participante.edad <=15){
        cout<<"Categoria de Competicion: Infantil\n";
    }else
        {   if (participante.edad >15 && participante.edad <=30){
               cout<<"Categoria de Competicion: Joven\n";
                }else
                    {   if (participante.edad >30){
                        cout<<"Categoria de Competicion: Adulto\n";
                }
            }
        }
    system("pause");
    return 0;
}
