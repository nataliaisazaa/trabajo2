#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void arreglollenar(int *,int);
void posicion(int *, int);

using namespace std;
int main()
{
    int n;
    printf("\nINGRESE EL TAMAÑO DEL VECTOR: ");
    scanf("%d",&n);

    int arreglo[n],*parreglo=arreglo;

    arreglollenar(parreglo,n);
    posicion(parreglo,n);
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

void posicion(int *p, int n){
    int aux;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(*(p+j)<(*(p+i))){
                aux=*(p+j);
                *(p+j)=*(p+i);
                *(p+i)=*(p+j);
                *(p+i)=aux;
            }
        }
    }for (int i=0;i<n;i++){
        printf("\nVALOR (%i) ES: %d\n",i+1,*(p+i));
    }
}
