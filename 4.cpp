/***3-Estructura Notas
  Natalia Isaza Serrano****/
#include <stdio.h>
#include <stdlib.h>
struct Notas{
    float nota1;
    float nota2;
    float nota3;
};

struct Estudiante{
    struct Notas notasEstudiante;
    char nombre[30];
    int edad;
    char sexo[30];
}estudiante_1;

int main(){
    printf("INGRESE NOMBRE ESTUDIANTE: ");
    scanf("%s", &estudiante_1.nombre);
    printf("INGRESE SEXO:FEMENINO-MASCULINO:");
    scanf("%s", &estudiante_1.sexo);
     printf("INGRESE EDAD: ");
    scanf("%d", &estudiante_1.edad);
    printf("NOTA 1: ");
    scanf("%f", &estudiante_1.notasEstudiante.nota1);
    printf("NOTA 2: ");
    scanf("%f", &estudiante_1.notasEstudiante.nota2);
    printf("NOTA 3: ");
    scanf("%f", &estudiante_1.notasEstudiante.nota3);
    float suma;
    suma = (estudiante_1.notasEstudiante.nota1 + estudiante_1.notasEstudiante.nota2 + estudiante_1.notasEstudiante.nota3)/3;
    printf("NOMBRE: %s, EDAD: %d, SEXO:%s \n", estudiante_1.nombre, estudiante_1.edad,estudiante_1.sexo);
    printf("El Promedio de es: %.1f", suma);

    return 0;
}
