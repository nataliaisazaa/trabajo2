#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pedirdatos(char *);
void mostrasdatos(int *,char *);

using namespace std;

int main(){
    char nombre[30], *pnombre=nombre;
    int nletras, *pnletras=&nletras;
    pedirdatos(pnombre);
    *pnletras=strlen(pnombre);
    mostrasdatos(pnletras,pnombre);
    system("pause");
}
void pedirdatos(char *pnombre){
    printf("REGISTRO DE NOMBRE PARA VALIDAR CANTIDAD DE VOCALES\n");
    printf("INGRESE NOMBRE:");
    scanf("%s",&pnombre);
}

void mostrasdatos(int *pnletras,char *pnombre){
    int nvocales=0;
    int n_a=0,n_e=0,n_i=0,n_o=0,n_u=0;

    for(int i=0;i<*pnletras;i++){
        if(*(pnombre+i)=='a' || *(pnombre+i)=='A' ){

            nvocales++;n_a++;
        }else{
                if(*(pnombre+i)=='e' || *(pnombre+i)=='E' ){
                    nvocales++;n_e++;
                }else{
                        if(*(pnombre+i)=='i' || *(pnombre+i)=='I'){
                            nvocales++;n_i++;
                        }else{
                                if(*(pnombre+i)=='o' || *(pnombre+i)=='O'){
                                    nvocales++;n_o++;
                                }else{
                                        if(*(pnombre+i)=='u' || *(pnombre+i)=='U'){
                                            nvocales++;n_u++;
                                        }
                                    }
                            }
                    }
            }
    }

    if(nvocales==0){
            printf("El nombre ingresado no posee vocales.\n");

    }else{
        printf("\nEl nombre ingresado tiene ",nvocales," vocales.\n");
        printf("\na= ",n_a);
        printf("\ne= ",n_e);
        printf("\ni= ",n_i);
        printf("\no= ",n_o);
        printf("\nu= ",n_u);

    }
}
