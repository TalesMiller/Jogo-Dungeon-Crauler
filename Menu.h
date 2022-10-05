int Classe()
{
    int c = 0, i = 1;
    while (i != 5)
    {
        if (i == 1)
        {

            printf("O caminho do guerreiro te chama para completar a dungeon.\n");
            printf("                   +----------------+\n");
            printf("                   |       /\\       |\n");
            printf("                   |      /||\\      |\n");
            printf("                   |     / || \\     |\n");
            printf("                   |    /  ||  \\    |\n");
            printf("                   |    |  ||  |    |\n");
            printf("                   |    |  ||  |    |\n");
            printf("                   |    |  ||  |    |\n");
            printf("                   |    |  ||  |    |\n");
            printf("                   |    |  ||  |    |\n");
            printf("                   |    |  ||  |    |\n");
            printf("                   |    |  ||  |    |\n");
            printf("                   |    |  ||  |    |\n");
            printf("                   |    |  ||  |    |\n");
            printf("                   |    |  ||  |    |\n");
            printf("                   |    |  ||  |    |\n");
            printf("                   |    |  ||  |    |\n");
            printf("                   |    |  ||  |    |\n");
            printf("                   |    |  ||  |    |\n");
            printf("                   |    |  ||  |    |\n");
            printf("                   |  +----------+  |\n");
            printf("                   |  +----------+  |\n");
            printf("                   |       ||       |\n");
            printf("                   |       ||       |\n");
            printf("                   |       ||       |\n");
            printf("                   |       ||       |\n");
            printf("                   |       ||       |\n");
            printf("                   |      //\\\\      |\n");
            printf("                   |      \\\\//      |\n");
            printf("                   |       \\/       |\n");
            printf("                   +----------------+\n");
        }
        else if (i == 2)
        {

            printf("Os grandes tesouros que se escondem atraem todo o desejo do ladino.\n");
            printf("                  +----------------+\n");
            printf("                  |    ________    |\n");
            printf("                  |   /        \\   |\n");
            printf("                  |  / Tesouro  \\  |\n");
            printf("                  | /     do     \\ |\n");
            printf("                  |/    Ladino    \\|\n");
            printf("                  |\\     Maior    /|\n");
            printf("                  | \\    Valor   / |\n");
            printf("                  |  \\ em Moeda /  |\n");
            printf("                  |   \\________/   |\n");
            printf("                  +----------------+\n");
        }
        else if (i == 3)
        {
            printf("As arcanas ancestrais falam para o mago completar a dungeon.\n");
            printf("                  +----------------+\n");
            printf("                  |    /| /\\ |\\    |\n");
            printf("                  |   / |//\\\\| \\   |\n");
            printf("                  |  /  |\\\\//|  \\  |\n");
            printf("                  |  \\  | \\/ |  /  |\n");
            printf("                  |   \\ |    | /   |\n");
            printf("                  |    ||    ||    |\n");
            printf("                  |    \\\\____//    |\n");
            printf("                  |     \\    /     |\n");
            printf("                  |      \\  /      |\n");
            printf("                  |       ||       |\n");
            printf("                  |       ||       |\n");
            printf("                  |       ||       |\n");
            printf("                  |       ||       |\n");
            printf("                  |       ||       |\n");
            printf("                  |       ||       |\n");
            printf("                  |       ||       |\n");
            printf("                  |       ||       |\n");
            printf("                  |       ||       |\n");
            printf("                  |      //\\\\      |\n");
            printf("                  |     ///\\\\\\     |\n");
            printf("                  |     \\\\\\///     |\n");
            printf("                  |      \\\\//      |\n");
            printf("                  |       \\/       |\n");
            printf("                  +----------------+\n");
        }
        c = getch();
        if (c == 72)
        {
            i += 1;
        }
        else if (c == 80)
        {
            i -= 1;
        }
        else if (c == 13)
        {
            return i;
        }
        if (i >= 4)
        {
            i = 1;
        }
        else if (i == 0)
        {
            i = 3;
        }
        system("cls");
    }
}

int Sexo()
{
    int h, sexo = 0;
    while (h != 13)
    {
        if (sexo == 0)
        {
            system("cls");
            printf("Escolha o sexo do seu personagem\n\n");
            printf("              Feminino\n");
            printf("               _____\n");
            printf("              / ___ \\\n");
            printf("             / /   \\ \\\n");
            printf("            ( (     ) )\n");
            printf("             \\ \\___/ /  \n");
            printf("              \\_____/\n");
            printf("                 |\n");
            printf("                 |\n");
            printf("                 |\n");
            printf("           ------+------\n");
            printf("                 |\n");
            printf("                 |     \n");
        }
        else if (sexo == 1)
        {
            system("cls");
            printf("Escolha o sexo do seu personagem\n\n");
            printf("            Masculino\n");
            printf("              __\n");
            printf("            _/  \\_\n");
            printf("          _/ / /  \\_\n");
            printf("       _____/ /    \n");
            printf("      / ___ \\/\n");
            printf("     / /   \\ \\\n");
            printf("    ( (     ) )\n");
            printf("     \\ \\___/ /\n");
            printf("      \\_____/\n");
        }
        h = getch();
        if (h == 75)
        {
            sexo++;
        }
        else if (h == 77)
        {
            sexo--;
        }
        if (sexo == 2)
        {
            sexo = 0;
        }
        else if (sexo == -1)
        {
            sexo = 1;
        }
    }
    return sexo;
}