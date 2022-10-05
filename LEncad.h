#include <stdio.h>
#include <stdlib.h>

typedef struct tipoNo
{
    int info;
    struct tipoNo *prox;
} no;

void IniList(no **L)
{
    *L = NULL;
}

void PercList(no **L)
{
    no *P;
    P = *L;
    while (P != NULL)
    {
        printf("%d\n", P->info);
        P = P->prox;
    }
}

void AumList(no **L, int X){no *P, *N;N=(no *)malloc(sizeof(no));N->info=X;N->prox=NULL;if(*L==NULL)*L=N;else{P=*L;while(P->prox!=NULL)P=P->prox;P->prox=N;}}

void InLCres(no **L, int x)
{
    no *N, *P, *ANT;
    N = (no *)malloc(sizeof(no));
    N->info = x;
    if (*L == NULL)
    {
        *L = N;
        N->prox = NULL;
    }
    else
    {
        P = *L;
        while ((P != NULL) && (x >= P->info))
        {
            ANT = P;
            P = P->prox;
        }
        if (P == *L)
        {
            N->prox = *L;
            *L = N;
        }
        else
        {
            if (P == NULL)
            {
                ANT->prox = N;
                N->prox = NULL;
            }
            else
            {
                ANT->prox = N;
                N->prox = P;
            }
        }
    }
}