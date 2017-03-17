#include <stdio.h>
#include <stdlib.h>


using namespace std;

void primo(int *);
void numero(int *);

int main()
{	int n, *pn=&n;
    numero(pn);
    primo(pn);
    printf("\n\n");
    system("pause");
    return 0;
}

void numero (int *valor){
    printf("INGRESE UN NUMERO: \n");
    scanf("%d",&(*valor));

    printf("EL NUMERO %d ESTA ALMACENADO EN LA POSICION DE MEMORIA %p\n",*valor,valor);
}

void primo(int *pn)
	{	int a=0,i;
 		for(i=1;i<(*(pn+1));i++)
		 {	if(*pn%i==0){a++;	} }
 		if(a!=2){
                printf("NO ES PRIMO");
        }else{
                printf("ES PRIMO");
                }
	}
