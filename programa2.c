#include<stdio.h>
#include<stdlib.h>

int main(){
	int *arreglo, num, cont;
	printf("Cuantos elementos tiene el conjunto?\n");
	scanf("%d",&num);//El usuario ingresa el numero de elementos que quiere serervar en la memoria
	arreglo=(int *)calloc(num, sizeof(int));//A diferencia de malloc, vemos que recibe tanto el numero leido como los bytes de cada tipo de dato como parametros sin hacer ninguna operacion
	//calloc inizializa toda la memoria en 0 asi que limpia toda la basura y al imprimir vemos que son puros 0
	if(arreglo!=NULL){
		printf("Vector reservado: \n\t[");
		for(cont=0; cont<num; cont++){
			printf("\t%d",*(arreglo+cont));//Imprimimos los espacios reservados
		}
		printf("\t]\n");
		printf("Se libera el espacio reservado. \n");
		free(arreglo);//Liberamos el espacio para que pueda ser usado nuevamente
	}
	return 0;
}

