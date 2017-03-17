#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void arreglollenar(int *,int);
void arregloimp(int *, int);
void vectorm(int *, int);

using namespace std;
int main()
{
    int n;
    printf("\n INGRESE EL TAMAÑO DEL ARREGLO: ");
    scanf("%d",&n);

    int arreglo[n],*farreglo=arreglo;

    arreglollenar(farreglo,n);
    arregloimp(farreglo,n);
    vectorm(farreglo,n);
    printf("\n\n");
    system("pause");
    return 0;
}

void arreglollenar(int *p,int n){

    for(int i=0;i<n;i++)
    {
        printf("INGRESA VALOR %d: ",i+1);
        scanf("%d",&(*(p+i)));
    }
}

void arregloimp(int *p, int n){

printf("\nVECTOR: \n");
    int aux=0,*direccion;
    for (int i=0;i<n;i++)
    {
        printf("\nVALOR %i:%d EN POSICION DE MEMORIA %p\n",i+1,*(p+i),(p+i));
        if(*(p+i)>aux){
            aux=*(p+i);
            direccion=(p+i);
        }
    }
}

void vectorm(int *p,int n){
    int menor=*(p+0),*dir;

    for (int i=0; i<n; i++){
        if (*(p+i)< menor){
        menor=*(p+i);dir=(p+i);
        }
    }
    printf("\nEL NUMERO MENOR ES: %d ,POSICION DE MEMORIA, %p.",menor,dir);
}
