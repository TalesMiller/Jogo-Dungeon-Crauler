#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct NoTag
{
    char info[701];
    struct NoTag *link;
} no;
void inicializa_Pilha(no **L)
{
    *L = NULL;
}

void PUSH(no **L, char *texto)
{

    no *N;
    N = (no *)malloc(sizeof(no));
    strcpy(N->info, texto);
    N->link = *L;
    *L = N;
}

void POP(no **L)
{
    no *AUX;
    if (L != NULL)
    {
        AUX = *L;
        *L = (*L)->link;
        free(AUX);
    }
}

void mostra(no **L)
{
    if (*L != NULL)
    {
        for (int i = 0; (*L)->info[i] != '\0'; i++)
        {
            printf("%c", (*L)->info[i]);
        }
    }
}