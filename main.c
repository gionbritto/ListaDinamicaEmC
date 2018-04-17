#include<stdlib.h>
#include<stdio.h>


struct elemento{
	int valor;
	struct elemento *prox;
};
typedef struct elemento ELE;

typedef struct lista{
	ELE *cabeca;
}LISTA;

LISTA* inicializaLista();
void insereInicio(LISTA *li, int valor);

int main(){
	
	 LISTA *li;
	li = inicializaLista();
	printf("antes: %i \n", li->cabeca);
	insereInicio(li, 5);
	printf("depois: %i\n*", li->cabeca->valor);
	
	
	return 0;
}



LISTA* inicializaLista(){
	LISTA *l;
	l = (LISTA*) malloc(sizeof(LISTA));
	l->cabeca = NULL;
	
	return l;
}

void insereInicio(LISTA *li, int valor){
	ELE *element = (ELE*)malloc(sizeof(ELE));
	element->valor = valor;
	element->prox = li->cabeca;
	li->cabeca = element;
}
