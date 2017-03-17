/***2-Estructura Estudiantes
  Natalia Isaza Serrano****/
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#define alum 3

using namespace std;
struct alumno
{
    char nombre[30];
    int edad;
    int grado;
    float promedio;
};alumno estudiante[alum];
int main()
{
    int mayor,x;
    cout<<"\tREGISTRO ESTUDIANTES\n";
    for(int i=0;i<alum;i++){
        cout<<"-------------------------------------------\n";
        cout<<"\nDigite nombre de Estudiante " <<i+1<<":";
        cin.getline(estudiante[i].nombre,30);
        cin.ignore(256,'\n');

        cout<<"\nDigite Edad: ";
        cin>>estudiante[i].edad;

        cout<<"\nDigite Grado: ";
        cin>>estudiante[i].grado;

        cout<<"\nDigite Promedio de Notas: ";
        cin>>estudiante[i].promedio;
    }
    mayor=estudiante[0].promedio;

    for (int i=0; i<alum; i++){
        if (estudiante[i].promedio> mayor){
            mayor=estudiante[i].promedio;x=i;
        }
    }
    cout<<"Mejor promedio es del estuciante\n\n";
    cout<<"\nNombre:"<<estudiante[x].nombre;
    cout<<"\nEdad: "<<estudiante[x].edad;
    cout<<"\nGrado: "<<estudiante[x].grado;
    cout<<"\nCon promedio de:"<<estudiante[x].promedio;
    system("pause");
    return 0;
}
