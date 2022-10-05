#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct node
{
    int info;
    int prior;
    struct node *link;
} no;

void inicializa_FP(no **L)
{
    *L = NULL;
}

void insere_FP(no **L, int valor, int prior)
{
    no *N, *P, *ANT;

    N = (no *)malloc(sizeof(no));
    N->info = valor;
    N->prior = prior;

    if (*L == NULL)
    {
        *L = N;
        N->link = NULL;
    }
    else
    {
        P = *L;

        while ((P != NULL) && (prior >= P->prior))
        {
            ANT = P;
            P = P->link;
        }
        if (P == *L)
        {
            N->link = *L;
            *L = N;
        }
        else
        {
            ANT->link = N;
            N->link = P;
        }
    }
}

void remove_FP(no **L, int *n)
{
    no *AUX;

    if (*L != NULL)
    {
        *n = (*L)->info;
        AUX = *L;
        *L = (*L)->link;
        free(AUX);
    }
}

void exibe_FP(no **L)
{
    no *P = *L;
    setlocale(LC_ALL, "Portuguese");
    while (P != NULL)
    {
        if ((P->prior) == 1)
        {
            printf("O avião %d com prioridade %d. Esta com problemas e nescessita liberação de pouso o mais rapido possivel \n", P->info, P->prior);
        }
        else
        {
            if ((P->prior) == 2)
            {
                printf("O avião %d com prioridade %d. Nescessita liberação para pousar. \n", P->info, P->prior);
            }
            else
            {
                printf("O avião %d com prioridade %d. Nescessita liberação para decolar. \n", P->info, P->prior);
            }
        }
         P = P->link;
    }
}
void exibe_2_FP(no **L)
{
    no *P = *L;
    setlocale(LC_ALL, "Portuguese");
    int i = P->prior;
    if (P != NULL)
    {
        if ((P->prior) == 1)
        {
            printf("O avião %d com prioridade %d. Esta com problemas e foi leberado o pouso \n", P->info, P->prior);
        }
        else
        {
            if ((P->prior) == 2)
            {
                printf("O avião %d com prioridade %d. Foi leberado o pouso. \n", P->info, P->prior);
            }
            else
            {
                printf("O avião %d com prioridade %d. Foi leberada a decolagem. \n", P->info, P->prior);
            }
        }
        P = P->link;
    }
}
// Criado para printar apenas o primeiro valor da fila.
int Pri(no **L)
{
    no *P = *L;
    int x;
    if (P != NULL)
    {
        x = P->prior;
        return x;
    }
}
// Criado para recuperação de Prioridade
int Num(no **L)
{
    no *P = *L;
    int x;
    if (P != NULL)
    {
        x = P->info;
        return x;
    }
}
//Criado para recuperar o numero do avião