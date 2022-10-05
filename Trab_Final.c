#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>
#include "Pilha_LE.h"
#include "Finais.h"
#include "jogatina.h"
#include "Andares.h"
#include "Menu.h"

#define Cima 72
#define Baixo 80
#define Esquerda 75
#define Direita 77
#define enter 13

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int sexo;
    sexo = Sexo();
    system("cls");
    srand(time(NULL));
    int Ran, Vida_Atual, Vida_Total, Sorte = 0, Azar = 0, Bem = 0, Neutro = 0, Mal = 0, x, X = 18, Y = 53, i, j, Even, Ale, Arma = 8;
    char Mapa[20][63];
    char PAn;
    int LAnX = X, LAnY = Y;
    Andar_1(Mapa);
    PAn = Mapa[X][Y];
    Mapa[X][Y] = 'P';
    no *Missoes, *Eventos, *Tesouro;
    inicializa_Pilha(&Missoes);
    inicializa_Pilha(&Eventos);
    inicializa_Pilha(&Tesouro);
    for (i = 0; i < 6; i++)
    {
        Ran = (rand() % 3) + 1;
        PUSH(&Missoes, Ran);
        Ran = (rand() % 4);
        PUSH(&Tesouro, Ran);
        if (i >= 4)
        {
            Ran = (rand() % 2) + 1;
            PUSH(&Eventos, Ran);
        }
    }
    while (Mapa[X][Y] != 'S')
    {
        for (i = 0; i < 20; i++)
        {
            for (j = 0; j < 63; j++)
            {
                if ((Mapa[i][j] == 'E') || (Mapa[i][j] == 'U') || (Mapa[i][j] == 'T'))
                {
                    printf(" ");
                }
                else
                {
                    printf("%c", Mapa[i][j]);
                }
            }
            printf("\n");
        }
        x = getch();
        if (x == Cima)
        {
            X--;
        }
        else
        {
            if (x == Baixo)
            {
                X++;
            }
            else
            {
                if (x == Esquerda)
                {
                    Y--;
                }
                else
                {
                    if (x == Direita)
                    {
                        Y++;
                    }
                }
            }
        }
        system("cls");
        if (Mapa[X][Y] == 'S')
        {
            break;
        }
        Mapa[LAnX][LAnY] = PAn;
        PAn = Mapa[X][Y];
        if ((Mapa[X][Y] == '|') || (Mapa[X][Y] == '-') || Mapa[X][Y] == '+')
        {
            X = LAnX;
            Y = LAnY;
            printf("Aproveite e explore a dungeon o maximo possivel para enriquecer e ganhar poder.\n");
            printf("Voce bateu numa parede.\n\n");
            Mapa[LAnX][LAnY] = ' ';
            PAn = ' ';
        }
        else
        {
            if (X == 19 || X == 0 || Y == 62 || Y == 0)
            {
                X = LAnX;
                Y = LAnY;
                printf("Aproveite e explore a dungeon o maximo possivel para enriquecer e ganhar poder.\n");
                printf("A sua saida da dungeon e proibida.\n\n");
                Mapa[LAnX][LAnY] = ' ';
                PAn = ' ';
            }
            else
            {
                if ((Mapa[X][Y] == '/') || (Mapa[X][Y] == '\\') || (Mapa[X][Y] == '_'))
                {
                    printf("Aproveite e explore a dungeon o maximo possivel para enriquecer e ganhar poder.\n");
                    printf("Voce encontrou e abril a porta.\n\n");
                }
                else
                {
                    if (Mapa[X][Y] == 'U')
                    {
                        POP(&Eventos, &Ale);
                        Even = Ale;
                        PAn = ' ';
                        if (Even == 1)
                        {
                            Evento_Javalis(&Sorte, &Azar, &Vida_Atual, Vida_Total, &Bem, &Mal, &Neutro, Arma);
                        }
                        else if (Even == 2)
                        {
                            Evento_Espada(&Arma, &Bem, &Neutro, &Mal);
                        }
                    }
                    else if (Mapa[X][Y] == 'E')
                    {
                        POP(&Missoes, &Ale);
                        Even = Ale;
                        PAn = ' ';
                        if (Even == 1)
                        {
                            system("cls");
                            Guer_Encontro_1;
                            Sleep(3000);
                            Combate_Goblin(&Sorte, &Azar, &Vida_Atual, Vida_Total, &Bem, &Mal, &Neutro, Arma);
                            system("cls");
                        }
                        else if (Even == 2)
                        {
                            system("cls");
                            Guer_Encontro_2;
                            Sleep(3000);
                            Bau_Especial(&Vida_Atual, &Bem, &Mal, &Neutro);
                            system("cls");
                        }
                        else if (Even == 3)
                        {
                            system("cls");
                            Guer_Encontro_3;
                            Sleep(3000);
                            Homem_Ferido(&Bem, &Mal, &Neutro);
                            system("cls");
                        }
                    }
                    else if (Mapa[X][Y] == 'T')
                    {
                        PAn = ' ';
                        printf("Aproveite e explore a dungeon o maximo possivel para enriquecer e ganhar poder.\n");
                        printf("Voce encontrol um bau do tesouro o que sera que tem dentro dele.\n\n");
                        POP(&Tesouro, &Ale);
                        Tesouro_Encon(&Vida_Total, &Vida_Atual, &Arma, Ale);
                    }
                    else
                    {
                        printf("Aproveite e explore a dungeon o maximo possivel para enriquecer e ganhar poder.\n\n");
                    }
                }
            }
        }

        Mapa[X][Y] = 'P';
        LAnX = X;
        LAnY = Y;
        if (Vida_Atual == 0)
        {
            break;
        }
    }
    printf("Voce encontrou e desceu as escadas para o segundo andar.\n");
    Andar_2(Mapa);
    X = 3;
    Y = 58;
    PAn = Mapa[X][Y];
    LAnX = X;
    LAnY = Y;
    Mapa[X][Y] = 'P';
    while (Mapa[X][Y] != 'S' && Vida_Atual != 0)
    {
        for (i = 0; i < 20; i++)
        {
            for (j = 0; j < 63; j++)
            {
                if ((Mapa[i][j] == 'E') || (Mapa[i][j] == 'U') || (Mapa[i][j] == 'T'))
                {
                    printf(" ");
                }
                else
                {
                    printf("%c", Mapa[i][j]);
                }
            }
            printf("\n");
        }
        x = getch();
        if (x == Cima)
        {
            X--;
        }
        else
        {
            if (x == Baixo)
            {
                X++;
            }
            else
            {
                if (x == Esquerda)
                {
                    Y--;
                }
                else
                {
                    if (x == Direita)
                    {
                        Y++;
                    }
                }
            }
        }
        system("cls");
        if (Mapa[X][Y] == 'S')
        {
            break;
        }
        Mapa[LAnX][LAnY] = PAn;
        PAn = Mapa[X][Y];
        if ((Mapa[X][Y] == '|') || (Mapa[X][Y] == '-') || Mapa[X][Y] == '+')
        {
            X = LAnX;
            Y = LAnY;
            printf("Aproveite e explore a dungeon o maximo possivel para enriquecer e ganhar poder.\n");
            printf("Voce bateu numa parede.\n\n");
            Mapa[LAnX][LAnY] = ' ';
            PAn = ' ';
        }
        else
        {
            if (X == 19 || X == 0 || Y == 62 || Y == 0)
            {
                X = LAnX;
                Y = LAnY;
                printf("Aproveite e explore a dungeon o maximo possivel para enriquecer e ganhar poder.\n");
                printf("A sua saida da dungeon e proibida.\n\n");
                Mapa[LAnX][LAnY] = ' ';
                PAn = ' ';
            }
            else
            {
                if ((Mapa[X][Y] == '/') || (Mapa[X][Y] == '\\') || (Mapa[X][Y] == '_'))
                {
                    printf("Aproveite e explore a dungeon o maximo possivel para enriquecer e ganhar poder.\n");
                    printf("Voce encontrou e abril a porta.\n\n");
                }
                else
                {
                    if (Mapa[X][Y] == 'U')
                    {
                        POP(&Eventos, &Ale);
                        Even = Ale;
                        PAn = ' ';
                        if (Even == 1)
                        {
                            system("cls");
                            Evento_Javalis(&Sorte, &Azar, &Vida_Atual, Vida_Total, &Bem, &Mal, &Neutro, Arma);
                        }
                        else if (Even == 2)
                        {
                            system("cls");
                            Evento_Espada(&Arma, &Bem, &Neutro, &Mal);
                        }
                    }
                    else if (Mapa[X][Y] == 'E')
                    {
                        POP(&Missoes, &Ale);
                        Even = Ale;
                        PAn = ' ';
                        if (Even == 1)
                        {
                            system("cls");
                            Guer_Encontro_4;
                            Sleep(3000);
                            Encontro_Zumbi(&Sorte, &Azar, &Vida_Atual, Vida_Total, &Bem, &Mal, &Neutro, Arma);
                            system("cls");
                        }
                        else if (Even == 2)
                        {
                            system("cls");
                            Guer_Encontro_5;
                            Sleep(3000);
                            Cocatriz_Descriativa(&Vida_Atual,&Bem,&Mal,&Neutro,&Arma);
                            system("cls");
                        }
                        else if (Even == 3)
                        {
                            system("cls");
                            Guer_Encontro_6;
                            Sleep(3000);
                            Crianca_Maldita(&Vida_Atual, &Bem, &Mal, &Neutro);
                            system("cls");
                        }
                    }
                    else if (Mapa[X][Y] == 'T')
                    {
                        PAn = ' ';
                        printf("Aproveite e explore a dungeon o maximo possivel para enriquecer e ganhar poder.\n");
                        printf("Voce encontrol um bau do tesouro o que sera que tem dentro dele.\n\n");
                        POP(&Tesouro, &Ale);
                        Tesouro_Encon(&Vida_Total, &Vida_Atual, &Arma, Ale);
                    }
                    else
                    {
                        printf("Aproveite e explore a dungeon o maximo possivel para enriquecer e ganhar poder.\n\n");
                    }
                }
            }
        }

        Mapa[X][Y] = 'P';
        LAnX = X;
        LAnY = Y;
        if (Vida_Atual == 0)
        {
            break;
        }
    }
    X = 2;
    Y = 5;
    Andar_3(Mapa);
    PAn = Mapa[X][Y];
    LAnX = X;
    LAnY = Y;
    Mapa[X][Y] = 'P';
    printf("Voce encontrou e desceu as escadas para o terceiro andar.\n");
    while (Mapa[X][Y] != 'S' && Vida_Atual != 0 && Mapa[X][Y] != '1' && Mapa[X][Y] != '2' && Mapa[X][Y] != '3') //OLhar mais atentamente
    {
        for (i = 0; i < 20; i++)
        {
            for (j = 0; j < 63; j++)
            {
                if ((Mapa[i][j] == '1') || (Mapa[i][j] == '2') || (Mapa[i][j] == '3'))
                {
                    printf(" ");
                }
                else
                {
                    printf("%c", Mapa[i][j]);
                }
            }
            printf("\n");
        }
        x = getch();
        if (x == Cima)
        {
            X--;
        }
        else
        {
            if (x == Baixo)
            {
                X++;
            }
            else
            {
                if (x == Esquerda)
                {
                    Y--;
                }
                else
                {
                    if (x == Direita)
                    {
                        Y++;
                    }
                }
            }
        }
        system("cls");
        if (Mapa[X][Y] == 'S')
        {
            break;
        }
        Mapa[LAnX][LAnY] = PAn;
        PAn = Mapa[X][Y];
        if ((Mapa[X][Y] == '|') || (Mapa[X][Y] == '-') || Mapa[X][Y] == '+')
        {
            X = LAnX;
            Y = LAnY;
            printf("Aproveite e explore a dungeon o maximo possivel para enriquecer e ganhar poder.\n");
            printf("Voce bateu numa parede.\n\n");
            Mapa[LAnX][LAnY] = ' ';
            PAn = ' ';
        }
        else
        {
            if (X == 19 || X == 0 || Y == 62 || Y == 0)
            {
                X = LAnX;
                Y = LAnY;
                printf("Aproveite e explore a dungeon o maximo possivel para enriquecer e ganhar poder.\n");
                printf("A sua saida da dungeon e proibida.\n\n");
                Mapa[LAnX][LAnY] = ' ';
                PAn = ' ';
            }
            else
            {
                if ((Mapa[X][Y] == '/') || (Mapa[X][Y] == '\\') || (Mapa[X][Y] == '_'))
                {
                    printf("Aproveite e explore a dungeon o maximo possivel para enriquecer e ganhar poder.\n");
                    printf("Voce encontrou e abril a porta.\n\n");
                }
                else
                {

                    if (Mapa[X][Y] == '1')
                    {
                        Guer_Encontro_7;
                        Sleep(3000);
                        Draugr_Anciao(&Sorte, &Azar, &Vida_Atual, Vida_Total, &Bem, &Mal, &Neutro, Arma);
                    }
                    else if (Mapa[X][Y] == '2')
                    {
                        Guer_Encontro_8;
                        Sleep(3000);
                        Tesouro_Infinito(&Bem, &Mal, &Neutro);
                    }
                    else if (Mapa[X][Y] == '3')
                    {
                        Guer_Encontro_9;
                        Sleep(3000);
                        Portal(&Bem, &Mal, &Neutro);
                    }

                    else if (Mapa[X][Y] == 'T')
                    {
                        PAn = ' ';
                        printf("Aproveite e explore a dungeon o maximo possivel para enriquecer e ganhar poder.\n");
                        printf("Voce encontrol um bau do tesouro o que sera que tem dentro dele.\n\n");
                        POP(&Tesouro, &Ale);
                        Tesouro_Encon(&Vida_Total, &Vida_Atual, &Arma, Ale);
                    }
                    else
                    {
                        printf("Aproveite e explore a dungeon o maximo possivel para enriquecer e ganhar poder.\n\n");
                    }
                }
            }
        }

        Mapa[X][Y] = 'P';
        LAnX = X;
        LAnY = Y;
    }
    Fins(Vida_Atual, Sorte, Azar, Neutro, Mal, Bem, sexo);
    system("pause");
}