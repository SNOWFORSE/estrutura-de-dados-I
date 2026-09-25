#include <stdio.h> 
#include <string.h>

/*Faça um programa que  implementa uma lista com vetores de strings, 
conforme o exemplo visto em sala, com as seguintes operações:
1. Inserir elemento 
2. Retirar Elemento
3. Criar Lista
4. Contar elementos da lista
5. Exibir o conteúdo da lista
*/

/*Faça um programa que  implementa uma lista com vetores de strings, conforme o exemplo visto em sala, com as seguintes operações:

1. Inserir elemento 
2. Retirar Elemento
3. Criar Lista
4. Contar elementos da lista
5. Exibir o conteúdo da lista

A interface com o usuário deve ser feita pelo programa principal, passando os parâmetros para as funções que implementam as operações sobre a lista.
Enviar o arquivo fonte em C, funcionando.*/

#include <stdio.h>

#define MaxItens 10
#define TamItem 20
typedef char tpLista[MaxItens][TamItem];

void inserirElemento (tpLista item, char *item2){
	int i;
	for(i = 0; i < MaxItens && strlen(item[i]) > 0; i++);
	if (i < MaxItens)
	strcpy(item[i], item2);
	else
	printf("Lista cheia, não pode inserir");
}

void retirarElemento(){}

void criaLista(tpLista l) //aqui estamos criando a lista vazia para poder estar iniciando wessa lista
{
    int i;
    for (i=0; i<MaxItens; i++) {
    l[i][0] = '\0';
}
}

int contarElementos(){}

void exibirLista(){}

int main()
{
	int op = 1;
	
	do {
		printf ("Escolha uma das opções abaixo: \n");
		printf ("1 - Inserir elemento\n");
		printf ("2 - Retirar elemento\n");
		printf ("3 - Criar lista\n");
		printf ("4 - Contar elementos da lista\n");
		printf ("5 - Exibir lista\n");
		printf ("6 - Sair do programa\n");
		printf ("\nEscolha: ");
		scanf ("%d", &op);
	}

	while (op != 6);
	
	switch (op) {
		
	case 1: 
		//inserirElemento();
	break;	
	
	case 2: 
		//retirarElemento();
	break;	
	
	case 3: 
		//contarElementos();
	break;	
	
	case 4: 
		//exibirLista();
	break;	
	
	case 5: 
		printf ("Saindo do programa");
	break;	
	}

	return 0;
}

