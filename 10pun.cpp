#include <stdio.h>
#include <stdlib.h>

void pedirdatos();
void imprimirdatos();

int nFilas, nColumnas, **p_matriz;

int main(){
	pedirdatos();
	imprimirdatos();
	free(p_matriz);
	printf("\n\n");
	system("pause");
	return 0;
}

void pedirdatos(){
	printf("\nIngrese Cantidad de Filas: ");
	scanf("%d", &nFilas);

	printf("\nIngrese Cantidad de Columnas: ");
	scanf("%d", &nColumnas);

	p_matriz = (int **)malloc(nFilas * sizeof(int *));
	for(int i = 0; i < nColumnas; i++){
		p_matriz[i] = (int *)malloc(nColumnas * sizeof(int ));
	}
	if(p_matriz == NULL){
		printf("error");
		exit (1);
	}else{
		printf("\nLLENAR MATRIZ \n");
		for(int f = 0; f < nFilas; f++){
			for(int c = 0; c < nColumnas; c++){
				printf("\nIngrese dato para posicion [%d,%d]: ", f, c);
				scanf("%d", &(*(*(p_matriz+c)+f)));
			}
		}
	}
}

void imprimirdatos(){

	printf("\nLa Matriz ingresada fue: \n\n");

	for(int f = 0; f < nFilas; f += 1){
		for(int c = 0; c < nColumnas; c++){
			printf(" %d ",*(*(p_matriz+c)+f));
		}printf("\n");
	}
    printf("\n_________________________________\n");
    printf("\nMATRIZ TRASPUESTA\n\n");

	for(int f = 0; f < nFilas; f += 1){
		for(int c = 0; c < nColumnas; c++){
			printf(" %d ",*(*(p_matriz+f)+c));
		}printf("\n");
	}
}
