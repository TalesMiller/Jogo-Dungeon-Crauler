void Combate_Goblin(int *Sorte, int *Azar, int *Vida_Atual, int Vida_Total, int *Bom, int *Mal, int *Neutro, int Arma) //corrigir
{
    setlocale(LC_ALL, "Portuguese");
    int Vida[3], Dano, x = 1, i = 0, Dano_Inim, c = 1, h = 1, g = 1, Pegado;
    Vida[0] = Vida[1] = Vida[2] = 20;
    while (c == 13)
    {
        printf("Voce vai?\n\n");
        if (h == 1)
        {
            printf(" _______  _______  _                 _______  _______  _______  _______  _______ \n");
            printf("(  ____ \\(  ___  )( (    /||\\     /|(  ____ \\(  ____ )(  ____ \\(  ___  )(  ____ )\n");
            printf("| (    \\/| (   ) ||  \\  ( || )   ( || (    \\/| (    )|| (    \\/| (   ) || (    )|\n");
            printf("| |      | |   | ||   \\ | || |   | || (__    | (____)|| (_____ | (___) || (____)|\n");
            printf("| |      | |   | || (\\ \\) |( (   ) )|  __)   |     __)(_____  )|  ___  ||     __)\n");
            printf("| |      | |   | || | \\   | \\ \\_/ / | (      | (\\ (         ) || (   ) || (\\ (\n");
            printf("| (____/\\| (___) || )  \\  |  \\   /  | (____/\\| ) \\ \\__/\\____) || )   ( || ) \\ \\__\n");
            printf("(_______/(_______)|/    )_)   \\_/   (_______/|/   \\__/\\_______)|/     \\||/   \\__/\n");
        }
        else if (h == 2)
        {

            printf(" _                _________ _______  _______ \n");
            printf("( \\      |\\     /|\\__   __/(  ___  )(  ____ )\n");
            printf("| (      | )   ( |   ) (   | (   ) || (    )|\n");
            printf("| |      | |   | |   | |   | (___) || (____)|\n");
            printf("| |      | |   | |   | |   |  ___  ||     __)\n");
            printf("| |      | |   | |   | |   | (   ) || (\\ (   \n");
            printf("| (____/\\| (___) |   | |   | )   ( || ) \\ \\__\n");
            printf("(_______/(_______)   )_(   |/     \\||/   \\__/\n");
        }
        c = getch();
        if (c == 72)
        {
            h--;
        }
        else if (c == 80)
        {
            h++;
        }
        if (h > 2)
        {
            h = 1;
        }
        else if (h < 1)
        {
            h = 2;
        }
        system("cls");
    }
    scanf("%d", &h);
    if (h == 1) //temporario, criar menu
    {
        while (Pegado != 13)
        {
            printf("Goblin: Quais s??o suas ultimas palavras comida?\n\n");
            if (g == 1)
            {
                printf("Minhas ??ltimas palavras seriam 'pq vcs est??o fazendo isso?'.\n");
            }
            else if (g == 2)
            {
                printf("A vida pode ter mais coisas que apenas matar.\n");
            }
            else if (g == 3)
            {
                printf("Existem mais coisas no mundo que sombras e trevas.\n");
            }
            Pegado = getch();
            if (Pegado == 72)
            {
                g--;
            }
            else if (Pegado == 80)
            {
                g++;
            }
            if (g < 1)
            {
                g = 3;
            }
            else if (g > 3)
            {
                g = 1;
            }
            system("cls");
        }
        Pegado = 0;
        Sleep(1000);
        if (g == 2)
        {
            g = 1;
            while (Pegado != 13)
            {
                printf("Goblin: Para vcs que o mundo ajuda ?? f??cil falar mas para n??s que todos odeiam n??o podemos ter algum futuro se n??o matar e matar.\n\n");
                if (g == 1)
                {
                    printf("Mesmo que a sociedade seja dif??cil, n??s temos que fazer nossa parte para mudar a ideia popular.\n");
                }
                else if (g == 2)
                {
                    printf("Vcs apenas se conformam a uma imposi????o social, vcs deveriam se impor para mudar isso.\n");
                }
                else if (g == 3)
                {
                    printf("A realidade pode ser dif??cil mas n??o devemos usar isso como desculpa para fazer maldades.\n");
                }
                Pegado = getch();
                if (Pegado == 72)
                {
                    g--;
                }
                else if (Pegado == 80)
                {
                    g++;
                }
                if (g < 1)
                {
                    g = 3;
                }
                else if (g > 3)
                {
                    g = 1;
                }
                system("cls");
            }
            Pegado = 0;
            if (g == 1)
            {
                while (Pegado != 13)
                {
                    printf("Goblin: Vis??o interesse pessoal mas isso n??o muda nossa vontade de te matar.\n\n");
                    if (g == 1)
                    {
                        printf("Vcs podem estar querendo me matar mas vcs n precisam fazer isso.\n");
                    }
                    else if (g == 2)
                    {
                        printf("Me matar vai apenas fazer mais dificil para vcs serem asceitos na sociedade.\n");
                    }
                    else if (g == 3)
                    {
                        printf("Muito bem se vcs querem me matar podem vir, mas se vcs querem que o futuro esteja garantido para o futuro saiam q eu garanto q ajudo vcs.\n");
                    }
                    Pegado = getch();
                    if (Pegado == 72)
                    {
                        g--;
                    }
                    else if (Pegado == 80)
                    {
                        g++;
                    }
                    if (g > 3)
                    {
                        g = 1;
                    }
                    else if (g < 1)
                    {
                        g = 3;
                    }
                    system("cls");
                }

                if (g == 3)
                {
                    printf("Goblin: Hump, Talvez vc esteja certo, n??s vamos nos retirar e tentar mudar um pouco da vis??o dos goblins.\n.");
                    *Bom = *Bom + 1;
                }
                else
                {
                    printf("Voc?? realmente gastou nosso tempo com discuss??es bobas.\n");
                    h = 2;
                }
            }
            else
            {
                printf("Goblin: Suas criaturas idiotas vcs n entendem o sofrimento da segrega????o goblin na sociedade.\n");
                h = 2;
            }
        }
        else
        {
            printf("Goblin: Palavras finais marcantes que ser??o esquecidas pelas paredes da dungeon\n");
            h = 2;
        }
    }
    if (h == 2)
    {
        while ((Vida[0] > 0) || (Vida[1] > 0) || (Vida[2] > 0))
        {
            while (c != 13)
            {
                printf("Inimigo 1: %d Inimigo 2: %d Inimigo 3: %d\n\n", Vida[0], Vida[1], Vida[2]);
                printf("Sua vida: %d/%d\n\n", *Vida_Atual, Vida_Total);
                printf("Os 3 goblins se encontram na frente qual dos 3 voc?? ataca? \n");
                if (i == 0)
                {
                    printf("     +------------------------+                                                \n");
                    printf("     |        ,      ,        |        ,      ,                 ,      ,        \n");
                    printf("     |       /(.-''-.)\\       |       /(.-''-.)\\               /(.-''-.)\\       \n");
                    printf("     |   |\\  \\/      \\/  /|   |   |\\  \\/      \\/  /|       |\\  \\/      \\/  /|   \n");
                    printf("     |   | \\ / =.  .= \\ / |   |   | \\ / =.  .= \\ / |       | \\ / =.  .= \\ / |   \n");
                    printf("     |   \\( \\   o\\/o   / )/   |   \\( \\   o\\/o   / )/       \\( \\   o\\/o   / )/   \n");
                    printf("     |    \\_, '-/  \\-' ,_/    |    \\_, '-/  \\-' ,_/         \\_, '-/  \\-' ,_/    \n");
                    printf("     |      /   \\__/   \\      |      /   \\__/   \\             /   \\__/   \\      \n");
                    printf("     |      \\ \\__/\\__/ /      |      \\ \\__/\\__/ /             \\ \\__/\\__/ /      \n");
                    printf("     |    ___\\ \\|--|/ /___    |    ___\\ \\|--|/ /___         ___\\ \\|--|/ /___    \n");
                    printf("     |  /`    \\      /    `\\  |  /`    \\      /    `\\      /`    \\      /    `\\ \n");
                    printf("     | /       '----'       \\ | /       '----'       \\    /       '----'       \\\n");
                    printf("     +------------------------+\n");
                }
                else if (i == 1)
                {
                    printf("                              +------------------------+                        \n");
                    printf("              ,      ,        |        ,      ,        |        ,      ,        \n");
                    printf("             /(.-''-.)\\       |       /(.-''-.)\\       |       /(.-''-.)\\       \n");
                    printf("         |\\  \\/      \\/  /|   |   |\\  \\/      \\/  /|   |   |\\  \\/      \\/  /|   \n");
                    printf("         | \\ / =.  .= \\ / |   |   | \\ / =.  .= \\ / |   |   | \\ / =.  .= \\ / |   \n");
                    printf("         \\( \\   o\\/o   / )/   |   \\( \\   o\\/o   / )/   |   \\( \\   o\\/o   / )/   \n");
                    printf("          \\_, '-/  \\-' ,_/    |    \\_, '-/  \\-' ,_/    |    \\_, '-/  \\-' ,_/    \n");
                    printf("            /   \\__/   \\      |      /   \\__/   \\      |      /   \\__/   \\      \n");
                    printf("            \\ \\__/\\__/ /      |      \\ \\__/\\__/ /      |      \\ \\__/\\__/ /      \n");
                    printf("          ___\\ \\|--|/ /___    |    ___\\ \\|--|/ /___    |    ___\\ \\|--|/ /___    \n");
                    printf("        /`    \\      /    `\\  |  /`    \\      /    `\\  |   /`    \\      /    `\\ \n");
                    printf("       /       '----'       \\ | /       '----'       \\ |  /       '----'       \\\n");
                    printf("                              +------------------------+                        \n");
                }
                else if (i == 2)
                {
                    printf("                                                       +------------------------+\n");
                    printf("              ,      ,                 ,      ,        |        ,      ,        |\n");
                    printf("             /(.-''-.)\\               /(.-''-.)\\       |       /(.-''-.)\\       |\n");
                    printf("         |\\  \\/      \\/  /|       |\\  \\/      \\/  /|   |   |\\  \\/      \\/  /|   |\n");
                    printf("         | \\ / =.  .= \\ / |       | \\ / =.  .= \\ / |   |   | \\ / =.  .= \\ / |   |\n");
                    printf("         \\( \\   o\\/o   / )/       \\( \\   o\\/o   / )/   |   \\( \\   o\\/o   / )/   |\n");
                    printf("          \\_, '-/  \\-' ,_/         \\_, '-/  \\-' ,_/    |    \\_, '-/  \\-' ,_/    |\n");
                    printf("            /   \\__/   \\             /   \\__/   \\      |      /   \\__/   \\      |\n");
                    printf("            \\ \\__/\\__/ /             \\ \\__/\\__/ /      |      \\ \\__/\\__/ /      |\n");
                    printf("          ___\\ \\|--|/ /___         ___\\ \\|--|/ /___    |    ___\\ \\|--|/ /___    |\n");
                    printf("        /`    \\      /    `\\     /`    \\      /    `\\  |   /`    \\      /    `\\ |\n");
                    printf("       /       '----'       \\   /       '----'       \\ |  /       '----'       \\|\n");
                    printf("                                                       +------------------------+\n");
                }
                c = getch();
                if (c == 75)
                {
                    i--;
                }
                else if (c == 77)
                {
                    i++;
                }
                if (i >= 3)
                {
                    i = 0;
                }
                else if (i < 0)
                {
                    i = 2;
                }
                system("cls");
                if ((Vida[i] == 0))
                {
                    printf("Esse inimigo j?? caiu no ch??o, ataque outra inimigo para vencer a batalha, qual sera o proximo?\n\n");
                    c = 0;
                }
            }
            c = 0;
            x = (rand() % 20) + 1;
            if (x >= 16)
            {
                Dano_Inim = (rand() % 6) + (rand() % 6) + (rand() % 6) + 6;
            }
            else
            {
                Dano_Inim = 0;
            }
            x = (rand() % 20) + 5;
            Dano = (rand() % Arma) + 5;
            if (x == 20)
            {
                Dano *= 2;
                *Sorte = *Sorte + 1;
            }
            else
            {
                if (x <= 14)
                {
                    Dano = 0;
                    if (x == 4)
                    {
                        Dano_Inim *= 2;
                        *Azar = *Azar + 1;
                    }
                }
            }
            Vida[i] -= Dano;
            *Vida_Atual -= Dano_Inim;
            if (Vida[i] <= 0)
            {
                Vida[i] = 0;
                printf("Voce deixou o inimigo incapacitado.\n\n");
            }
            printf("Inimigo 1: %d Inimigo 2: %d Inimigo 3: %d\n\n", Vida[0], Vida[1], Vida[2]);
            if (Dano == 0)
            {
                printf("Voce errou o ataque.\n\n");
            }
            else if (Dano > 0)
            {
                printf("Voc?? causou dano igual a : %d no inimigo %d?? inimigo.\n\n", Dano, i + 1);
            }
            if (Dano_Inim == 0)
            {
                printf("O inimigo errou o ataque.\n\n");
            }
            else if (Dano_Inim > 0)
            {
                printf("O inimigo te ascertou e causou um dano igual %d\n\n", Dano_Inim);
            }
            if (*Vida_Atual <= 0)
            {
                printf("Os goblins te ascertam um golpe mortal que acarretou em sua morte.\n\n");
                *Vida_Atual = 0;
                break;
            }
        }
        i = 1;
        while ((Vida[0] == 0) && (Vida[1] == 0) && (Vida[2] == 0) && c != 13)
        {
            printf("Os inimigos est??o ?? sua frente ca??dos e desacordados, Voc?? quer mat?? los ou deix?? los assim?\n\n");
            if (i == 1)
            {
                printf("___  ___      _             \n");
                printf("|  \\/  |     | |            \n");
                printf("| .  . | __ _| |_ __ _ _ __ \n");
                printf("| |\\/| |/ _` | __/ _` | '__|\n");
                printf("| |  | | (_| | || (_| | |   \n");
                printf("\\_|  |_/\\__,_|\\__\\__,_|_|   \n");
            }
            else if (i == 2)
            {
                printf("______     _                \n");
                printf("|  _  \\   (_)               \n");
                printf("| | | |___ ___  ____ _ _ __ \n");
                printf("| | | / _ \\ \\ \\/ / _` | '__|\n");
                printf("| |/ /  __/ |>  < (_| | |   \n");
                printf("|___/ \\___|_/_/\\_\\__,_|_|   \n");
            }
            c = getch();
            if (c == 72)
            {
                i++;
            }
            if (c == 80)
            {
                i--;
            }
            if (i == 1 && c == 13)
            {
                *Mal = *Mal + 1;
            }
            else if (i == 2 && c == 13)
            {
                *Neutro = *Neutro + 1;
            }
            else if (i <= 0)
            {
                i = 2;
            }
            else if (i >= 3)
            {
                i = 1;
            }
            system("cls");
        }
    }
    Sleep(3000);
}

void Bau_Especial(int *Vida_Atual, int *Bom, int *Mal, int *Neutro) //COrrigir
{
    setlocale(LC_ALL, "Portuguese");
    int i = 1, j;
    while (j != 13)
    {
        printf("Um grande ba?? est?? na sua frente o que voc?? faz? \n\n");
        if (i == 1)
        {
            printf("Quais sera que sao os tesouros que tem dentro desse ba??.\n");
        }
        else if (i == 2)
        {
            printf("Algu??m j?? deve ter pego esses tesouros.\n");
        }
        else if (i == 3)
        {
            printf("Esse ba?? t?? com uma cara estranha.\n");
        }
        j = getch();
        if (j == 72)
        {
            i--;
        }
        else if (j == 80)
        {
            i++;
        }
        if (i < 1)
        {
            i = 3;
        }
        else if (i > 3)
        {
            i = 1;
        }
        system("cls");
    }

    if (i == 1)
    {
        printf("Ao abrir o ba?? 5 tent??culos saem de dentro, inv??s de ter tesouros e itens preciosos apenas tinha uma l??ngua e dentes dentro do ba??.\n");
        printf("Os tent??culos prendem em seus bra??os e pernas te imobilizando e te engolindo por inteiro.\n\n");
        *Vida_Atual = 0;
    }
    else if (i == 2)
    {
        printf("Voce percebe que esse tesouro ?? suspeito, sabendo que muitos tesouros de dungeons s??o em suma monstros disfar??ados esperando por aventureiros iniciantes para devor?? los.\n");
        printf("Sabendo disso voce ignora o bau ignorando sua ganancia. Quando voce nao ve mais o bau voce escuta ao longe 'Humano maldito, dessa vez voce escapou mas nao vivera aos desafios futuros.\n\n");
        *Bom = *Bom + 1;
    }
    else if (i == 3)
    {
        printf("Ao encontrar o ba?? voc?? lembra de uma antiga lenda de aventureiros que perdiam a vida ou membros para monstros que se disfar??avam de ba??s para atrair aventureiros.\n");
        printf("Por isso voc?? olha de mais de perto o ba?? e percebe que as lendas eram verdadeiras, por isso voc?? d?? um ataque no monstro que faz com que ele cuspa uma anel dourado que voc?? pega para voc??.\n\n");
        *Neutro = *Neutro + 1;
    }
    Sleep(3000);
}

void Homem_Ferido(int *Bom, int *Mal, int *Neutro) //corrigir
{
    setlocale(LC_ALL, "Portuguese");
    int i = 1, h = 1, x = 1, y = 1;
    if (y != 13)
    {
        printf("Voce encontra uma pessoa muito machuda na sua frente o que vc faz?\n");
        if (i == 1)
        {
            printf("O homem est?? muito ferido e necessita de ajuda nesse momento, acho q se eu ignorar ele vai morrer.\n");
        }
        else if (i == 2)
        {
            printf("Nao sei se posso cur??-lo, mas posso fazer o sofrimento dele acabar agora.\n");
        }
        else if (i == 3)
        {
            printf("Ele n??o tem salva????o, eu quero pelo menos escutar as suas ??ltimas palavras.\n");
        }
        y = getch();
        if (y == 72)
        {
            i--;
        }
        else if (y == 80)
        {
            i++;
        }
        if (i > 3)
        {
            i = 1;
        }
        else if (i < 1)
        {
            i = 3;
        }
        system("cls");
    }
    if (i == 1)
    {
        x = rand() % 3;
        if (x == 0)
        {
            printf("Mesmo sem experi??ncia de medicina voc?? consegue preparar os primeiros socorros e deix?? lo num estado que a morte n??o era mais um perigo para ele.\n\n");
            *Bom = *Bom + 2;
        }
        else if (x == 1)
        {
            printf("Com sua pouca experi??ncia de medicina voc?? o ajuda o que voc?? sabe mas isso n??o se faz muito efetivo, por isso voc?? o ajuda e deixa para buscar ajuda,\n");
            printf("Quando voc?? chega nas portas e pede por ajuda duas pessoas entram e pedem para voc?? gui?? los para onde est?? o ferido, chegando l?? eles falam que voc?? fez a escolha certa e pegam a pessoa e se retiram da dungeon.\n\n");
            *Bom = *Bom + 1;
        }
        else if (x == 2)
        {
            printf("Voce tenta ajud??-lo com todas as suas for??as mas seus conhecimentos eram muito poucos e seus esfor??os apenas pioraram o estado dele.\n");
            printf("Mesmo por voc?? ter piorado o estado dele em suas ??ltimas for??as ele segura a sua m??o e agradece por t??-lo ajudado em suas ??ltimas palavras e ent??o morre em suas m??os.\n");
            *Bom = *Bom + 0;
        }
    }
    else if (i == 2)
    {
        printf("Olhando para o sofrimento dele voc?? saca sua arma e da um golpe final nele para acabar com todo o sofrimento.\n");
        printf("Quando ele v?? voc?? sacando sua arma ele fecha os olhos e fala baixo deixe indolor.");
        *Neutro = *Neutro + 1;
    }
    else if (i == 3)
    {
        printf("Voce ve os ??ltimos momentos da pessoa em sua frente. Ele para voc?? com olhares aterrorizados para voc?? e solta seu ??ltimo suspiro te chamando de monstro.\n\n");
        *Mal = *Mal + 1;
    }
    Sleep(3000);
}

void Evento_Javalis(int *Sorte, int *Azar, int *Vida_Atual, int Vida_Total, int *Bom, int *Mal, int *Neutro, int Arma) //corrigir
{
    setlocale(LC_ALL, "Portuguese");
    int i = 1, Vida[3], c = 1, x = 1, Dano_Inim, Dano, t = 0;
    Vida[0] = Vida[1] = Vida[2] = 20;
    while (x != 13)
    {
        printf("Um grupo de porcos esfomeados apareceram. O que voc?? faz?\n");
        if (i == 1)
        {
            printf("Esses porcos parecem deliciosos.\n");
        }
        else if (i == 2)
        {
            printf("Eles n??o est??o fazendo nenhum mal, n??o vou mexer com quem ta quieto.\n");
        }
        else if (i == 3)
        {
            printf("Coitados esses animais est??o com fome, vou ver se eles aceitam um pouco de comida.\n");
        }
        x = getch();
        if (x == 72)
        {
            i--;
        }
        else if (x == 80)
        {
            i++;
        }
        if (i > 3)
        {
            i = 1;
        }
        else if (i < 1)
        {
            i = 3;
        }
        system("cls");
    }

    if (i == 1)
    {
        i = 0;
        while ((Vida[0] > 0) || (Vida[1] > 0) || (Vida[2] > 0))
        {
            while (c != 13)
            {
                printf("Inimigo 1: %d Inimigo 2: %d Inimigo 3: %d\n\n", Vida[0], Vida[1], Vida[2]);
                printf("Sua vida: %d/%d\n\n", *Vida_Atual, Vida_Total);
                printf("Os 3 Porcos se encontram na frente qual dos 3 voc?? ataca? \n");
                if (i == 0)
                {
                    printf("+------------------------+\n");
                    printf("|       __,---.__        |        __,---.__                __,---.__\n");
                    printf("|    ,-'         `-.__   |     ,-'         `-.__        ,-'         `-.__\n");
                    printf("|  &/           `._\\ _\\  |   &/           `._\\ _\\     &/           `._\\ _\\\n");
                    printf("|  /               ''._  |   /               ''._     /               ''._\n");
                    printf("|  |   ,             (???) |  |   ,             (???)    |   ,             (???)\n");
                    printf("|  |__,'`-..--|__|--''   |  |__,'`-..--|__|--''      |__,'`-..--|__|--''\n");
                    printf("+------------------------+\n");
                }
                else if (i == 1)
                {
                    printf("                         +------------------------+\n");
                    printf("        __,---.__        |        __,---.__       |        __,---.__\n");
                    printf("     ,-'         `-.__   |     ,-'         `-.__  |     ,-'         `-.__\n");
                    printf("   &/           `._\\ _\\  |   &/           `._\\ _\\ |   &/           `._\\ _\\\n");
                    printf("   /               ''._  |   /               ''._ |   /               ''._\n");
                    printf("   |   ,             (???) |  |   ,             (???) |  |   ,             (???)\n");
                    printf("   |__,'`-..--|__|--''   |  |__,'`-..--|__|--''   |  |__,'`-..--|__|--''\n");
                    printf("                         +------------------------+\n");
                }
                else if (i == 2)
                {
                    printf("                                                  +------------------------+\n");
                    printf("        __,---.__                 __,---.__       |        __,---.__       |\n");
                    printf("     ,-'         `-.__         ,-'         `-.__  |     ,-'         `-.__  |\n");
                    printf("   &/           `._\\ _\\      &/           `._\\ _\\ |   &/           `._\\ _\\ |\n");
                    printf("   /               ''._      /               ''._ |   /               ''._ |\n");
                    printf("   |   ,             (???)    |   ,             (???) |  |   ,             (???) |\n");
                    printf("   |__,'`-..--|__|--''      |__,'`-..--|__|--''   |  |__,'`-..--|__|--''   |\n");
                    printf("                                                  +------------------------+\n");
                }
                c = getch();
                if (c == 75)
                {
                    i--;
                }
                else if (c == 77)
                {
                    i++;
                }
                if (i >= 3)
                {
                    i = 0;
                }
                else if (i < 0)
                {
                    i = 2;
                }
                system("cls");
                if ((Vida[i] == 0))
                {
                    printf("Esse inimigo j?? caiu no ch??o, ataque outra inimigo para vencer a batalha, qual sera o proximo?\n\n");
                    c = 0;
                }
            }
            c = 0;
            x = (rand() % 20) + 1;
            if (x >= 16)
            {
                Dano_Inim = (rand() % 10) + (rand() % 10) + (rand() % 10) + 9;
            }
            else
            {
                Dano_Inim = 0;
            }
            x = (rand() % 20) + 5;
            Dano = (rand() % Arma) + 5;
            if (x == 20)
            {
                Dano *= 2;
                *Sorte = *Sorte + 1;
            }
            else
            {
                if (x < 16)
                {
                    Dano = 0;
                    if (x == 4)
                    {
                        Dano_Inim *= 2;
                        *Azar = *Azar + 1;
                    }
                }
            }
            Vida[i] -= Dano;
            *Vida_Atual -= Dano_Inim;
            if (Vida[i] <= 0)
            {
                Vida[i] = 0;
                printf("Voce deixou o inimigo incapacitado.\n\n");
            }
            printf("Inimigo 1: %d Inimigo 2: %d Inimigo 3: %d\n\n", Vida[0], Vida[1], Vida[2]);
            if (Dano == 0)
            {
                printf("Voce errou o ataque.\n\n");
            }
            else if (Dano > 0)
            {
                printf("Voc?? causou dano igual a : %d no inimigo %d?? inimigo.\n\n", Dano, i + 1);
            }
            if (Dano_Inim == 0)
            {
                printf("O inimigo errou o ataque.\n\n");
            }
            else if (Dano_Inim > 0)
            {
                printf("O inimigo te acertar e causou um dano igual %d\n\n", Dano_Inim);
            }
            if (*Vida_Atual <= 0)
            {
                printf("O Proto te derrubou, assim voc?? derrubou sua arma e os javalis te devoraram ainda vivo.\n\n");
                *Vida_Atual = 0;
                break;
            }
        }
        i = 1;
        printf("O gosto da carne desses porcos foi uma das melhores refei????es que voc?? teve dentro de uma dungeon.\n");
        *Mal = *Mal + 2;
    }
    else if (i == 2)
    {
        printf("Voce passa no maior cuidado para que o grupo de porcos na sua frente n??o perceba que vc esteja ali.\n");
        *Neutro = *Neutro + 1;
    }
    else if (i == 3)
    {
        printf("Voce tira uma por????o de ra????o da mochila e d?? para os porcos na sua frente, eles se aproximam e devoram toda a ra????o que vc tinha.\n");
        printf("Quando eles terminaram de comer eles tomam formas de humanos e agradece por t??-los ajudado a escapar de sua maldi????o, pois quando fome sente porcos se tornam, assim explicou a chefe dos porcos.\n\n");
        *Bom = *Bom + 2;
    }
    Sleep(3000);
}

void Evento_Espada(int *Dano, int *Bem, int *Neutro, int *Mal) //Corrigir
{
    setlocale(LC_ALL, "Portuguese");
    int x = 1, y = 0, h = 1;
    while (h != 13)
    {
        printf("Voce encontra uma grande espada ?? mostra na parede, a espada tem uma aura m??gica que faz os olhos de qualquer pessoa brilhar.O que voc?? faz com a espada");
        if (x == 1)
        {
            printf("A espada ser?? ??til para me ajudar a completar a dungeon.\n");
        }
        else if (x == 2)
        {
            printf("Este ?? um artefato e ?? muito perigoso pegar itens espalhados pela dungeon.\n");
        }
        else if (x == 3)
        {
            printf("Um artefato numa dungeon pode ser consciente. Ola espada.\n");
        }
        h = getch();
        if (h == 75)
        {
            x--;
        }
        else if (h == 80)
        {
            x++;
        }
        if (x > 3)
        {
            x = 1;
        }
        else if (x < 1)
        {
            x = 3;
        }
        system("cls");
    }
    h = 0;
    if (x == 1)
    {
        printf("Quando voc?? pega a espada para voc?? um grande fluxo de energia percorre o seu corpo que empodera seu corpo dando uma confian??a maior no combate.\n");
        *Dano = *Dano + 4;
        *Mal = *Mal + 2;
    }
    else if (x == 2)
    {
        printf("Mesmo com o todo o brilho da espada e a atra????o que ela faz para voc?? n??o seguiu suas tenta????es e a deixou na parede.\n");
        *Neutro = *Neutro + 1;
    }
    else if (x == 3)
    {
        printf("Ola humano faz muito tempo que eu n vejo algu??m andando por esses locais o que vc quer mortal?");
        while (h != 13)
        {
            if (y == 1)
            {
                printf("Eu quero aprender mais sobre voc??.\n");
            }
            else if (y == 2)
            {
                printf("O que uma espada falante est?? fazendo aqui.\n");
            }
            else if (y == 3)
            {
                printf("Eu quero mais poder.\n");
            }
            h = getch();
            if (h == 75)
            {
                y--;
            }
            else if (h == 80)
            {
                y++;
            }
            if (y > 3)
            {
                y = 0;
            }
            else if (y < 0)
            {
                y = 3;
            }
            system("cls");
        }
        if (y == 1)
        {
            printf("Eu sou um ser que foi amaldi??oado com a forma de uma espada, tal maldi????o foi imposta pelo mestre dessa dungeon. Quando ele morrer serei libertado da pris??o e prometo que ajudarei com o que for necess??rio. Mas ainda n??o me use, apenas quando a maldi????o ser quebrada realmente seria ??til para voc??.\n");
            *Bem = *Bem + 2;
        }
        else if (y == 2)
        {
            printf("Fui presa aqui pelo l??der da dungeon, caso voc?? derrote o l??der deste local poder?? ser libertada dessa local. Se voc?? poder me ajudar ficarei feliz, mas vc n poder?? me usar pois se n??o ficarei nessa forma para todo o sempre.\n");
            *Bem = *Bem + 2;
        }
        else if (y == 3)
        {
            printf("Pensei que voc?? seria alguma coisa melhor que isso, me use e me aprisione nessa forma para sempre. Apenas uma dica o poder que voc?? busca vai ser uma grande maldi????o que vai te prender e te fazer mal quando voc?? menos esperar. EU tinha esperan??a quando voc?? falou comigo mas estava errada.\n");
            *Mal = *Mal + 3;
        }
    }
    Sleep(3000);
}

void Encontro_Zumbi(int *Sorte, int *Azar, int *Vida_Atual, int Vida_Total, int *Bom, int *Mal, int *Neutro, int Arma) //Corrigir
{
    setlocale(LC_ALL, "Portuguese");
    int x, i = 1, Vida[3], c, Dano, Dano_Inim, h, g = 1, Pegado;
    Vida[1] = 20;
    Vida[2] = 20;
    Vida[0] = 20;
    while (x != 13)
    {
        if (i == 1)
        {
            printf("Aparece um pequeno espa??o de fuga entre os zumbis.\n");
        }
        else if (i == 2)
        {
            printf("Esses seres deveriam estar mortos.\n");
        }
        x = getch();
        if (x == 72)
        {
            i--;
        }
        else if (x == 80)
        {
            i++;
        }
        if (i > 2)
        {
            i = 1;
        }
        else if (i < 1)
        {
            i = 2;
        }
        system("cls");
    }
    x = 0;
    if (i == 1)
    {
        printf("Vc se aproveita do pequeno espa??o de fuga e foge at?? que eles n??o estivessem mais ?? vista.\n");
        *Neutro = *Neutro + 1;
    }
    else if (i == 2)
    {
        i = 0;
        while ((Vida[0] > 0) || (Vida[1] > 0) || (Vida[2] > 0))
        {
            while (c != 13)
            {
                printf("Inimigo 1: %d Inimigo 2: %d Inimigo 3: %d\n\n", Vida[0], Vida[1], Vida[2]);
                printf("Sua vida: %d/%d\n\n", *Vida_Atual, Vida_Total);
                printf("Os 3 zumbis se encontram na frente qual dos 3 voc?? ataca? \n");
                if (i == 0)
                {
                    printf("+-----------------------------------+\n");
                    printf("|           _,.-------.,_           |           _,.-------.,_                       _,.-------.,_ \n");
                    printf("|       ,;~'             '~;,       |       ,;~'             '~;,               ,;~'             '~;, \n");
                    printf("|     ,;                     ;,     |     ,;                     ;,           ,;                     ;,\n");
                    printf("|    ;                         ;    |    ;                         ;         ;                         ;\n");
                    printf("|   ,'                         ',   |   ,'                         ',       ,'                         ',\n");
                    printf("|  ,;                           ;,  |  ,;                           ;,     ,;                           ;,   \n");
                    printf("|  ; ;      .           .      ; ;  |  ; ;      .           .      ; ;     ; ;      .           .      ; ;\n");
                    printf("|  | ;   ______       ______   ; |  |  | ;   ______       ______   ; |     | ;   ______       ______   ; |\n");
                    printf("|  |  `/~'     ~' . '~     '~\\'  |  |  |  `/~'     ~' . '~     '~\\'  |     |  `/~'     ~' . '~     '~\\'  |\n");
                    printf("|  |  ~  ,-~~~^~, | ,~^~~~-,  ~  |  |  |  ~  ,-~~~^~, | ,~^~~~-,  ~  |     |  ~  ,-~~~^~, | ,~^~~~-,  ~  |\n");
                    printf("|   |   |        }:{        |   |   |   |   |        }:{        |   |       |   |        }:{        |   |\n");
                    printf("|   |   l       / | \\       !   |   |   |   l       / | \\       !   |       |   l       / | \\       !   | \n");
                    printf("|   .~  (__,.--' .^. '--.,__)  ~.   |   .~  (__,.--' .^. '--.,__)  ~.       .~  (__,.--' .^. '--.,__)  ~.\n");
                    printf("|   |     ---;' / | \\ `;---     |   |   |     ---;' / | \\ `;---     |       |     ---;' / | \\ `;---     |\n");
                    printf("|    \\__.       \\/^\\/       .__/    |    \\__.       \\/^\\/       .__/         \\__.       \\/^\\/       .__/\n");
                    printf("|     V| \\                 / |V     |     V| \\                 / |V           V| \\                 / |V\n");
                    printf("|      | |T~\\___!___!___/~T| |      |      | |T~\\___!___!___/~T| |             | |T~\\___!___!___/~T| |\n");
                    printf("|      | |`IIII_I_I_I_IIII'| |      |      | |`IIII_I_I_I_IIII'| |             | |`IIII_I_I_I_IIII'| |\n");
                    printf("|      |  \\,III I I I III,/  |      |      |  \\,III I I I III,/  |             |  \\,III I I I III,/  |\n");
                    printf("|       \\   `~~~~~~~~~~'    /       |       \\   `~~~~~~~~~~'    /               \\   `~~~~~~~~~~'    /\n");
                    printf("|         \\   .       .   /         |         \\   .       .   /                   \\   .       .   /\n");
                    printf("|           \\.    ^    ./           |           \\.    ^    ./                       \\.    ^    ./\n");
                    printf("|             ^~~~^~~~^             |             ^~~~^~~~^                           ^~~~^~~~^\n");
                    printf("+-----------------------------------+\n");
                }
                else if (i == 1)
                {
                    printf("                                    +-----------------------------------+\n");
                    printf("            _,.-------.,_           |           _,.-------.,_           |           _,.-------.,_ \n");
                    printf("        ,;~'             '~;,       |       ,;~'             '~;,       |       ,;~'             '~;, \n");
                    printf("      ,;                     ;,     |     ,;                     ;,     |     ,;                     ;,\n");
                    printf("     ;                         ;    |    ;                         ;    |    ;                         ;\n");
                    printf("    ,'                         ',   |   ,'                         ',   |   ,'                         ',\n");
                    printf("   ,;                           ;,  |  ,;                           ;,  |  ,;                           ;,   \n");
                    printf("   ; ;      .           .      ; ;  |  ; ;      .           .      ; ;  |  ; ;      .           .      ; ;\n");
                    printf("   | ;   ______       ______   ; |  |  | ;   ______       ______   ; |  |  | ;   ______       ______   ; |\n");
                    printf("   |  `/~'     ~' . '~     '~\\'  |  |  |  `/~'     ~' . '~     '~\\'  |  |  |  `/~'     ~' . '~     '~\\'  |\n");
                    printf("   |  ~  ,-~~~^~, | ,~^~~~-,  ~  |  |  |  ~  ,-~~~^~, | ,~^~~~-,  ~  |  |  |  ~  ,-~~~^~, | ,~^~~~-,  ~  |\n");
                    printf("    |   |        }:{        |   |   |   |   |        }:{        |   |   |   |   |        }:{        |   |\n");
                    printf("    |   l       / | \\       !   |   |   |   l       / | \\       !   |   |   |   l       / | \\       !   | \n");
                    printf("    .~  (__,.--' .^. '--.,__)  ~.   |   .~  (__,.--' .^. '--.,__)  ~.   |   .~  (__,.--' .^. '--.,__)  ~.\n");
                    printf("    |     ---;' / | \\ `;---     |   |   |     ---;' / | \\ `;---     |   |   |     ---;' / | \\ `;---     |\n");
                    printf("     \\__.       \\/^\\/       .__/    |    \\__.       \\/^\\/       .__/    |    \\__.       \\/^\\/       .__/\n");
                    printf("      V| \\                 / |V     |     V| \\                 / |V     |     V| \\                 / |V\n");
                    printf("       | |T~\\___!___!___/~T| |      |      | |T~\\___!___!___/~T| |      |      | |T~\\___!___!___/~T| |\n");
                    printf("       | |`IIII_I_I_I_IIII'| |      |      | |`IIII_I_I_I_IIII'| |      |      | |`IIII_I_I_I_IIII'| |\n");
                    printf("       |  \\,III I I I III,/  |      |      |  \\,III I I I III,/  |      |      |  \\,III I I I III,/  |\n");
                    printf("        \\   `~~~~~~~~~~'    /       |       \\   `~~~~~~~~~~'    /       |       \\   `~~~~~~~~~~'    /\n");
                    printf("          \\   .       .   /         |         \\   .       .   /         |         \\   .       .   /\n");
                    printf("            \\.    ^    ./           |           \\.    ^    ./           |           \\.    ^    ./\n");
                    printf("              ^~~~^~~~^             |             ^~~~^~~~^             |             ^~~~^~~~^\n");
                    printf("                                    +-----------------------------------+\n");
                }
                else if (i == 2)
                {
                    printf("                                                                        +-----------------------------------+\n");
                    printf("            _,.-------.,_                       _,.-------.,_           |           _,.-------.,_           |\n");
                    printf("        ,;~'             '~;,               ,;~'             '~;,       |       ,;~'             '~;,       |\n");
                    printf("      ,;                     ;,           ,;                     ;,     |     ,;                     ;,     |\n");
                    printf("     ;                         ;         ;                         ;    |    ;                         ;    |\n");
                    printf("    ,'                         ',       ,'                         ',   |   ,'                         ',   |\n");
                    printf("   ,;                           ;,     ,;                           ;,  |  ,;                           ;,  |\n");
                    printf("   ; ;      .           .      ; ;     ; ;      .           .      ; ;  |  ; ;      .           .      ; ;  |\n");
                    printf("   | ;   ______       ______   ; |     | ;   ______       ______   ; |  |  | ;   ______       ______   ; |  |\n");
                    printf("   |  `/~'     ~' . '~     '~\\'  |     |  `/~'     ~' . '~     '~\\'  |  |  |  `/~'     ~' . '~     '~\\'  |  |\n");
                    printf("   |  ~  ,-~~~^~, | ,~^~~~-,  ~  |     |  ~  ,-~~~^~, | ,~^~~~-,  ~  |  |  |  ~  ,-~~~^~, | ,~^~~~-,  ~  |  |\n");
                    printf("    |   |        }:{        |   |       |   |        }:{        |   |   |   |   |        }:{        |   |   |\n");
                    printf("    |   l       / | \\       !   |       |   l       / | \\       !   |   |   |   l       / | \\       !   |   |\n");
                    printf("    .~  (__,.--' .^. '--.,__)  ~.       .~  (__,.--' .^. '--.,__)  ~.   |   .~  (__,.--' .^. '--.,__)  ~.   |\n");
                    printf("    |     ---;' / | \\ `;---     |       |     ---;' / | \\ `;---     |   |   |     ---;' / | \\ `;---     |   |\n");
                    printf("     \\__.       \\/^\\/       .__/         \\__.       \\/^\\/       .__/    |    \\__.       \\/^\\/       .__/    |\n");
                    printf("      V| \\                 / |V           V| \\                 / |V     |     V| \\                 / |V     |\n");
                    printf("       | |T~\\___!___!___/~T| |             | |T~\\___!___!___/~T| |      |      | |T~\\___!___!___/~T| |      |\n");
                    printf("       | |`IIII_I_I_I_IIII'| |             | |`IIII_I_I_I_IIII'| |      |      | |`IIII_I_I_I_IIII'| |      |\n");
                    printf("       |  \\,III I I I III,/  |             |  \\,III I I I III,/  |      |      |  \\,III I I I III,/  |      |\n");
                    printf("        \\   `~~~~~~~~~~'    /               \\   `~~~~~~~~~~'    /       |       \\   `~~~~~~~~~~'    /       |\n");
                    printf("          \\   .       .   /                   \\   .       .   /         |         \\   .       .   /         |\n");
                    printf("            \\.    ^    ./                       \\.    ^    ./           |           \\.    ^    ./           |\n");
                    printf("              ^~~~^~~~^                           ^~~~^~~~^             |             ^~~~^~~~^             |\n");
                    printf("                                                                        +-----------------------------------+\n");
                }
                c = getch();
                if (c == 75)
                {
                    i--;
                }
                else if (c == 77)
                {
                    i++;
                }
                if (i >= 3)
                {
                    i = 0;
                }
                else if (i < 0)
                {
                    i = 2;
                }
                system("cls");
                if ((Vida[i] == 0))
                {
                    printf("Esse inimigo j?? caiu no ch??o, ataque outra inimigo para vencer a batalha, qual sera o proximo?\n\n");
                    c = 0;
                }
            }
            c = 0;
            x = (rand() % 20) + 1;
            if (x >= 16)
            {
                Dano_Inim = (rand() % 6) + (rand() % 6) + (rand() % 6) + 3;
            }
            else
            {
                Dano_Inim = 0;
            }
            x = (rand() % 20) + 5;
            Dano = (rand() % Arma) + 5;
            if (x == 20)
            {
                Dano *= 2;
                *Sorte = *Sorte + 1;
            }
            else
            {
                if (x <= 15)
                {
                    Dano = 0;
                    if (x == 4)
                    {
                        Dano_Inim *= 2;
                        *Azar = *Azar + 1;
                    }
                }
            }
            Vida[i] -= Dano;
            *Vida_Atual -= Dano_Inim;
            if (Vida[i] <= 0)
            {
                x = (rand() % 20) + 1;
                if (x > 10)
                {
                    Vida[i] = 20;
                    printf("Quando vc deu o golpe no zumbi ele cai no ch??o, mas instantaneamente ele levanta.\n");
                }
                else
                {
                    Vida[i] = 0;
                    printf("Voce deixou o inimigo incapacitado.\n\n");
                }
            }
            printf("Inimigo 1: %d Inimigo 2: %d Inimigo 3: %d\n\n", Vida[0], Vida[1], Vida[2]);
            if (Dano == 0)
            {
                printf("Voce errou o ataque.\n\n");
            }
            else if (Dano > 0)
            {
                printf("Voc?? causou dano igual a : %d no inimigo %d?? inimigo.\n\n", Dano, i + 1);
            }
            if (Dano_Inim == 0)
            {
                printf("O inimigo errou o ataque.\n\n");
            }
            else if (Dano_Inim > 0)
            {
                printf("O inimigo te acertar e causou um dano igual %d\n\n", Dano_Inim);
            }
            if (*Vida_Atual <= 0)
            {
                printf("Os zumbis deram uma mordida em vc que acabou acarretando na sua morte.\n\n");
                *Vida_Atual = 0;
                break;
            }
        }
        i = 1;
        while ((Vida[0] == 0) && (Vida[1] == 0) && (Vida[2] == 0) && c != 13)
        {
            printf("Os inimigos est??o ?? sua frente ca??dos e desacordados, Voc?? quer mat?? los ou deix?? los assim?\n\n");
            if (i == 1)
            {
                printf("___  ___      _             \n");
                printf("|  \\/  |     | |            \n");
                printf("| .  . | __ _| |_ __ _ _ __ \n");
                printf("| |\\/| |/ _` | __/ _` | '__|\n");
                printf("| |  | | (_| | || (_| | |   \n");
                printf("\\_|  |_/\\__,_|\\__\\__,_|_|   \n");
            }
            else if (i == 2)
            {
                printf("______     _                \n");
                printf("|  _  \\   (_)               \n");
                printf("| | | |___ ___  ____ _ _ __ \n");
                printf("| | | / _ \\ \\ \\/ / _` | '__|\n");
                printf("| |/ /  __/ |>  < (_| | |   \n");
                printf("|___/ \\___|_/_/\\_\\__,_|_|   \n");
            }
            c = getch();
            if (c == 72)
            {
                i++;
            }
            if (c == 80)
            {
                i--;
            }
            if (i == 2 && c == 13)
            {
                *Mal = *Mal + 1;
            }
            else if (i == 1 && c == 13)
            {
                *Neutro = *Neutro + 1;
            }
            else if (i <= 0)
            {
                i = 2;
            }
            else if (i >= 3)
            {
                i = 1;
            }
            system("cls");
        }
    }
    Sleep(3000);
}

void Cocatriz_Descriativa(int *Vida_Atual, int *Bom, int *Mal, int *Neutro, int *Arma) //Corrigir
{
    int i = 1, x;
    while (x != 13)
    {
        printf("A galinha est?? na sua frente, o que vc faz?\n\n");
        if (i == 1)
        {
            printf("Sua fome bate e as galinhas parecem deliciosas.\n");
        }
        else if (i == 2)
        {
            printf("O Galo t?? no canto dele, n??o vou mexer com o bixo.\n");
        }
        else if (i == 3)
        {
            printf("Eu quero saber o por que de um galo estar no segundo andar.\n");
        }
        x = getch();
        if (x == 72)
        {
            i--;
        }
        else if (x == 80)
        {
            i++;
        }
        if (i < 1)
        {
            i = 3;
        }
        else if (i > 3)
        {
            i = 1;
        }
        system("cls");
    }
    if (i == 1)
    {
        printf("Vc mata as galinhas e o gosto da carne da galinha foi melhor do q vc se lembrava.\n");
        *Mal = *Mal + 1;
        *Arma = *Arma + 2;
    }
    else if (i == 2)
    {
        printf("Vc ignora as galinhas e elas nem percebem que vc estava por ali,e vc passa despercebido.\n");
        *Bom = *Bom + 1;
    }
    else if (i == 3)
    {
        printf("Quando voc?? se aproxima da galinha e suas vis??es se cruzam voc?? se transforma em uma est??tua de pedra.\n");
        *Vida_Atual = 0;
    }
    Sleep(3000);
}

void Crianca_Maldita(int *Vida, int *Bem, int *Mal, int *Neutro) //corrigir
{
    setlocale(LC_ALL, "Portuguese");
    int i = 1, x;
    while (x != 13)
    {
        printf("Voce encontra uma crian??a deitada na dungeon o que voc?? faz?\n");
        if (i == 1)
        {
            printf("Essa crian??a necessita de ajuda e nao tem mais ningu??m para fazer isso.\n");
        }
        else if (i == 2)
        {
            printf("Algu??m vai vir para ajud??-la.\n");
        }
        else if (i == 3)
        {
            printf("Isso est?? muito estranho, esse deve ser mais um monstro da dungeon.\n");
        }
        x = getch();
        if (x == 72)
        {
            i--;
        }
        else if (x == 80)
        {
            i++;
        }
        if (i > 3)
        {
            i = 1;
        }
        else if (i < 1)
        {
            i = 3;
        }
        system("cls");
    }
    if (i == 1)
    {
        printf("Voce se aproxima da crian??a quando ela se vira pra voc?? e pula no seu pesco??o chupando seu sangue e te matando.\n");
        *Bem = *Bem + 1;
        *Vida = 0;
    }
    else if (i == 2)
    {
        printf("Encontrar uma crian??a deitada em uma sala do segundo andar e muito estranho, por isso voc?? a ignora. Quando voc?? se afasta dela voc?? escuta ao longe 'Sua criatura inferior, sua ignor??ncia lhe garantiu mais um dia de vida.'\n");
        *Neutro = *Neutro + 1;
    }
    else if (i == 3)
    {
        printf("Voc?? v?? a crian??a deitada e a esfaqueia pelas costas, voc?? escuta um grito alto vindo da crian??a e ela se torna uma pilha de cinzas. Seu sangue frio por matar uma crian??a pelas costas e muito amedrontador.\n");
        *Mal = *Mal + 2;
    }
    Sleep(3000);
}

void Draugr_Anciao(int *Sorte, int *Azar, int *Vida_Atual, int Vida_Total, int *Bom, int *Mal, int *Neutro, int Arma) //Corrigir
{
    setlocale(LC_ALL, "Portuguese");
    *Vida_Atual = Vida_Total;
    int x, y = 0, i = 1, j, z, Dano = 0, Dano_Inim = 0, Ran;
    int t, p, n[3], l[4];
    n[0] = n[2] = 20;
    n[1] = 60;
    l[0] = l[1] = l[2] = l[3] = 20;
    while (x != 13)
    {
        printf("                            ,-.\n");
        printf("       ___,---.__          /'|`\\          __,---,___\n");
        printf("    ,-'    \\`    `-.____,-'  |  `-.____,-'    //    `-.\n");
        printf("  ,'        |           ~'\\     /`~           |        `.\n");
        printf(" /      ___//              `. ,'          ,  , \\___      \\\n");
        printf("|    ,-'   `-.__   _         |        ,    __,-'   `-.    |\n");
        printf("|   /          /\\_  `   .    |    ,      _/\\          \\   |\n");
        printf("\\  |           \\ \\`-.___ \\   |   / ___,-'/ /           |  /\n");
        printf(" \\  \\           | `._   `\\\\  |  //'   _,' |           /  /\n");
        printf("  `-.\\         /'  _ `---'' , . ``---' _  `\\         /,-'\n");
        printf("     ``       /     \\    ,='/ \\`=.    /     \\       ''\n");
        printf("             |__   /|\\_,--.,-.--,--._/|\\   __|\n");
        printf("             /  `./  \\\\`\\ |  |  | /,//' \\,'  \\\n");
        printf("            /   /     ||--+--|--+-/-|     \\   \\\n");
        printf("           |   |     /'\\_\\_\\ | /_/_/`\\     |   |\n");
        printf("            \\   \\__, \\_     `~'     _/ .__/   /\n");
        printf("             `-._,-'   `-._______,-'   `-._,-'\n");
        printf("O L??der da dungeon est?? na sua frente o q vc faz?\n\n");
        if (i == 1)
        {
            printf("Rei Draugr eu vim aqui para conversar com vc, eu preciso da sua ajuda.\n");
        }
        else if (i == 2)
        {
            printf("O Rosto esquel??tico na sua frente, seu instinto te mandou fugir o mais r??pido poss??vel.\n");
        }
        else if (i == 3)
        {
            printf("Voce saca sua arma e empunha na frente do Rei Draugr.\n");
        }
        x = getch();
        if (x == 72)
        {
            i--;
        }
        else if (x == 80)
        {
            i++;
        }
        if (i == 4)
        {
            i = 1;
        }
        else if (i == 0)
        {
            i = 3;
        }
        system("cls");
    }
    x = 0;
    if (i == 1)
    {
        while (x != 13)
        {
            printf("                            ,-.\n");
            printf("       ___,---.__          /'|`\\          __,---,___\n");
            printf("    ,-'    \\`    `-.____,-'  |  `-.____,-'    //    `-.\n");
            printf("  ,'        |           ~'\\     /`~           |        `.\n");
            printf(" /      ___//              `. ,'          ,  , \\___      \\\n");
            printf("|    ,-'   `-.__   _         |        ,    __,-'   `-.    |\n");
            printf("|   /          /\\_  `   .    |    ,      _/\\          \\   |\n");
            printf("\\  |           \\ \\`-.___ \\   |   / ___,-'/ /           |  /\n");
            printf(" \\  \\           | `._   `\\\\  |  //'   _,' |           /  /\n");
            printf("  `-.\\         /'  _ `---'' , . ``---' _  `\\         /,-'\n");
            printf("     ``       /     \\    ,='/ \\`=.    /     \\       ''\n");
            printf("             |__   /|\\_,--.,-.--,--._/|\\   __|\n");
            printf("             /  `./  \\\\`\\ |  |  | /,//' \\,'  \\\n");
            printf("            /   /     ||--+--|--+-/-|     \\   \\\n");
            printf("           |   |     /'\\_\\_\\ | /_/_/`\\     |   |\n");
            printf("            \\   \\__, \\_     `~'     _/ .__/   /\n");
            printf("             `-._,-'   `-._______,-'   `-._,-'\n");
            printf("Draugr: Sua criatura inferior o q vc quer com o meu local de descanso final? \n");
            if (y == 1)
            {
                printf("Eu vim aqui para destruir o mal que infesta a terra.\n");
            }
            else if (y == 2)
            {
                printf("Eu vim aqui para conversar.\n");
            }
            else if (y == 3)
            {
                printf("Eu vim atr??s dos tesouros que ficam nesse local\n");
            }
            x = getch();
            if (x == 72)
            {
                y++;
            }
            else if (x == 80)
            {
                y--;
            }
            if (y < 1)
            {
                y = 3;
            }
            else if (y > 3)
            {
                y = 1;
            }
            system("cls");
        }
        if (y == 1)
        {
            y = 1;
            x = 0;
            while (x != 13)
            {
                printf("                            ,-.\n");
                printf("       ___,---.__          /'|`\\          __,---,___\n");
                printf("    ,-'    \\`    `-.____,-'  |  `-.____,-'    //    `-.\n");
                printf("  ,'        |           ~'\\     /`~           |        `.\n");
                printf(" /      ___//              `. ,'          ,  , \\___      \\\n");
                printf("|    ,-'   `-.__   _         |        ,    __,-'   `-.    |\n");
                printf("|   /          /\\_  `   .    |    ,      _/\\          \\   |\n");
                printf("\\  |           \\ \\`-.___ \\   |   / ___,-'/ /           |  /\n");
                printf(" \\  \\           | `._   `\\\\  |  //'   _,' |           /  /\n");
                printf("  `-.\\         /'  _ `---'' , . ``---' _  `\\         /,-'\n");
                printf("     ``       /     \\    ,='/ \\`=.    /     \\       ''\n");
                printf("             |__   /|\\_,--.,-.--,--._/|\\   __|\n");
                printf("             /  `./  \\\\`\\ |  |  | /,//' \\,'  \\\n");
                printf("            /   /     ||--+--|--+-/-|     \\   \\\n");
                printf("           |   |     /'\\_\\_\\ | /_/_/`\\     |   |\n");
                printf("            \\   \\__, \\_     `~'     _/ .__/   /\n");
                printf("             `-._,-'   `-._______,-'   `-._,-'\n");
                printf("Draugr: Interessante Mortal, um ser honrado por aqui. Estou surpreso que tenho aguentado at?? aqui, mas voc?? n??o ficar?? vivo por muito mais tempo\n");
                if (y == 1)
                {
                    printf("Espere, eu n??o quero lutar contra voc??.\n");
                }
                else if (y == 2)
                {
                    printf("Seus conceitos s??o muito baixos para achar q eu morreria antes de te alcan??ar.\n");
                }
                else if (y == 3)
                {
                    printf("As lendas dizem que vc n gosta de matar mesmo sendo um morto vivo e pra me aproveitar disso eu quero sua.\n");
                }
                x = getch();
                if (x == 72)
                {
                    y++;
                }
                else if (x == 80)
                {
                    y--;
                }
                if (y <= 0)
                {
                    y = 3;
                }
                else if (y > 3)
                {
                    y = 1;
                }
                system("cls");
            }
            system("cls");
            if (y == 3)
            {
                y = 1;
                x = 0;
                while (x != 13)
                {

                    printf("                            ,-.\n");
                    printf("       ___,---.__          /'|`\\          __,---,___\n");
                    printf("    ,-'    \\`    `-.____,-'  |  `-.____,-'    //    `-.\n");
                    printf("  ,'        |           ~'\\     /`~           |        `.\n");
                    printf(" /      ___//              `. ,'          ,  , \\___      \\\n");
                    printf("|    ,-'   `-.__   _         |        ,    __,-'   `-.    |\n");
                    printf("|   /          /\\_  `   .    |    ,      _/\\          \\   |\n");
                    printf("\\  |           \\ \\`-.___ \\   |   / ___,-'/ /           |  /\n");
                    printf(" \\  \\           | `._   `\\\\  |  //'   _,' |           /  /\n");
                    printf("  `-.\\         /'  _ `---'' , . ``---' _  `\\         /,-'\n");
                    printf("     ``       /     \\    ,='/ \\`=.    /     \\       ''\n");
                    printf("             |__   /|\\_,--.,-.--,--._/|\\   __|\n");
                    printf("             /  `./  \\\\`\\ |  |  | /,//' \\,'  \\\n");
                    printf("            /   /     ||--+--|--+-/-|     \\   \\\n");
                    printf("           |   |     /'\\_\\_\\ | /_/_/`\\     |   |\n");
                    printf("            \\   \\__, \\_     `~'     _/ .__/   /\n");
                    printf("             `-._,-'   `-._______,-'   `-._,-'\n");
                    printf("Draugr: Que criatura interessante temos aqui, muito bem voc?? tem meu interesse no que vc quer minha ajuda?\n");
                    if (y == 1)
                    {
                        printf("Eu preciso da sua for??a emprestada, os males na superf??cie s??o muito grandes N??S precisamos da sua ajuda.\n");
                    }
                    else if (y == 2)
                    {
                        printf("Eu preciso do seu conhecimento, um lend??rio guerreiro que voltou a vida suas estrat??gias eram memor??veis se n??s trabalharmos juntos podemos passar por qualquer desafio.\n");
                    }
                    else if (y == 3)
                    {
                        printf("Eu vim aqui pra treinar, se vc me ajudar nisso ?? s?? isso que necessito.\n");
                    }
                    x = getch();
                    if (x == 72)
                    {
                        y++;
                    }
                    else if (x == 80)
                    {
                        y--;
                    }
                    if (y <= 0)
                    {
                        y = 3;
                    }
                    else if (y > 3)
                    {
                        y = 1;
                    }
                    system("cls");
                }
                if (y == 1)
                {
                    printf("Muito bem emprestarei minha for??a para vc mas se eu considerar que voc?? se desviou do caminho correto eu mesmo te tirarei a vida.\n");
                    *Neutro = *Neutro + 1;
                }
                else if (y == 2)
                {
                    printf("Eu irei te ensinar mas vc deve estar preparado que com esses conhecimentos voc?? sofrer?? mais que se aproveitar dele.\n");
                    *Mal = *Mal + 1;
                }
                else
                {
                    printf("HAHAHAHAHAAHA, RESPOSTA CORRETA, eu irei ensinar tudo que sei e minhas for??as ser??o tuas, mas saiba que o poder traz gan??ncia e a gan??ncia te afasta do caminho do her??i.\n");
                    *Bom = *Bom + 2;
                }
            }
            else
            {
                printf("Draugr:Voc?? realmente n??o se faz digno de ter chegado aqui.\n");
                i = 3;
            }
        }
        else
        {
            printf("Draugr: Muito bem mortal voc?? deveria se sentir envergonhado por ter vindo aqui com ideais t??o sup??rfluas,\n");
            i = 3;
        }
    }
    else if (i == 2)
    {
        printf("Quando o rosto cadav??rico do Rei draugr aparece na sua frente, voc?? sente um calor entre as pernas e o desespero cresce dentro de voc??.\n");
        printf("Isso fez com que vc largue suas armas e corresse para o andares superiores da dungeon e sair dela o mais r??pido poss??vel\n");
        *Neutro = *Neutro + 1;
    }

    else if (i == 3)
    {

        printf("            XX                                                        ,-.                                                       XX\n");
        printf("          XX  X                                  ___,---.__          /'|`\\          __,---,___                                 X  XX\n");
        printf("        XX     X                              ,-'    \\`    `-.____,-'  |  `-.____,-'    //    `-.                             X     XX\n");
        printf("   XXXXX     XX                             ,'        |           ~'\\     /`~           |        `.                            XX     XXXXX\n");
        printf("  X        XX%;;@                          /      ___//              `. ,'          ,  , \\___      \\                         @;;%XX        X\n");
        printf("  X       X  @%%;;@                       |    ,-'   `-.__   _         |        ,    __,-'   `-.    |                      @%%;;@  X       X\n");
        printf("  X      X     @%%;;@                     |   /          /\\_  `   .    |    ,      _/\\          \\   |                    @%%;;@     X      X\n");
        printf("   X    X        @%%;;@                   \\  |           \\ \\`-.___ \\   |   / ___,-'/ /           |  /                  @%%;;@        X    X\n");
        printf("    X   X          @%%;;@                  \\  \\           | `._   `\\  |  //'   _,' |           /  /                 @%%;;@          X   X\n");
        printf("     X  X            @%%;;@                 `-.\\         /'  _ `---'' , . ``---' _  `\\         /,-'                @%%;;@            X  X\n");
        printf("      XX X             @%%;;@                  ``       /     \\    ,='/ \\`=.    /     \\       ''                 @%%;;@             X XX\n");
        printf("        XXX              @%%;;@                        |__   /|\\_,--.,-.--,--._/|\\   __|                       @%%;;@              XXX\n");
        printf("                           @%%;;@                      /  `./  \\`\\ |  |  | /,//' \\,'  \\                     @%%;;@\n");
        printf("                             @%%;;@                   /   /     ||--+--|--+-/-|     \\   \\                  @%%;;@\n");
        printf("                               @%%;;@                |   |     /'\\_\\_\\ | /_/_/`\\     |   |               @%%;;@\n");
        printf("                                  @%%;;@              \\   \\__, \\_     `~'     _/ .__/   /              @%%;;@\n");
        printf("                                                       `-._,-'   `-._______,-'   `-._,-'                  \n");
        printf("Draugr: A sua coragem por sacar as suas em minha frente, isso ?? louv??vel mas infelizmente acarretar?? na sua morte.\n");
        z = 0;
        x = 0;
        Sleep(3000);
        while (n[1] != 0)
        {
            while (x != 13)
            {
                if (n[z] == 0)
                {
                    printf("Essa arma j?? caiu da m??o do rei Draugr.\n");
                }
                if (Dano != 0)
                {
                    printf("Voce acertou o ataque dando dano de %d no rei Draugr.\n", Dano);
                }
                else
                {
                    printf("Voce errou o ataque.\n");
                }
                if (Dano_Inim != 0)
                {
                    printf("O Rei Draugr te acertou e causou o dano de %d\n", Dano_Inim);
                }
                else
                {
                    printf("O Rei Draugr errou o ataque.\n");
                }
                printf("Sua vida: %d//%d\n\n", *Vida_Atual, Vida_Total);
                if (z == 0)
                {
                    printf("+----------------------------------------+\n");
                    printf("|           XX                           |                            ,-.                                                       XX\n");
                    printf("|         XX  X                          |       ___,---.__          /'|`\\          __,---,___                                 X  XX\n");
                    printf("|       XX     X                         |    ,-'    \\`    `-.____,-'  |  `-.____,-'    //    `-.                             X     XX\n");
                    printf("|  XXXXX     XX                          |  ,'        |           ~'\\     /`~           |        `.                            XX     XXXXX\n");
                    printf("| X        XX%%;;@                        | /      ___//              `. ,'          ,  , \\___      \\                         @;;%%XX        X\n");
                    printf("| X       X  @%%%%;;@                      ||    ,-'   `-.__   _         |        ,    __,-'   `-.    |                      @%%%%;;@  X       X\n");
                    printf("| X      X     @%%%%;;@                    ||   /          /\\_  `   .    |    ,      _/\\          \\   |                    @%%%%;;@     X      X\n");
                    printf("|  X    X        @%%%%;;@                  |\\  |           \\ \\`-.___ \\   |   / ___,-'/ /           |  /                  @%%%%;;@        X    X\n");
                    printf("|   X   X          @%%%%;;@                | \\  \\           | `._   `\\\\  |  //'   _,' |           /  /                 @%%%%;;@          X   X\n");
                    printf("|    X  X            @%%%%;;@              |  `-.\\         /'  _ `---'' , . ``---' _  `\\         /,-'                @%%%%;;@            X  X\n");
                    printf("|     XX X             @%%%%;;@            |     ``       /     \\    ,='/ \\`=.    /     \\       ''                 @%%%%;;@             X XX\n");
                    printf("|       XXX              @%%%%;;@          |             |__   /|\\_,--.,-.--,--._/|\\   __|                       @%%%%;;@              XXX\n");
                    printf("|                          @%%%%;;@        |             /  `./  \\\\`\\ |  |  | /,//' \\,'  \\                     @%%%%;;@\n");
                    printf("|                            @%%%%;;@      |            /   /     ||--+--|--+-/-|     \\   \\                  @%%%%;;@\n");
                    printf("|                              @%%%%;;@    |           |   |     /'\\_\\_\\ | /_/_/`\\     |   |               @%%%%;;@\n");
                    printf("|                                 @%%%%;;@ |            \\   \\__, \\_     `~'     _/ .__/   /              @%%%%;;@\n");
                    printf("|                                        |             `-._,-'   `-._______,-'   `-._,-'                  \n");
                    printf("+----------------------------------------+                                                                \n");
                }
                else if (z == 1)
                {
                    printf("                                         +-----------------------------------------------------------+                                         \n");
                    printf("            XX                           |                            ,-.                            |                          XX             \n");
                    printf("          XX  X                          |       ___,---.__          /'|`\\          __,---,___       |                         X  XX         \n");
                    printf("        XX     X                         |    ,-'    \\`    `-.____,-'  |  `-.____,-'    //    `-.    |                        X     XX       \n");
                    printf("   XXXXX     XX                          |  ,'        |           ~'\\     /`~           |        `.  |                         XX     XXXXX \n");
                    printf("  X        XX%%;;@                        | /      ___//              `. ,'          ,  , \\___      \\ |                       @;;%%XX        X\n");
                    printf("  X       X  @%%%%;;@                      ||    ,-'   `-.__   _         |        ,    __,-'   `-.    ||                     @%%%%;;@  X       X\n");
                    printf("  X      X     @%%%%;;@                    ||   /          /\\_  `   .    |    ,      _/\\          \\   ||                   @%%%%;;@     X      X\n");
                    printf("   X    X        @%%%%;;@                  |\\  |           \\ \\`-.___ \\   |   / ___,-'/ /           |  /|                 @%%%%;;@        X    X\n");
                    printf("    X   X          @%%%%;;@                | \\  \\           | `._   `\\\\  |  //'   _,' |           /  / |               @%%%%;;@          X   X\n");
                    printf("     X  X            @%%%%;;@              |  `-.\\         /'  _ `---'' , . ``---' _  `\\         /,-'  |             @%%%%;;@            X  X\n");
                    printf("      XX X             @%%%%;;@            |     ``       /     \\    ,='/ \\`=.    /     \\       ''     |           @%%%%;;@             X XX\n");
                    printf("        XXX              @%%%%;;@          |             |__   /|\\_,--.,-.--,--._/|\\   __|             |         @%%%%;;@              XXX\n");
                    printf("                           @%%%%;;@        |             /  `./  \\\\`\\ |  |  | /,//' \\,'  \\             |       @%%%%;;@\n");
                    printf("                             @%%%%;;@      |            /   /     ||--+--|--+-/-|     \\   \\            |     @%%%%;;@\n");
                    printf("                               @%%%%;;@    |           |   |     /'\\_\\_\\ | /_/_/`\\     |   |           |   @%%%%;;@\n");
                    printf("                                  @%%%%;;@ |            \\   \\__, \\_     `~'     _/ .__/   /            | @%%%%;;@\n");
                    printf("                                         |             `-._,-'   `-._______,-'   `-._,-'             |\n");
                    printf("                                         +-----------------------------------------------------------+\n");
                }
                else if (z == 2)
                {
                    printf("                                                                                                     +---------------------------------------+  \n");
                    printf("            XX                                                        ,-.                            |                          XX           | \n");
                    printf("          XX  X                                  ___,---.__          /'|`\\          __,---,___       |                         X  XX         |\n");
                    printf("        XX     X                              ,-'    \\`    `-.____,-'  |  `-.____,-'    //    `-.    |                        X     XX       |\n");
                    printf("   XXXXX     XX                             ,'        |           ~'\\     /`~           |        `.  |                         XX     XXXXX  |\n");
                    printf("  X        XX%%;;@                          /      ___//              `. ,'          ,  , \\___      \\ |                       @;;%%XX        X |\n");
                    printf("  X       X  @%%%%;;@                       |    ,-'   `-.__   _         |        ,    __,-'   `-.    ||                     @%%%%;;@  X       X |\n");
                    printf("  X      X     @%%%%;;@                     |   /          /\\_  `   .    |    ,      _/\\          \\   ||                   @%%%%;;@     X      X |\n");
                    printf("   X    X        @%%%%;;@                   \\  |           \\ \\`-.___ \\   |   / ___,-'/ /           |  /|                 @%%%%;;@        X    X  |\n");
                    printf("    X   X          @%%%%;;@                  \\  \\           | `._   `\\\\  |  //'   _,' |           /  / |               @%%%%;;@          X   X   | \n");
                    printf("     X  X            @%%%%;;@                 `-.\\         /'  _ `---'' , . ``---' _  `\\         /,-'  |             @%%%%;;@            X  X    | \n");
                    printf("      XX X             @%%%%;;@                  ``       /     \\    ,='/ \\`=.    /     \\       ''     |           @%%%%;;@             X XX     |\n");
                    printf("        XXX              @%%%%;;@                        |__   /|\\_,--.,-.--,--._/|\\   __|             |         @%%%%;;@              XXX       |  \n");
                    printf("                           @%%%%;;@                      /  `./  \\\\`\\ |  |  | /,//' \\,'  \\             |       @%%%%;;@                          | \n");
                    printf("                             @%%%%;;@                   /   /     ||--+--|--+-/-|     \\   \\            |     @%%%%;;@                            |      \n");
                    printf("                               @%%%%;;@                |   |     /'\\_\\_\\ | /_/_/`\\     |   |           |   @%%%%;;@                              | \n");
                    printf("                                  @%%%%;;@              \\   \\__, \\_     `~'     _/ .__/   /            | @%%%%;;@                                |\n");
                    printf("                                                       `-._,-'   `-._______,-'   `-._,-'             |                                       |\n");
                    printf("                                                                                                     +---------------------------------------+\n");
                }
                x = getch();
                if (x == 75)
                {
                    z--;
                }
                else if (x == 77)
                {
                    z++;
                }
                if (z < 0)
                {
                    z = 2;
                }
                else if (z > 2)
                {
                    z = 0;
                }
                system("cls");
            }
            Ran = rand() % 20 + 6;
            Dano = (rand() % Arma) + 5;
            if (n[z] <= 0)
            {
                n[z] = 0;
            }
            if (n[0] != 0 && n[2] != 0 && Ran >= 16)
            {
                Dano_Inim = (rand() % 12) + (rand() % 12) + 7;
            }
            else if ((n[0] == 0 || n[2] == 0) && Ran >= 16)
            {
                Dano_Inim = (rand() % 12) + 6;
            }
            else if (n[0] == 0 && n[2] == 0 && Ran >= 16)
            {
                Dano_Inim = (rand() % 8) + 6;
            }
            else if (Ran < 16)
            {
                Dano_Inim = 0;
            }
            if (Ran == 25)
            {
                Dano_Inim *= 2;
                *Azar = *Azar + 1;
            }
            else if (Ran == 6)
            {
                Dano *= 2;
                *Sorte = *Sorte + 1;
            }
            if (Dano_Inim != 0)
            {
                printf("O Rei Draugr te acertou causando dano de %d\n", Dano_Inim);
            }
            else
            {
                printf("O Rei Draugr errou o ataque.\n");
            }

            Ran = rand() % 20 + 5;
            if (z == 1 && n[0] != 0 && n[2] != 0)
            {
                printf("Ao tentar atacar o Rei Draugr seu ataque foi desviado.\n");
                Dano = 0;
            }
            else if (Ran < 18)
            {
                Dano = 0;
                printf("Voce errou o ataque.\n");
            }
            if (Ran == 24)
            {
                Dano *= 2;
                *Sorte = *Sorte + 1;
                printf("Voce acertou um Dano cr??tico no inimigo dando dano de %d.\n", Dano);
            }
            else if (Ran == 5)
            {
                Dano_Inim *= 2;
            }
            else if (Ran >= 19)
            {
                printf("Voce acertou o ataque dando dano de %d no rei Draugr.\n", Dano);
            }
            n[z] -= Dano;
            *Vida_Atual = *Vida_Atual - Dano_Inim;
            x = 0;
            system("cls");
            if (n[0] == 0 && n[2] == 0 && n[1] == 60)
            {
                printf("Draugr:Fazia anos que um mortal n??o sacava as minhas armas, HAHAHAHAHAH\n");
            }
        }
        x = z = 0;
        printf("                            ,-.\n");
        printf("       ___,---.__          /'|`\\          __,---,___\n");
        printf("    ,-'    \\`    `-.____,-'  |  `-.____,-'    //    `-.\n");
        printf("  ,'        |     /\\    ~'\\     /`~           |        `.\n");
        printf(" /      ___//     \\/  /--\\ `. ,'          ,  , \\___      \\\n");
        printf(" |    ,-'   `-.__   _ \\__/    |        ,    __,-'   `-.    |\n");
        printf(" |   /          /\\_  `   .    |    ^      _/\\          \\   |\n");
        printf(" \\  |           \\ \\`-.___ \\   |   /||__,-'/ /           |  /\n");
        printf("  \\  \\           | `._   `\\\\  |  //'   _,' |           /  /\n");
        printf("   `-.\\         /'  _ `---'' , . ``||-' _  `\\         /,-'\n");
        printf("      ``       /     \\    ,='/ \\`=.//   /     \\       ''\n");
        printf("              |__   /|\\_,--.,-.--,-v._/|\\   __|\n");
        printf("              /  `./  \\\\`\\ |  |  | /,//  \\,'  \\\n");
        printf("             /   /     ||--+--|--+-/-|     \\   \\ \n");
        printf("            |   |     /'\\_\\_\\ | /_/_/`\\     |   | \n");
        printf("             \\   \\__, \\_     `~'     _/  .__/   / \n");
        printf("              `-._,-'   `-._______,-'    `-._,-' \n");
        printf("Draugr: Haha, Fazia s??culos que um mortal me deixou t??o perto da morte. Mas essa n??o ser?? essa minha derrota, Chronos fa??a o meu tempo retornar antes desse combate.\n");
        Sleep(3000);
        while (l[0] != 0 || l[1] != 0 || l[2] != 0 || l[3] != 0)
        {
            while (x != 13)
            {
                if (l[z] == 0)
                {
                    printf("Esse sifre ja foi cortado tente o outo.\n");
                }
                if (Dano != 0)
                {
                    printf("Voce acertou o ataque dando dano de %d no rei Draugr.\n", Dano);
                }
                else
                {
                    printf("Voce errou o ataque.\n");
                }
                if (Dano_Inim != 0)
                {
                    printf("O Rei Draugr te acertou e causou o dano de %d\n", Dano_Inim);
                }
                else
                {
                    printf("O Rei Draugr errou o ataque.\n");
                }
                printf("Sua vida: %d//%d\n\n", *Vida_Atual, Vida_Total);
                if (z == 0)
                {
                    printf("+-----------+                 ,-.\n");
                    printf("|       ___,|---.__          /'|`\\          __,---,___\n");
                    printf("|    ,-'    |\\`    `-.____,-'  |  `-.____,-'    //    `-.\n");
                    printf("|  ,'       | |           ~'\\     /`~           |        `.\n");
                    printf("| /      ___|//              `. ,'          ,  , \\___      \\\n");
                    printf("||    ,-'   |`-.__   _         |        ,    __,-'   `-.    |\n");
                    printf("||   /      |    /\\_  `   .    |    ,      _/\\          \\   |\n");
                    printf("|\\  |       |    \\ \\`-.___ \\   |   / ___,-'/ /           |  /\n");
                    printf("| \\  \\      |     | `._   `\\\\  |  //'   _,' |           /  /\n");
                    printf("|  `-.\\     |    /'  _ `---'' , . ``---' _  `\\         /,-'\n");
                    printf("|     ``    |   /     \\    ,='/ \\`=.    /     \\       ''\n");
                    printf("+-----------+  |__   /|\\_,--.,-.--,--._/|\\   __|\n");
                    printf("              /  `./  \\\\`\\ |  |  | /,//' \\,'  \\\n");
                    printf("             /   /     ||--+--|--+-/-|     \\   \\\n");
                    printf("            |   |     /'\\_\\_\\ | /_/_/`\\     |   |\n");
                    printf("             \\   \\__, \\_     `~'     _/ .__/   /\n");
                    printf("              `-._,-'   `-._______,-'   `-._,-'\n");
                }
                else if (z == 1)
                {
                    printf("                             ,-.                 +-----------+\n");
                    printf("        ___,---.__          /'|`\\          __,---|,___       |\n");
                    printf("     ,-'    \\`    `-.____,-'  |  `-.____,-'    //|    `-.    |\n");
                    printf("   ,'        |           ~'\\     /`~           | |       `.  |\n");
                    printf("  /      ___//              `. ,'          ,  , \\|___      \\ |\n");
                    printf(" |    ,-'   `-.__   _         |        ,    __,-'|   `-.    ||\n");
                    printf(" |   /          /\\_  `   .    |    ,      _/\\    |     \\    ||\n");
                    printf(" \\  |           \\ \\`-.___ \\   |   / ___,-'/ /    |      |  / |\n");
                    printf("  \\  \\           | `._   `\\\\  |  //'   _,' |     |     /  /  |\n");
                    printf("   `-.\\         /'  _ `---'' , . ``---' _  `\\    |    /,-'   |\n");
                    printf("       ``       /     \\    ,='/ \\`=.    /     \\  |   ''      |\n");
                    printf("               |__   /|\\_,--.,-.--,--._/|\\   __| +-----------+\n");
                    printf("              /  `./  \\\\`\\ |  |  | /,//' \\,'  \\\n");
                    printf("             /   /     ||--+--|--+-/-|     \\   \\\n");
                    printf("            |   |     /'\\_\\_\\ | /_/_/`\\     |   |\n");
                    printf("             \\   \\__, \\_     `~'     _/ .__/   /\n");
                    printf("              `-._,-'   `-._______,-'   `-._,-'\n");
                }
                else if (z == 2)
                {
                    printf("                             ,-.\n");
                    printf("        ___,---.__          /'|`\\          __,---,___\n");
                    printf("     ,-'    \\`    `-.____,-'  |  `-.____,-'    //    `-.\n");
                    printf("   ,'        |           ~'\\     /`~           |        `.\n");
                    printf("  /      ___//              `. ,'          ,  , \\___      \\\n");
                    printf(" |    ,-'   `-.__   _         |        ,    __,-'   `-.    |\n");
                    printf(" |   /          /\\_  `   .    |    ,      _/\\          \\   |\n");
                    printf(" \\  |           \\ \\`-.___ \\   |   / ___,-'/ /           |  /\n");
                    printf("  \\  \\           | `._   `\\\\  |  //'   _,' |           /  /\n");
                    printf("   `-.\\         /'  _ `---'' , . ``---' _  `\\         /,-'\n");
                    printf("      ``       /     \\    ,='/ \\`=.    /     \\       ''\n");
                    printf("         +__|______/+|\\_,--.,-.--,--._/|\\   __|\n");
                    printf("         |   /  `./ | \\\\`\\ |  |  | /,//' \\,'  \\\n");
                    printf("         |  /   /   |  ||--+--|--+-/-|     \\   \\\n");
                    printf("         | |   |    | /'\\_\\_\\ | /_/_/`\\     |   |\n");
                    printf("         |  \\   \\__,| \\_     `~'     _/ .__/   /\n");
                    printf("         |   `-._,-'|   `-._______,-'   `-._,-'\n");
                    printf("         +----------+\n");
                }
                else if (z == 3)
                {
                    printf("                            ,-.\n");
                    printf("       ___,---.__          /'|`\\          __,---,___\n");
                    printf("    ,-'    \\`    `-.____,-'  |  `-.____,-'    //    `-.\n");
                    printf("  ,'        |           ~'\\     /`~           |        `.\n");
                    printf(" /      ___//              `. ,'          ,  , \\___      \\\n");
                    printf(" |    ,-'   `-.__   _         |        ,    __,-'   `-.    |\n");
                    printf(" |   /          /\\_  `   .    |    ,      _/\\          \\   |\n");
                    printf(" \\  |           \\ \\`-.___ \\   |   / ___,-'/ /           |  /\n");
                    printf("  \\  \\           | `._   `\\\\  |  //'   _,' |           /  /\n");
                    printf("   `-.\\         /'  _ `---'' , . ``---' _  `\\         /,-'\n");
                    printf("      ``       /     \\    ,='/ \\`=.    /     \\       ''\n");
                    printf("              |__   /|\\_,--.,-.--,--._/|\\   __|\n");
                    printf("              /  `./  \\\\`\\ |  |  | /,// +\\,'__\\___+\n");
                    printf("             /   /     ||--+--|--+-/-|  |  \\   \\  |\n");
                    printf("            |   |     /'\\_\\_\\ | /_/_/`\\ |   |   | |\n");
                    printf("             \\   \\__, \\_     `~'     _/ |.__/   / |\n");
                    printf("              `-._,-'   `-._______,-'   |`-._,-'  |\n");
                    printf("                                        +---------+\n");
                }
                if (z == 4 || z == -4)
                {
                    z = 0;
                }
                else if (z == 5 || z == -3)
                {
                    z = 1;
                }
                else if (z == 6 || z == -2)
                {
                    z = 2;
                }
                else if (z == 7 || z == -1)
                {
                    z = 3;
                }

                x = getch();
                if (x == 72)
                {
                    z -= 2;
                }
                else if (x == 80)
                {
                    z += 2;
                }
                else if (x == 75)
                {
                    z -= 1;
                }
                else if (x == 77)
                {
                    z += 1;
                }
            }
            Ran = rand() % 20 + 6;
            Dano = (rand() % Arma) + 5;
            if (n[z] <= 0)
            {
                n[z] = 0;
            }
            if (n[0] != 0 && n[2] != 0 && Ran >= 16)
            {
                Dano_Inim = (rand() % 12) + (rand() % 12) + 7;
            }
            else if ((n[0] == 0 || n[2] == 0) && Ran >= 16)
            {
                Dano_Inim = (rand() % 12) + 6;
            }
            else if (n[0] == 0 && n[2] == 0 && Ran >= 16)
            {
                Dano_Inim = (rand() % 8) + 6;
            }
            else if (Ran < 16)
            {
                Dano_Inim = 0;
            }
            if (Ran == 25)
            {
                Dano_Inim *= 2;
                *Azar = *Azar + 1;
            }
            else if (Ran == 6)
            {
                Dano *= 2;
                *Sorte = *Sorte + 1;
            }
            if (Dano_Inim != 0)
            {
                printf("O Rei Draugr te acertou causando dano de %d\n", Dano_Inim);
            }
            else
            {
                printf("O Rei Draugr errou o ataque.\n");
            }

            Ran = rand() % 20 + 5;
            if (z == 1 && n[0] != 0 && n[2] != 0)
            {
                printf("Ao tentar atacar o Rei Draugr seu ataque foi desviado.\n");
                Dano = 0;
            }
            else if (Ran < 18)
            {
                Dano = 0;
                printf("Voce errou o ataque.\n");
            }
            if (Ran == 24)
            {
                Dano *= 2;
                *Sorte = *Sorte + 1;
                printf("Voce ascertou um Dano critico no sifre do Rei Draugr, sendo igual a %d.\n", Dano);
            }
            else if (Ran == 5)
            {
                Dano_Inim *= 2;
            }
            else if (Ran >= 19)
            {
                printf("Voce acertou o ataque dando dano de %d ao sifre do rei Draugr.\n", Dano);
            }
            n[z] -= Dano;
            *Vida_Atual = *Vida_Atual - Dano_Inim;
            x = 0;
            system("cls");
        }
        printf("                             ,-.                 \n");
        printf("           ,---.__          /'|`\\          __,---,       \n");
        printf("            \\`    `-.____,-'  |  `-.____,-'    //        \n");
        printf("             |           ~'\\     /`~           |          \n");
        printf("            //              `. ,'          ,  , \\       \n");
        printf("            `-.__   _         |        ,    __,-'       \n");
        printf("                /\\_  `   .    |    ,      _/\\             |\n");
        printf("                \\ \\`-.___ \\   |   / ___,-'/ /            \n");
        printf("                 | `._   `\\\\  |  //'   _,' |             \n");
        printf("                 /'  _ `---'' , . ``---' _  `\\         \n");
        printf("                /     \\    ,='/ \\`=.    /     \\          \n");
        printf("               |__   /|\\_,--.,-.--,--._/|\\   __| \n");
        printf("                 `./  \\\\`\\ |  |  | /,//' \\,'  n");
        printf("                       ||--+--|--+-/-|        \n");
        printf("                      /'\\_\\_\\ | /_/_/`\\        \n");
        printf("                      \\_     `~'     _/    \n");
        printf("                        `-._______,-'   \n");
        printf("Draugr:MUAHAHAHAHHAHAHAHAHAH, j?? faz muitos mil??nios que algu??m n??o cortava meus chifres, foi memor??vel sua honra em combate.\n");
        printf("Draugr:Sua honra me fez querer lutar para valer veja minha verdadeira forma de combate.\n");
        printf("          .                                                      .\n");
        printf("        .n                   .                 .                  n.\n");
        printf("  .   .dP                  dP                   9b                 9b.    .\n");
        printf(" 4    qXb         .       dX                     Xb       .        dXp     t\n");
        printf("dX.    9Xb      .dXb    __                         __    dXb.     dXP     .Xb\n");
        printf("9XXb._       _.dXXXXb dXXXXbo.                 .odXXXXb dXXXXb._       _.dXXP\n");
        printf(" 9XXXXXXXXXXXXXXXXXXXVXXXXXXXXOo.           .oOXXXXXXXXVXXXXXXXXXXXXXXXXXXXP\n");
        printf("  `9XXXXXXXXXXXXXXXXXXXXX'~   ~`OOO8b   d8OOO'~   ~`XXXXXXXXXXXXXXXXXXXXXP'\n");
        printf("    `9XXXXXXXXXXXP' `9XX'   DIE    `98v8P'  MORTAL  `XXP' `9XXXXXXXXXXXP'\n");
        printf("        ~~~~~~~       9X.          .db|db.          .XP       ~~~~~~~\n");
        printf("                        )b.  .dbo.dP'`v'`9b.odb.  .dX(\n");
        printf("                      ,dXXXXXXXXXXXb     dXXXXXXXXXXXb.\n");
        printf("                     dXXXXXXXXXXXP'   .   `9XXXXXXXXXXXb\n");
        printf("                    dXXXXXXXXXXXXb   d|b   dXXXXXXXXXXXXb\n");
        printf("                    9XXb'   `XXXXXb.dX|Xb.dXXXXX'   `dXXP\n");
        printf("                     `'      9XXXXXX(   )XXXXXXP      `'\n");
        printf("                              XXXX X.`v'.X XXXX\n");
        printf("                              XP^X'`b   d'`X^XX\n");
        printf("                              X. 9  `   '  P )X\n");
        printf("                              `b  `       '  d'\n");
        printf("                               `             '\n");
        printf("Draugr: Preparado para a ??ltima fase do combate?\n");
        printf("Uma terceira forma ja n e exagerado?");
        printf("Draugr:Vc j?? cansou na minha terceira forma, eu ainda tenho tantas formas quanto os segundos do dia.\n");
        printf("Voc?? n??o cansa de tanto mudar e lutar?\n");
        printf("Draugr:Se vc desistir do combate eu te conto.\n");
        x = 0;
        z = 0;
        while (x != 13)
        {
            if (z == 0)
            {
                printf("Se o que voc?? fala ?? verdade.\n");
            }
            else if (z == 1)
            {
                printf("eu nunca irei desistir desse combate.\n");
            }
            if (z > 1)
            {
                z = 0;
            }
            else if (z < 0)
            {
                z = 1;
            }
            x = getch();
            if (x == 72)
            {
                z--;
            }
            else if (x == 80)
            {
                z++;
            }
        }
        if (z == 1)
        {
            printf("Draugr:Muito bem abrace sua morte\n");
            printf("Quando o Rei Draugr termina sua frase, uma luz se forma em sua boca e um raio sai de sua boca e desintegra tudo na sua frente.\n");
            *Vida_Atual = 0;
        }
        else if (z == 0)
        {
            printf("Draugr: Muito bem, a cada transforma????o eu canso mais e minha motiva????o do combate tamb??m diminui.\n");
            printf("Draugr: Mas muito bem com essa sua honra de desistir de um combate pelo pedido de um inimigo q n queria mais lutar eu ofere??o toda a ajuda necess??ria para voc??.");
            *Mal = *Mal + 1;
        }
    }
    Sleep(3000);
}

void Tesouro_Infinito(int *Bem, int *Mal, int *Neutro) //corrigir
{
    setlocale(LC_ALL, "Portuguese");
    int i = 1, x = 0;
    while (x != 13)
    {
        printf("Ao observar os tesouros o que vc faz?\n");
        printf("*******************************************************************************\n");
        printf("          |                   |                  |                     |\n");
        printf(" _________|________________.=??????_;=.______________|_____________________|_______\n");
        printf("|                   |  ,-???_,=??????     `???=.|                  |\n");
        printf("|___________________|__???=._o`???-._        `???=.______________|___________________\n");
        printf("          |                `???=._o`???=._      _`???=._                     |\n");
        printf(" _________|_____________________:=._o ???=._.???_.-=???'???=.__________________|_______\n");
        printf("|                   |    __.--??? , ; `???=._o.??? ,-?????????-._ ???.   |\n");
        printf("|___________________|_._???  ,. .` ` `` ,  `???-._???-._   ???. '__|___________________\n");
        printf("          |           |o`???=._` , ???` `; .???. ,  ???-._???-._; ;              |\n");
        printf(" _________|___________| ;`-.o`???=._; .??? ` '`.???\\` . ???-._ /_______________|_______\n");
        printf("|                   | |o;    `???-.o`???=._``  '` ??? ,__.--o;   |\n");
        printf("|___________________|_| ;     (#) `-.o `???=.`_.--???_o.-; ;___|___________________\n");
        printf("____/______/______/___|o;._    ???      `???.o|o_.--???    ;o;____/______/______/____\n");
        printf("/______/______/______/_???=._o--._        ; | ;        ; ;/______/______/______/_\n");
        printf("____/______/______/______/__???=._o--._   ;o|o;     _._;o;____/______/______/____\n");
        printf("/______/______/______/______/____???=._o._; | ;_.--???o.--???_/______/______/______/_\n");
        printf("____/______/______/______/______/_____???=.o|o_.--??????___/______/______/______/____\n");
        printf("/______/______/______/______/______/______/______/______/______/______/______/_\n");
        printf("*******************************************************************************\n\n");
        if (i == 1)
        {
            printf("Pegar todos os tesouros.\n");
        }
        else if (i == 2)
        {
            printf("A hist??ria vale mais que dinheiro.\n");
        }
        else if (i == 3)
        {
            printf("S?? quero sair dessa jossa.\n");
        }
        x = getch();
        if (x == 72)
        {
            i--;
        }
        else if (x == 80)
        {
            i++;
        }
        if (i > 3)
        {
            i = 1;
        }
        else if (i < 1)
        {
            i = 3;
        }
        system("cls");
    }

    if (i == 1)
    {
        printf("A cegueira f??sica moment??nea que se derivou do brilho das moedas foi substitu??do por uma cegueira psicol??gica da sua gan??ncia.\n");
        printf("Que faz com que pegue tudo o que voc?? consegue carregar e ainda mais, assim voc?? se direciona para o portal com todo o tesouro,\n");
        printf("Com todo o tesouro que vc pegou em uma vida seria imposs??vel gastar tudo.\n");
        *Mal = *Mal + 1;
    }
    else if (i == 2)
    {
        printf("Quando sua chegada moment??nea passou voc?? percebe que as paredes est??o lotadas de tesouros hist??ricos, o mais prontamente voc?? as pega e guarda em seguran??a.\n");
        printf("Ao sair da dungeon voc?? leva os tesouros a um centro de historiadores que te entregam uma pequena por????o de moedas.\n");
        *Bem = *Bem + 1;
    }
    else if (i == 3)
    {
        printf("Ao entrar na sala por um breve momento voc?? viu um pequeno andar que parecia ser especial.\n");
        printf("Quando lhe aconteceu a cegueira vc correu para o andar e quando se deu de si estava fora da dungeon. Os outros aventureiros falaram que vc foi um dos primeiros que sa??ram da dungeon por uma magia de portal pelo menos vivo.\n");
        *Neutro = *Neutro + 1;
    }
    Sleep(3000);
}

void Portal(int *Bem, int *Mal, int *Neutro) //Corrigir
{
    setlocale(LC_ALL, "Portuguese");
    int i = 1, x;
    while (x != 13)
    {
        printf("A entrada da dungeon est?? na sua frente o que vc faz? \n\n");
        if (i == 1)
        {
            printf("A porta da dungeon chama para sua entrada novamente.\n");
        }
        if (i == 2)
        {
            printf("As mem??rias da sua antiga vida te trazem vontade de retornar para ela.\n");
        }
        if (i == 3)
        {
            printf("A dungeon deu seus proveitos o suficiente para viver os seus prazeres.\n");
        }
        x = getch();
        if (x == 72)
        {
            i--;
        }
        else if (x == 80)
        {
            i++;
        }
        if (i > 3)
        {
            i = 1;
        }
        else if (i < 1)
        {
            i = 3;
        }
        system("cls");
    }
    if (i == 1)
    {
        printf("A sua vontade de descobrir tudo que tinha por tr??s da dungeon te fez encarar todos os medos cicatrizes e feridas que vc sofreu la dentro, vc avan??a para o interior da dungeon.\n\n");
        printf("Outros aventureiros tentam te segurar mas voc?? avan??a em dire????o a dungeon escura como se nada te impedisse.\n\n");
        *Bem = *Bem + 1;
    }
    else if (i == 2)
    {
        printf("Os proveitos da dungeon n??o foram o suficiente para te fazer continuar a p??r sua vida em risco.\n");
        printf("As mem??rias da sua antiga vida trouxeram o sua vontade de retorno e se afastar da dungeon.\n\n");
        *Neutro = *Neutro + 1;
    }
    else if (i == 3)
    {
        printf("Com todos os ganhos que vc conseguiu cresceu sua gan??ncia, orgulho e desejos. Esse crescimento fez com que sua vontade de se aventurar diminui-se ao ponto que apenas a vontade de seguir todos os seus desejos.\n\n");
    }
    Sleep(3000);
}

void Tesouro_Encon(int *Vida_Total, int *Vida_Atual, int *Dano, int x) //corrigir
{
    setlocale(LC_ALL, "Portuguese");
    int i, j = 0;
    while (i != 13)
    {
        printf("Grandes tesouros podem ser encontrados dentro de dungeon, o que vc faz?\n");
        printf("                    ____...------------...____\n");
        printf("               _.-???` /o/__ ____ __ __  __ \\o\\_`???-._\n");
        printf("             .'     / /                    \\ \\     '.\n");
        printf("             |=====/o/======================\\o\\=====|\n");
        printf("             |____/_/________..____..________\\_\\____|\n");
        printf("             /   _/ \\_     <_o#\\__/#o_>     _/ \\_   \\\n");
        printf("             \v_________\\###/__________\\###/_________/\n");
        printf("              |===\\!/========================\\!/===|\n");
        printf("              |   |=|          .---.         |=|   |\n");
        printf("              |===|o|=========/     \\========|o|===|\n");
        printf("              |   | |         \\() ()/        | |   |\n");
        printf("              |===|o|======{'-.) A (.-'}=====|o|===|\n");
        printf("              | __/ \\__     '-.\\uuu/.-'    __/ \\__ |\n");
        printf("              |====          .'.'^'.'.         ====|\n");
        printf("              |  _\\o/   __  {.' __  '.} _   _\\o/  _|\n");
        printf("              `????????????-??????????????????????????????????????????????????????????????????????????????-????????????`\n");
        if (j == 0)
        {
            printf("Abrir o ba??.\n");
        }
        else if (j == 1)
        {
            printf("Ignorar o ba??.\n");
        }
        i = getch();
        if (i == 72)
        {
            j--;
        }
        else if (i == 80)
        {
            j++;
        }
        if (j > 1)
        {
            j = 0;
        }
        else if (j < 0)
        {
            j = 1;
        }
        system("cls");
    }
    printf("                    ____...------------...____\n");
    printf("               _.-???` /o/__ ____ __ __  __ \\o\\_`???-._\n");
    printf("             .'     / /                    \\ \\     '.\n");
    printf("             |=====/o/======================\\o\\=====|\n");
    printf("             |____/_/________..____..________\\_\\____|\n");
    printf("             /   _/ \\_     <_o#\\__/#o_>     _/ \\_   \\\n");
    printf("             \v_________\\###/__________\\###/_________/\n");
    printf("              |===\\!/========================\\!/===|\n");
    printf("              |   |=|          .---.         |=|   |\n");
    printf("              |===|o|=========/     \\========|o|===|\n");
    printf("              |   | |         \\() ()/        | |   |\n");
    printf("              |===|o|======{'-.) A (.-'}=====|o|===|\n");
    printf("              | __/ \\__     '-.\\uuu/.-'    __/ \\__ |\n");
    printf("              |====          .'.'^'.'.         ====|\n");
    printf("              |  _\\o/   __  {.' __  '.} _   _\\o/  _|\n");
    printf("              `????????????-??????????????????????????????????????????????????????????????????????????????-????????????`\n\n");
    if (x == 0)
    {
        printf("Dentro do ba?? voc?? encontra um amuleto. Voc?? reconhece o Amuleto como um amuleto de vitalidade.\n");
        *Vida_Atual = (*Vida_Atual) * 2;
        *Vida_Total = (*Vida_Total) * 2;
    }
    else if (x == 1)
    {
        printf("Dentro do ba?? voc?? encontra um anel de prata. Voc?? reconhece que o anel quando usado aumenta a for??a de sua arma.\n");
        *Dano = *Dano + 4;
    }
    else if (x == 2)
    {
        printf("Dentro do ba?? vc encontra um anel de ouro. Voc?? reconhece q o anel quando usado aumenta a for??a e vitalidade do usu??rio.\n");
        *Dano = *Dano + 2;
        *Vida_Atual = (*Vida_Atual) + (*Vida_Atual) / 2;
        *Vida_Total = (*Vida_Total) + (*Vida_Total) / 2;
    }
    else if (x == 3)
    {
        printf("Quando vc abre o ba?? ele morde sua m??o e arranca um de seus dedos.\n");
        *Vida_Atual = *Vida_Atual - ((rand() % 10) + 6);
    }
    Sleep(3000);
}
