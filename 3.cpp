/***3-Estructura Trabajadores
  Natalia Isaza Serrano****/
#include <stdio.h>
#include <stdlib.h>

struct Trabajadores{
    char nombre[30];
    int edad;
    long int salario;
}trabajador[200];

int main(){
    int trabajadores;

    printf("INGRESE NUMERO DE TRABAJADORES: ");
    scanf("%d", &trabajadores);
    for(int i=0; i<trabajadores; i++){
        printf("________________________________\n");
        printf("INGRESE NOMBRE :\n");
        scanf("%s", &trabajador[i].nombre);
        printf("INGRESE EDAD :\n ");
        scanf("%d", &trabajador[i].edad);
        printf("INGRESE SALARIO :\n ");
        scanf("%ld", &trabajador[i].salario);

    }
    for(int i=0; i<trabajadores; i++){
        printf("NOMBRE: %s, EDAD: %d, SALARIO: %d\n", trabajador[i].nombre, trabajador[i].edad, trabajador[i].salario);
    }
    return 0;
}

