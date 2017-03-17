#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pedir_datos(char *);
void mostras_datos(int *,char *);

using namespace std;

int main(){

    char nombre[30], *p_nombre=nombre;
    int nletras, *p_nletras=&nletras;
    pedir_datos(p_nombre);
    *p_nletras=strlen(p_nombre);
    mostras_datos(p_nletras,p_nombre);

}
void pedir_datos(char *p_nombre){
    printf("\ncantidad de vocales en tu nombre\n");
    printf("ingresa tu nombre:");
    cin.getline(p_nombre,30);
}

void mostras_datos(int *p_nletras,char *p_nombre){
    int n_vocales=0;
    int n_a=0,n_e=0,n_i=0,n_o=0,n_u=0;

    for(int i=0;i<*p_nletras;i++){
        if(*(p_nombre+i)=='a' || *(p_nombre+i)=='A' ){

            n_vocales++;n_a++;
        }else{
                if(*(p_nombre+i)=='e' || *(p_nombre+i)=='E' ){
                    n_vocales++;n_e++;
                }else{
                        if(*(p_nombre+i)=='i' || *(p_nombre+i)=='I'){
                            n_vocales++;n_i++;
                        }else{
                                if(*(p_nombre+i)=='o' || *(p_nombre+i)=='O'){
                                    n_vocales++;n_o++;
                                }else{
                                        if(*(p_nombre+i)=='u' || *(p_nombre+i)=='U'){
                                            n_vocales++;n_u++;
                                        }
                                    }
                            }
                    }
            }
    }

    if(n_vocales==0){
        printf("\nEl nombre ingresado no posee vocales.\n");
    }else{
            cout<<"\nEl nombre ingresado tiene "<<n_vocales<<" vocales.\n";
            cout<<"\na= "<<n_a;
            cout<<"\ne= "<<n_e;
            cout<<"\ni= "<<n_i;
            cout<<"\no= "<<n_o;
            cout<<"\nu= "<<n_u;
    }
}
