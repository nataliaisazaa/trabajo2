#include <stdio.h>
#include <stdlib.h>


using namespace std;

void par_impar(int *);
void numero(int *);

int main()
{	int n, *pn=&n;
    numero(pn);
    par_impar(pn);
    system("pause");
    return 0;
}

void numero (int *valor){
    printf("INGRESE UN NUMERO: \n");
    scanf("%d",&(*valor));

    printf("EL NUMERO %d ESTA ALMACENADO EN LA POSICION DE MEMORIA %p\n",*valor,valor);
}

void par_impar (int *pn){
    if (*pn%2!=0){
        printf("ESTE NUMERO ES IMPAR\n");
    }else{
        printf("ESTE NUMERO ES PAR\n");
        }
}
