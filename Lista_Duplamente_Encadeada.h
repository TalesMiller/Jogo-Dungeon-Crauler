/*
 * LISTA DUPLAMENTE ENCADEADA
 */

/* Define o tipo de dado no */
typedef struct NoTag
{
	int info;
	struct NoTag *prox;
	struct NoTag *prev;
} no;

/***** PILHA *****/
void inicializa_Pilha(no **L)
{
	*L = NULL;
}

void imprime_Pilha(no **L)
{
	no *P;
	P = *L;

	printf("\n Itens da Pilha (lista LIFO):");
	while (P != NULL)
	{
		printf("\n %d", P->info);
		P = P->prox;
	}
	printf("\n");
}
void imprime_Pilha_Ciclo(no **L)
{
	no *P;
	P = *L;

	printf("\n Itens da Pilha (lista LIFO):");
	while (P->prox != *L)
	{
		printf("\n %d", P->info);
		P = P->prox;
	}
	printf("\n %d", P->info);
	printf("\n");
}
void Imprime_Oposto(no **L)
{
	no *P;
	P = *L;

	printf("\n Itens no oposto da Pilha (lista LIFO):");
	while (P->prox != NULL)
	{
		P = P->prox;
	}
	while (P != NULL)
	{
		printf("\n %d", P->info);
		P = P->prev;
	}
	printf("\n");
}
void Maior_Menor(no **L)
{
	no *P, *N;
	P = *L;
	N = *L;
	printf("\n Itens no oposto da Pilha (lista LIFO):");
	while (P->prox != N->prox)
	{
		printf("N\n");
		P = P->prox;
	}
	//P = P->prev;
	while (P->prox != N->prev)
	{
		printf("\n %d", P->info);
		P = P->prev;
	}
	printf("\n");
}
int Maior(no **L)
{
	no *P;
	P = *L;
	int x = P->info;
	while (P->prox != NULL)
	{
		if (x < P->info)
		{
			x = P->info;
		}
		P = P->prox;
	}
	return x;
}
void PUSH(no **L, int x)
{
	no *N;

	N = (no *)malloc(sizeof(no));
	N->info = x;

	N->prev = NULL;
	N->prox = *L;
	if (*L != NULL)
		(*L)->prev = N;
	*L = N;
}
void PUSH_LDEC(no **L, int x)
{
	no *N, *M;
	M = *L;
	if (*L != NULL)
		while (M->prox != *L)
		{
			M = M->prox;
		}

	N = (no *)malloc(sizeof(no));
	N->info = x;

	N->prev = NULL;
	N->prox = *L;
	if (*L != NULL)
		(*L)->prev = N;
	*L = N;
}
void POP(no **L, int *n)
{
	no *AUX;

	if (*L != NULL)
	{
		*n = (*L)->info;
		AUX = *L;
		*L = (*L)->prox;
		if (*L != NULL)
			(*L)->prev = NULL;
		free(AUX);
	}
	else
	{
		*n = -1;
	}
}

/***** FILA *****/
void inicializa_Fila(no **L)
{
	*L = NULL;
}

void imprime_Fila(no **L)
{
	no *P;
	P = *L;

	printf("\n Itens da Fila (lista FIFO):");
	while (P != NULL)
	{
		printf("\n %d", P->info);
		P = P->prox;
	}
	printf("\n");
}

void insere_Final_Fila(no **L, int x)
{
	no *N, *P;

	N = (no *)malloc(sizeof(no));
	N->info = x;

	N->prev = NULL;
	N->prox = *L;
	if (*L == NULL)
	{
		N->prev = NULL;
		N->prox = NULL;
		*L = N;
	}
	else
	{
		P = *L;
		while (P->prox != NULL)
		{
			P = P->prox;
		}
		P->prox = N;
		N->prev = P;
		N->prox = NULL;
	}
}

void remove_Inicio_Fila(no **L, int *n)
{
	no *AUX;

	if (*L != NULL)
	{
		*n = (*L)->info;
		AUX = *L;
		*L = (*L)->prox;
		if (*L != NULL)
			(*L)->prev = NULL;
		free(AUX);
	}
	else
	{
		*n = -1;
	}
}
// Pilha_LDLC
void PUSH_LDLC(no **L, int x)
{
	no *N, *ULT;
	N = (no *)malloc(sizeof(no));
	N->info = x;
	if (*L == NULL)
	{
		N->prev = N;
		N->prox = N;
	}
	else
	{
		ULT = (*L)->prev;
		N->prev = ULT;
		(*L)->prev = N;
		N->prox = *L;
		ULT->prox = N;
	}
	*L = N;
}
void Print_LDLC(no **L)
{
	no *N, *Prim;
	N = *L;
	Prim = *L;
	N = N->prev;
	do
	{
		printf("%d \n", N->info);
		N = N->prev;
	} while (Prim->prev != N);
}

int Maior_Num(no **L)
{
	no *N, *Prin;
	N = *L;
	Prin = *L;
	int x = 0;
	N = N->prev;
	do
	{
		if (x < N->info)
		{
			x = N->info;
		}
		N = N->prev;
	} while (Prin->prev != N);
	return x;
}

void Print_Impar(no **L)
{
	no *N,*Imp;
	N = *L;
	Imp = *L;
	if(*L != NULL)
	{
		do
		{
			if(N->info % 2 != 0)
			{
				printf("%d",N->info);
			}
			N = N->proxç
		}while(Imp->prev != N);
	}
}

void imprime_LDEC(no **L)
{
	no *P;
	P = *L;
	if (*L != NULL)
	{
		printf("\n Itens da Lista:");
		do
		{
			printf("\n %d", P->info);
			P = P->prox;
		} while (P != *L);
	}
}
void imprime_LDEC_2(no **L)
{
	no *P;
	P = *L;
	if (*L != NULL)
	{
		printf("\n Itens da Lista:\n");
		do
		{
			printf("%d\n ", P->info);
			P = P->prev;
		} while (P != *L);
	}
}

void Print_Pri_Ult(no **L)
{
	no *P;
	P = *L;
	printf("%d\n", P->info);
	printf("%d\n", (P->prev)->info);
}

void insere_Inicio(no **L, int x)
{
	no *N, *ULT;
	N = (no *)malloc(sizeof(no));
	N->info = x;
	if (*L == NULL)
	{
		N->prev = N;
		N->prox = N;
	}
	else
	{
		ULT = (*L)
				  ->prev;
		N
			->prev = ULT;
		(*L)
			->prev = N;
		N
			->prox = *L;
		ULT
			->prox = N;
	}
	*L = N;
}

void Print_Op(no **L)
{
	no *T,*A;
	inicializa_Pilha(&T);
	A = *L;
	while (A->prox != *L)
	{
		insere_Inicio(&T,A->info);
		A = A->prox;
	}
	insere_Inicio(&T,A->info);
	imprime_Pilha_Ciclo(&T);
}