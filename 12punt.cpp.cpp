#include <stdio.h>
struct etapas{
    int hora;
    int minu;
    int seg;
}ciclista[3], *p_ciclista=ciclista;
void pedirDatos();
void mostrarDatos();
int main (){
    pedirDatos();
    mostrarDatos();
    return 0;
}
void pedirDatos(){
    for(int i=0;i<3;i++){

        printf("Ingrese segundos %d: ", i+1);
        scanf("%d",&(p_ciclista+i)->seg);
        printf("\n Ingrese minutos %d: ", i+1);
        scanf("%d", &(p_ciclista+i)->minu);
        printf("\n Ingrese horas %d: ", i+1);
        scanf("%d",&(p_ciclista+i)->hora);
        printf("\n");
    }
}
void mostrarDatos(){
    int thoras=0;
    int tminu=0;
    int tseg=0;

    for(int i=0;i<3;i++){
        tseg+=(p_ciclista+i)->seg;
        tminu+=(p_ciclista+i)->minu;
        thoras+=(p_ciclista+i)->hora;
        if (tseg>=60){
            tminu+=1;
            tseg-=60;
        }
        if(tminu>=60){
            thoras+=1;
            tminu-=60;
        }
    }
    printf("El tiempo fue de:  %d Horas %d Minutos %d Segundos",thoras,tminu,tseg);
}
