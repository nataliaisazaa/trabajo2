#include <stdio.h>
#include <stdlib.h>

void pedir_datos();
void suma_matriz();
void imprimir_datos();

int nFilas, nColumnas, **p_matriz1,**p_matriz2,**p_matriz_suma;

int main(){
	pedir_datos();
	suma_matriz();
	imprimir_datos();
	free(p_matriz1);
	free(p_matriz2);
	free(p_matriz_suma);
	printf("\n\n");
	system("pause");
	return 0;
}

void pedir_datos(){

	printf("\t\tTAMANO DE MATRIZ \n");
	printf("\nIngrese Cantidad de Filas: ");
	scanf("%d", &nFilas);

	printf("\nIngrese Cantidad de Columnas: ");
	scanf("%d", &nColumnas);

	p_matriz1 = (int **)malloc(nFilas * sizeof(int *));
	for(int x = 0; x < nColumnas; x++){
		p_matriz1[x] = (int *)malloc(nColumnas * sizeof(int ));
	}
	if(p_matriz1 == NULL){
		printf("\nError Reservando Memoria\n");
		exit (1);
	}else{
    printf("\n______________________________________\n");
		printf("\t\t\nLLENADO DE MATRIZ 1\n");
		for(int a=0; a<nFilas; a++){
			for(int b=0; b<nColumnas; b++){
				printf("\nIngrese dato para posicion [%d,%d]: ", a, b);
				scanf("%d", &(*(*(p_matriz1+b)+a)));
			}
		}
	}

	p_matriz2 = (int **)malloc(nFilas * sizeof(int *));
	for(int y=0; y<nColumnas; y++){
		p_matriz2[y] = (int *)malloc(nColumnas * sizeof(int ));
	}
	if(p_matriz2 == NULL){
		printf("\nError Reservando Memoria\n");
		exit (1);
	}else{
    printf("\n______________________________________\n");
    printf("\t\t\nLLENADO DE MATRIZ 2\n");
		for(int c = 0; c < nFilas; c++){
			for(int d = 0; d < nColumnas; d++){
				printf("\nIngrese dato para posicion [%d,%d]: ", d, c);
				scanf("%d", &(*(*(p_matriz2+d)+c)));
			}
		}
	}
}

void suma_matriz(){

	p_matriz_suma = (int **)malloc(nFilas * sizeof(int *));
	for(int i=0; i<nColumnas; i++){
		p_matriz_suma[i] = (int *)malloc(nColumnas * sizeof(int ));
	}
	if(p_matriz1 == NULL){
		printf("\nError Reservando Memoria\n");
		exit (1);
	}else{
		for(int a=0; a<nFilas; a++){
			for(int b=0; b<nColumnas; b++){
				(*(*(p_matriz_suma+b)+a))=(*(*(p_matriz1+b)+a)) + (*(*(p_matriz2+b)+a));
			}
		}
	}
}

void imprimir_datos(){
    printf("\t\t\nMATRIZ 1\n");
	for(int f = 0; f < nFilas; f += 1){
		for(int c = 0; c < nColumnas; c++){
			printf(" %d ",*(*(p_matriz1+c)+f));
		}printf("\n");
	}

    printf("\n________________________\n");
    printf("\t\t\nMATRIZ 2\n");
	printf("\nLa Matriz 2 ingresada fue: \n\n");

	for(int f = 0; f < nFilas; f += 1){
		for(int c = 0; c < nColumnas; c++){
			printf(" %d ",*(*(p_matriz2+c)+f));
		}printf("\n");
	}

    printf("\n_________________________________________\n");
    printf("\t\t\nMOSTRAR MATRIZ SUMA\n");

	for(int f = 0; f < nFilas; f += 1){
		for(int c = 0; c < nColumnas; c++){
			printf(" %d ",*(*(p_matriz_suma+c)+f));
		}printf("\n");
	}
}
