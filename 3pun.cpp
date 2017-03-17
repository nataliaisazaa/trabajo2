
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define arreglop 10
void arreglollenar(int *);
void arregloimp(int *);

using namespace std;
int main()
{
    int arreglo[arreglop],*farreglo=arreglo;

    arreglollenar(farreglo);
    arregloimp(farreglo);
    printf("\n\n");
    system("pause");
    return 0;
}

void arreglollenar(int*p){

    for(int i=0;i<arreglop;i++)
    {
        printf("INGRESE NUMERO %d: ",i+1);
        scanf("%d",&(*(p+i)));
    }
}

void arregloimp(int *p){

printf("\nLOS NUMERO PARES SON: \n");

for (int i=0;i<arreglop;i++){
        if (*(p+i)%2==0){
            printf("%d  Y POSICION EN MEMORIA %p\n",*(p+i),(p+i));*(p+i);
        }
    }
}
