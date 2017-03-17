#include <stdio.h>
struct Alumno{
    char nombre[30];
    int edad;
    float promedio;
}estudiante[3], *p_estudiantes=estudiante;
void pedirDatos();
void mostrarDatos();
int main (){
    pedirDatos();
    mostrarDatos();
    return 0;
}
void pedirDatos(){
    for(int i=0;i<3;i++){

        printf("Ingrese nombre del estudiante %d: ", i+1);
        fgets((p_estudiantes+1)->nombre,30,stdin);
        printf("\n Ingrese edad del esttudiante %d: ", i+1);
        scanf("%f", &(p_estudiantes+i)->edad);
        printf("\n Ingrese el promedio del estudiante %d: ", i+1);
        scanf("%f",&(p_estudiantes+i)->promedio);
        printf("\n");
        fflush(stdin);
    }
}
void mostrarDatos(){
    float mayor=0;
    for(int i=0;i<3;i++){
        if ((p_estudiantes+i)->promedio>mayor){
            mayor=(p_estudiantes+i)->promedio;
        }
    }
    printf("El mejor promedio fue %.2f",mayor);
}
