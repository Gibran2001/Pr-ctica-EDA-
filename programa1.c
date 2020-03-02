#include<stdio.h>
#include<stdlib.h>

int main(){
	int *arreglo, num, cont;
	printf("Cuantos elementos tiene el conjunto?\n");
	scanf("%d",&num);//El usuario ingresa el numero de elementos que quiere serervar en la memoria
	arreglo=(int *)malloc(num * sizeof(int));//vemos que malloc trabaja por bytes, asi que tenemos que multiplicar el valor leido, por el numero de bytes que contienen los tipos de dato
	//Vemos que solo va a hacer el proceso si el arreglo esta vacio
	if(arreglo!=NULL){
		printf("vector reservado: \n\t[");
		for(cont=0; cont<num; cont++){
			printf("\t%d",*(arreglo+cont));//Imprime los valores que hay en esa memoria reservada, generalmente hay basura asi que imprime cualquier cosa
		}
		printf("\t]\n");
		printf("Se libera el espacio reservado. \n");
		free(arreglo);//limpiamos la memoria
	}
	return 0;
}
