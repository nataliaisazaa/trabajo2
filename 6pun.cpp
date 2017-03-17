#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void arreglollenar(int *,int);
void busqueda(int *, int);

using namespace std;
int main()
{
   int n;
    printf("\nINGRESE EL TAMAÑO DEL VECTOR: ");
    scanf("%d",&n);

    int arreglo[n],*parreglo=arreglo;

    arreglollenar(parreglo,n);
    busqueda(parreglo,n);
    printf("\n\n");
    system("pause");
    return 0;
}

void arreglollenar(int *p,int n){

    for(int i=0;i<n;i++)
    {
        printf("INGRESE NUMERO %d: ",i+1);
        scanf("%d",&(*(p+i)));
    }
}

void busqueda(int *p, int n){
    int nbusquedad;
    int nN=0;
    do{
    printf("\nINGRESE NUMERO QUE DESEA BUSCAR: ");
    scanf("%d",&nbusquedad);

    for(int i=0;i<n;i++){
        if(*(p+i)==nbusquedad){
            printf("\nEL VALOR BUSCADO %d ESTA EN LA POSICION %p\n",*(p+i),(p+i));n++;
        }
    }
    if(nN==0){
        printf("\nVALOR NO ENCONTRADO\n");
    }else{
        nN=1;
        }
    }while(nN!=1);
}
