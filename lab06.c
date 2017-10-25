#include <stdio.h>
#include <stdlib.h>

typedef struct No{
	int code;
	int memoria;
	int estado;	// 0 = livre // 1 == particionado // 2 = ocupado //
	struct No *esq, *dir, *pai;
};

int main()
{
	int M, op;
	int cod, tam;
	No p_a;
	
	praiz = inicializa_arvore(&p_a);

	scanf("%d", &M);	
	while(scanf("%d", &op) != EOF){
		switch(op){
			case 1:
				scanf("%d %d", &cod, &tam);
				inicia_processo(p_a, cod, tam);
				break;
			case 2:
				scanf("%d", &cod);
				finaliza_processo(cod);
				break;
			case 3:
				calc_frag();
				break;
			case 4:
				relatorio_sist();
				break;
			case 5:
				imprime_sem();
				break;
			case 6:
				imprime_processos();
				break;
		}
	}
}

No* inicializa_arvore(No *p_a, int tam)
{
	No *raiz = malloc(sizeof(No));

	raiz->esq = NULL;
	raiz->dir = NULL;
	raiz->pai = NULL;
	raiz->estado = 0;
	raiz->memoria = (pow(tam));
	
	return raiz;
}

No* inicia_processo(No *p_a, int cod, int size)
{
	No *folha;
	if(p_a == NULL){
		folha = malloc(sizeof(No));
		folha->esq = novo->dir = NULL;
		folha->code = cod;
		folha->pai = pa;
		folha->estado = 2;
		return folha;
	}
	if(size <= ((p_a->size)/2)){
		p_a->esq = inicia_processo(p_a->esq, cod, size);
		p_a->estado = 1;
	}
	else
		pa->dir = inicia_processo(p_a->dir, cod, size);
	return pa;

}

int pow(int exp)
{
	int i, aux = 1;
	for(i = 0; i < exp; i++)
		aux = aux * 2;
	return aux;
}

void finaliza_processo(int cod)
{

}

void calc_frag()
{

}

void relatorio_sist()
{

}

void imprime_sem()
{

}

void imprime_processos()
{

}
