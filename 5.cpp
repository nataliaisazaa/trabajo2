/***3-Estructura N Notas
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
}estudiantes[100];

int main(){
    int nestudiantes;
    float suma;
    printf("INGRESE NUMERO DE ESTUDIANTES: ");
    scanf("%d", &nestudiantes);
    for(int i=0; i<nestudiantes; i++){
        printf("\n___________________________________\n");
        printf("INGRESE NOMBRE ESTUDIANTE: ");
        scanf("%s", &estudiantes[i].nombre);
        printf("NOTA 1: ");
        scanf("%f", &estudiantes[i].notasEstudiante.nota1);
        printf("NOTA 2: ");
        scanf("%f", &estudiantes[i].notasEstudiante.nota2);
        printf("NOTA 3: ");
        scanf("%f", &estudiantes[i].notasEstudiante.nota3);
        system("cls");
    }
    for(int i=0; i<nestudiantes; i++){
        suma = (estudiantes[i].notasEstudiante.nota1 + estudiantes[i].notasEstudiante.nota2 + estudiantes[i].notasEstudiante.nota3)/3;
        printf("NOMBRE: %s, PROMEDIO: %.1f\n", estudiantes[i].nombre, suma);
    }

    float mayor, menor;
    int posicionmayor = 0, posicionmenor = 0;
    mayor = suma;
    menor = suma;
    for(int i=0; i<nestudiantes; i++){
        suma = (estudiantes[i].notasEstudiante.nota1 + estudiantes[i].notasEstudiante.nota2 + estudiantes[i].notasEstudiante.nota3)/3;
        if (i == 0){
            mayor = suma;
            menor = suma;
        }
        if (suma > mayor){
            mayor=suma;
            posicionmayor = i;
        }
        if (suma < menor){
            menor=suma;
            posicionmenor = i;
        }
    }
    printf("\nEL PROMEDIO MAYOR ES: %.1f DEL ESTUDIANTE: %s\n", mayor, estudiantes[posicionmayor].nombre);
    printf("EL PROMEDIO MENOR ES: %.1f DEL ESTUDIANTE: %s\n", menor, estudiantes[posicionmenor].nombre);
    return 0;
}

