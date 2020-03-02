#include<stdio.h>
#include<stdlib.h>

int main(){
	int *arreglo, *arreglo2, num, cont;
	printf("Cucntos elementos tiene el conjunto\n");
	scanf("%d",&num);//El usuario ingresa el numero de elementos que quiere serervar en la memoria
	arreglo=(int *)malloc (num * sizeof(int));//Primero usamos un malloc para crear el arreglo dinámico
	//Primero evaluamos si el arreglo es el vector nulo, en caso contrario podemos proseguir
	if (arreglo!=NULL){
		//Contador para ir insertando los elementos en el espacio reservado
		for (cont=0;cont<num;cont++){
			printf("Inserte el elemento %d del conjunto.\n",cont+1);//Pedimos los primeros datos para llenar el arreglo
			scanf("%d",(arreglo+cont));
		}
		printf("Vector insertado:\n\t[");
		for(cont=0;cont<num;cont++){
			printf("\t%d", *(arreglo+cont));//Imprimimos el arreglo
		}
		printf("\t]\n");
		printf("Aumentando el tama%co del conjunto doble.\n",164);
		num *=2;//Aquí inicializamos el 2 para que el arreglo se aumente al doble
		arreglo2=(int *)realloc(arreglo,num*sizeof(int));//Usamos dos parámetros
		/*Usamos realloc para aumnentar los espacios del arreglo al doble
		realmente lo que hacemos es crear un segudo arreglo pero conlas mismas dimensioones que el primero*/ 
		
		//Volvemos a evaluar la condicion del vector nulo
		if(arreglo2!=NULL){
			arreglo=arreglo2;
			//Volvemos a usar el ciclo para insertar los datos
			for(;cont<num;cont++){
				printf("Inserte el elemento %d del conjunto.\n",cont+1);//Pedimos los datos adicionales
				scanf("%d",(arreglo2+cont));
			}
			printf("Vector insertado:\n\t[");
			for(cont=0;cont<num;cont++){
				printf("\t%d",*(arreglo2+cont));//Imprimimos el segundo arreglo ya con todos los valores
			}
			printf("\t]\n");
		}
		free (arreglo);//Liberamos el espacio reservado
	}
	return 0;
}
