#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#define true 1
#define false 0

//Controle do loop do jogo
int jogo, instrucoes, creditos, sobre, tela_inicial = true;

//Controle do loop enquanto ovo
int ovo = true;

//Stauts do Asciigotchi
int level_monstro = 64, xp_monstro = 0;
int fome = 10, felicidade = 10, higiene = 10;
char nome[25];

//Controle das animaçôes e andamento do jogo
int tempo = 0, acao, inicio, random_status, random_move;
int voltar2, voltar3, voltar4;

//Função de Carregando
int carregando()
{
    printf("\n           CARREGANDO.\n");
    sleep(1);
    system("clear");
    printf("\n           CARREGANDO..\n");
    sleep(1);
    system("clear");
    printf("\n           CARREGANDO...\n");
    sleep(1);
    system("clear");
    printf("\n           CARREGANDO..\n");
    sleep(1);
    system("clear");
    printf("\n           CARREGANDO.\n");
    sleep(1);
    system("clear");
    return 0;
}

//Função ovo
int egg()
{
    while (ovo == true)
    {
        printf("\n\
                ####################################\n\
                # Nome: %-25s  #\n\
                # Tempo de gestação: %-4i          #\n\
                # Fome:%-2i Felicidade:%-2i Higiene:%-2i #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n", nome, tempo, fome, felicidade, higiene, level_monstro, level_monstro, level_monstro, level_monstro);
                tempo++;
                sleep(1);
                system("clear");
        if (tempo == 9)
        {
            printf("\n\
                ####################################\n\
                #                                  #\n\
                #               !!!!               #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                ####################################\n", level_monstro, level_monstro, level_monstro, level_monstro);
            sleep(1);
            system("clear");
                    
            printf("\n\
                ####################################\n\
                #                                  #\n\
                #          Está nascendo !         #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                #                                  #\n\
                ####################################\n", level_monstro, level_monstro, level_monstro, level_monstro);
            sleep(1);
            system("clear");

            printf("\n\
                ####################################\n\
                #                                  #\n\
                #          Está nascendo !         #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                #                                  #\n\
                #                                  #\n\
                ####################################\n", level_monstro, level_monstro, level_monstro, level_monstro);
            sleep(1);
            system("clear");

            printf("\n\
                ####################################\n\
                #                                  #\n\
                #          Está nascendo !         #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                ####################################\n", level_monstro, level_monstro, level_monstro, level_monstro);   
            sleep(1);
            system("clear");

            printf("\n\
                ####################################\n\
                #                                  #\n\
                #                                  #\n\
                #              %c    %c              #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                #              %c    %c              #\n\
                #                                  #\n\
                #                                  #\n\
                ####################################\n", level_monstro, level_monstro, level_monstro+1, level_monstro+1, level_monstro+1, level_monstro+1, level_monstro, level_monstro);   
            sleep(1);
            system("clear");

            printf("\n\
                ####################################\n\
                #                                  #\n\
                #              Nasceu !            #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                ####################################\n", level_monstro+1, level_monstro+1, level_monstro+1, level_monstro+1);   
            sleep(1);
            system("clear");

            printf("\n\
                ####################################\n\
                #                                  #\n\
                #              Nasceu !            #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                #                                  #\n\
                #                                  #\n\
                ####################################\n", level_monstro+1, level_monstro+1, level_monstro+1, level_monstro+1);
            sleep(1);
            system("clear");

            printf("\n\
                ####################################\n\
                #                                  #\n\
                #              Nasceu !            #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                #                                  #\n\
                ####################################\n", level_monstro+1, level_monstro+1, level_monstro+1, level_monstro+1);
            sleep(1);
            system("clear");

            printf("\n\
                ####################################\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                ####################################\n", level_monstro+1, level_monstro+1, level_monstro+1, level_monstro+1);
            sleep(1);
            system("clear");

            level_monstro++;
            xp_monstro = 0;
            tempo = 0;
            ovo = false;
        }
    }
    return 0;    
}

//Função de movimento
int movimento()
{
    if ( (tempo%2 == 0)&&(jogo == true) ) //animação de movimento 1 (tempo par)
    {
        printf("\n\
                ####################################\n\
                # Nome: %-25s  #\n\
                # Tempo de vida: %-4i              #\n\
                # Fome:%-2i Felicidade:%-2i Higiene:%-2i #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n", nome, tempo, fome, felicidade, higiene, level_monstro, level_monstro, level_monstro, level_monstro);
        
            sleep(1);
            system("clear");
    }
    else if ( ((tempo+1)%2 == 0)&&(jogo == true) ) //animação de movimento 2 (tempo impar)
    {
        srand(time(NULL));
        random_move = rand() % 8;

        switch (random_move)
        {   
            case 0: 
                printf("\n\
                ####################################\n\
                # Nome: %-25s  #\n\
                # Tempo de vida: %-4i              #\n\
                # Fome:%-2i Felicidade:%-2i Higiene:%-2i #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                 %c%c               #\n\
                #                 %c%c               #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n", nome, tempo, fome, felicidade, higiene, level_monstro, level_monstro, level_monstro, level_monstro);       
                
                sleep(1);
                system("clear");

                break;

            case 1:
                printf("\n\
                ####################################\n\
                # Nome: %-25s  #\n\
                # Tempo de vida: %-4i              #\n\
                # Fome:%-2i Felicidade:%-2i Higiene:%-2i #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #               %c%c                 #\n\
                #               %c%c                 #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n", nome, tempo, fome, felicidade, higiene, level_monstro, level_monstro, level_monstro, level_monstro);
                
                sleep(1);
                system("clear");

                break;

            case 2: 
                printf("\n\
                ####################################\n\
                # Nome: %-25s  #\n\
                # Tempo de vida: %-4i              #\n\
                # Fome:%-2i Felicidade:%-2i Higiene:%-2i #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                 %c%c               #\n\
                #                 %c%c               #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n", nome, tempo, fome, felicidade, higiene, level_monstro, level_monstro, level_monstro, level_monstro);       
                
                sleep(1);
                system("clear");

                break;

            case 3:
                printf("\n\
                ####################################\n\
                # Nome: %-25s  #\n\
                # Tempo de vida: %-4i              #\n\
                # Fome:%-2i Felicidade:%-2i Higiene:%-2i #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #               %c%c                 #\n\
                #               %c%c                 #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n", nome, tempo, fome, felicidade, higiene, level_monstro, level_monstro, level_monstro, level_monstro);
                
                sleep(1);
                system("clear");

                break;

            case 4: 
                printf("\n\
                ####################################\n\
                # Nome: %-25s  #\n\
                # Tempo de vida: %-4i              #\n\
                # Fome:%-2i Felicidade:%-2i Higiene:%-2i #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                 %c%c               #\n\
                #                 %c%c               #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n", nome, tempo, fome, felicidade, higiene, level_monstro, level_monstro, level_monstro, level_monstro);       
                
                sleep(1);
                system("clear");

                break;

            case 5:
                printf("\n\
                ####################################\n\
                # Nome: %-25s  #\n\
                # Tempo de vida: %-4i              #\n\
                # Fome:%-2i Felicidade:%-2i Higiene:%-2i #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #               %c%c                 #\n\
                #               %c%c                 #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n", nome, tempo, fome, felicidade, higiene, level_monstro, level_monstro, level_monstro, level_monstro);
                
                sleep(1);
                system("clear");

                break;

            case 6: 
                printf("\n\
                ####################################\n\
                # Nome: %-25s  #\n\
                # Tempo de vida: %-4i              #\n\
                # Fome:%-2i Felicidade:%-2i Higiene:%-2i #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                 %c%c               #\n\
                #                 %c%c               #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n", nome, tempo, fome, felicidade, higiene, level_monstro, level_monstro, level_monstro, level_monstro);       
                
                sleep(1);
                system("clear");

                break;

            case 7:
                printf("\n\
                ####################################\n\
                # Nome: %-25s  #\n\
                # Tempo de vida: %-4i              #\n\
                # Fome:%-2i Felicidade:%-2i Higiene:%-2i #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #               %c%c                 #\n\
                #               %c%c                 #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n", nome, tempo, fome, felicidade, higiene, level_monstro, level_monstro, level_monstro, level_monstro);
                
                sleep(1);
                system("clear");

                break;
        }      
    }
    return 0;
}

//Função de mudança de status e morte se for o caso
int mudanca_status()
{
    if ((tempo%5 == 0)&&(tempo != 0)&&(jogo == true)) 
    {
        srand(time(NULL));
        random_status = rand() % 6;

        switch (random_status) 
        {
            case 0:
                fome++;

                if (fome>=15) //animação de morte
                {
                    printf("\n\
                ####################################\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                ####################################\n", level_monstro, level_monstro, level_monstro, level_monstro);   
                    sleep(1);
                    system("clear");

                    printf("\n\
                ####################################\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c                 #\n\
                #                %c                 #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                ####################################\n", level_monstro, level_monstro);   
                    sleep(1);
                    system("clear");

                    printf("\n\
                ####################################\n\
                #                                  #\n\
                #                                  #\n\
                #              _____               #\n\
                #             /     \\              #\n\
                #            /       \\             #\n\
                #            |  RIP  |             #\n\
                #            |       |             #\n\
                #            |       |             #\n\
                ####################################\n");

                    printf("\n\
                %s morreu de fome! :(\n", nome);
                    jogo = false;
                }
                break;

            case 1:
                felicidade--;

                if (felicidade<=0) //animação de morte
                {
                    printf("\n\
                ####################################\n\
                #                                  #\n\
                #                   :(             #\n\
                #                  /               #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                ####################################\n\
                ", level_monstro, level_monstro, level_monstro, level_monstro);   
                    sleep(1);
                    system("clear");

                    printf("\n\
                Algum tempo depois...\n");
                    sleep(1);
                    printf("\n\
                BANG!\n");
                    sleep(1);
                    system("clear");

                    printf("\n\
                ####################################\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #       %c     %c      %c     %c       #\n\
                ####################################\n\
                ", level_monstro, level_monstro, level_monstro, level_monstro);   
                    sleep(1);
                    system("clear");

                    printf("\n\
                ####################################\n\
                #                                  #\n\
                #                                  #\n\
                #              _____               #\n\
                #             /     \\              #\n\
                #            /       \\             #\n\
                #            |  RIP  |             #\n\
                #            |       |             #\n\
                #            |       |             #\n\
                ####################################\n");

                    printf("\n\
                %s morreu de desgosto :(\n", nome);
                    jogo = false;
                }
                break;

            case 2:
                higiene--;

                if (higiene<=0) //animação de morte
                {
                    printf("\n\
                ####################################\n\
                #                                  #\n\
                #                   COF COF        #\n\
                #                  /               #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                ####################################\n", level_monstro, level_monstro, level_monstro, level_monstro);   
                    sleep(1);
                    system("clear");

                    printf("\n\
                ####################################\n\
                #                                  #\n\
                #                                  #\n\
                #              _____               #\n\
                #             /     \\              #\n\
                #            /       \\             #\n\
                #            |  RIP  |             #\n\
                #            |       |             #\n\
                #            |       |             #\n\
                ####################################\n");

                    printf("\n\
                %s morreu de uma doença infecciosa!\n", nome);
                    jogo = false;
                }
                break;

            case 3:
                fome++;

                if (fome>=15) //animação de morte
                {
                    printf("\n\
                ####################################\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                ####################################\n", level_monstro, level_monstro, level_monstro, level_monstro);   
                    sleep(1);
                    system("clear");

                    printf("\n\
                ####################################\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c                 #\n\
                #                %c                 #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                ####################################\n", level_monstro, level_monstro);   
                    sleep(1);
                    system("clear");

                    printf("\n\
                ####################################\n\
                #                                  #\n\
                #                                  #\n\
                #              _____               #\n\
                #             /     \\              #\n\
                #            /       \\             #\n\
                #            |  RIP  |             #\n\
                #            |       |             #\n\
                #            |       |             #\n\
                ####################################\n");

                    printf("\n\
                %s morreu de fome! :(\n", nome);
                    jogo = false;
                }
                break;

            case 4:
                felicidade--;

                if (felicidade<=0) //animação de morte
                {
                    printf("\n\
                ####################################\n\
                #                                  #\n\
                #                   :(             #\n\
                #                  /               #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                ####################################\n\
                ", level_monstro, level_monstro, level_monstro, level_monstro);   
                    sleep(1);
                    system("clear");

                    printf("\n\
                Algum tempo depois...\n");
                    sleep(1);
                    printf("\n\
                BANG!\n");
                    sleep(1);
                    system("clear");

                    printf("\n\
                ####################################\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #       %c     %c      %c     %c       #\n\
                ####################################\n\
                ", level_monstro, level_monstro, level_monstro, level_monstro);   
                    sleep(1);
                    system("clear");

                    printf("\n\
                ####################################\n\
                #                                  #\n\
                #                                  #\n\
                #              _____               #\n\
                #             /     \\              #\n\
                #            /       \\             #\n\
                #            |  RIP  |             #\n\
                #            |       |             #\n\
                #            |       |             #\n\
                ####################################\n");

                    printf("\n\
                %s morreu de desgosto :(\n", nome);
                    jogo = false;
                }
                break;

            case 5:
                higiene--;

                if (higiene<=0) //animação de morte
                {
                    printf("\n\
                ####################################\n\
                #                                  #\n\
                #                   COF COF        #\n\
                #                  /               #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                ####################################\n", level_monstro, level_monstro, level_monstro, level_monstro);   
                    sleep(1);
                    system("clear");

                    printf("\n\
                ####################################\n\
                #                                  #\n\
                #                                  #\n\
                #              _____               #\n\
                #             /     \\              #\n\
                #            /       \\             #\n\
                #            |  RIP  |             #\n\
                #            |       |             #\n\
                #            |       |             #\n\
                ####################################\n");

                    printf("\n\
                %s morreu de uma doença infecciosa!\n", nome);
                    jogo = false;
                }
                break;    

        }
    }
    return 0;
}

//Função do momento da escolha
int escolha()
{
    if( (tempo%10 == 0) && (tempo != 0) && (jogo == true) )
    {
        printf("\n\
                ####################################\n\
                # Nome: %-25s  #\n\
                # Tempo de vida: %-4i              #\n\
                # Fome:%-2i Felicidade:%-2i Higiene:%-2i #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n\
                Escolha uma opção: ",nome, tempo, fome, felicidade, higiene, level_monstro, level_monstro, level_monstro, level_monstro);
            
        scanf("%i",&acao);
        system("clear");

        switch (acao) //animação da escolha
        {

            case 1: // animação de comida

                printf("\n\
                ####################################\n\
                # Nome: %-25s  #\n\
                # Tempo de vida: %-4i              #\n\
                # Fome:%-2i Felicidade:%-2i Higiene:%-2i #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                #                                  #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n\n\
                %s hora de comer!\n\n\
                Humm, que delícia mestre!\n", nome, tempo, fome, felicidade, higiene, level_monstro, level_monstro, level_monstro, level_monstro, nome);

                sleep(1);
                system("clear");

                printf("\n\
                ####################################\n\
                # Nome: %-25s  #\n\
                # Tempo de vida: %-4i              #\n\
                # Fome:%-2i Felicidade:%-2i Higiene:%-2i #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n\n\
                %s hora de comer!\n\n\
                Humm, que delícia mestre!\n", nome, tempo, fome, felicidade, higiene, level_monstro, level_monstro, level_monstro, level_monstro, nome);

                fome = fome-2;
                higiene = higiene-2;

                sleep(1);
                system("clear");

                break;

            case 2: // animação de carinho

                printf("\n\
                ####################################\n\
                # Nome: %-25s  #\n\
                # Tempo de vida: %-4i              #\n\
                # Fome:%-2i Felicidade:%-2i Higiene:%-2i #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                #                                  #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n\n\
                O carinho do mestre me faz bem :)\n", nome, tempo, fome, felicidade, higiene, level_monstro, level_monstro, level_monstro, level_monstro);

                sleep(1);
                system("clear");

                printf("\n\
                ####################################\n\
                # Nome: %-25s  #\n\
                # Tempo de vida: %-4i              #\n\
                # Fome:%-2i Felicidade:%-2i Higiene:%-2i #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n\n\
                O carinho do mestre me faz bem :)\n", nome, tempo, fome, felicidade, higiene, level_monstro, level_monstro, level_monstro, level_monstro);

                felicidade = felicidade+3;
                fome = fome+1;

                sleep(1);
                system("clear");

                break;

                case 3: // animação de banho
                
                printf("\n\
                ####################################\n\
                # Nome: %-25s  #\n\
                # Tempo de vida: %-4i              #\n\
                # Fome:%-2i Felicidade:%-2i Higiene:%-2i #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #               %c%c%c%c               #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n\n\
                %s hora do banho!\n\n\
                Nãooooooo!\n", nome, tempo, fome, felicidade, higiene, level_monstro, level_monstro, level_monstro, level_monstro, nome);

                sleep(1);
                system("clear");
                    
                printf("\n\
                ####################################\n\
                # Nome: %-25s  #\n\
                # Tempo de vida: %-4i              #\n\
                # Fome:%-2i Felicidade:%-2i Higiene:%-2i #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n\n\
                %s hora do banho!\n\n\
                Nãooooooo!\n", nome, tempo, fome, felicidade, higiene, level_monstro, level_monstro, level_monstro, level_monstro, nome);

                higiene = higiene+7;
                felicidade = felicidade-4;

                sleep(1);
                system("clear");

                break;
                
            case 4: //animação nula

                break;

            default: //animação nda
                    
                printf("\n\
                ####################################\n\
                # Nome: %-25s  #\n\
                # Tempo de vida: %-4i              #\n\
                # Fome:%-2i Felicidade:%-2i Higiene:%-2i #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n\n\
                O que foi isso mestre?!\n\
                O que queria de mim?!\n", nome, tempo, fome, felicidade, higiene, level_monstro, level_monstro, level_monstro, level_monstro);

                sleep(1);
                system("clear");

                printf("\n\
                ####################################\n\
                # Nome: %-25s  #\n\
                # Tempo de vida: %-4i              #\n\
                # Fome:%-2i Felicidade:%-2i Higiene:%-2i #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n\n\
                O que foi isso mestre?!\n\
                O que queria de mim?!\n", nome, tempo, fome, felicidade, higiene, level_monstro, level_monstro, level_monstro, level_monstro);

                felicidade = felicidade-5;

                sleep(1);
                system("clear");

                break; 
        }         
    }
    return 0;
}

//Função de evolução
int evolucao()
{
    if ( (level_monstro == xp_monstro) && (level_monstro < 90) && (jogo == true) ) //level up
    {
        printf("\n\
                ####################################\n\
                #                                  #\n\
                #               !!!!               #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                ####################################\n", level_monstro, level_monstro, level_monstro, level_monstro);
        sleep(1);
        system("clear");
                    
        printf("\n\
                ####################################\n\
                #                                  #\n\
                #         Está evoluindo !         #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                #                                  #\n\
                ####################################\n", level_monstro, level_monstro, level_monstro, level_monstro);
        sleep(1);
        system("clear");

        printf("\n\
                ####################################\n\
                #                                  #\n\
                #         Está evoluindo !         #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                #                                  #\n\
                #                                  #\n\
                ####################################\n", level_monstro, level_monstro, level_monstro, level_monstro);
        sleep(1);
        system("clear");

        printf("\n\
                ####################################\n\
                #                                  #\n\
                #         Está evoluindo !         #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                ####################################\n", level_monstro, level_monstro, level_monstro, level_monstro);   
        sleep(1);
        system("clear");

        printf("\n\
                ####################################\n\
                #                                  #\n\
                #                                  #\n\
                #              %c    %c              #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                #              %c    %c              #\n\
                #                                  #\n\
                #                                  #\n\
                ####################################\n", level_monstro, level_monstro, level_monstro+1, level_monstro+1, level_monstro+1, level_monstro+1, level_monstro, level_monstro);   
        sleep(1);
        system("clear");

        printf("\n\
                ####################################\n\
                #                                  #\n\
                #        Parabéns evoluiu !        #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                ####################################\n", level_monstro+1, level_monstro+1, level_monstro+1, level_monstro+1);   
        sleep(1);
        system("clear");

        printf("\n\
                ####################################\n\
                #                                  #\n\
                #        Parabéns evoluiu !        #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                #                                  #\n\
                #                                  #\n\
                ####################################\n", level_monstro+1, level_monstro+1, level_monstro+1, level_monstro+1);
        sleep(1);
        system("clear");

        printf("\n\
                ####################################\n\
                #                                  #\n\
                #        Parabéns evoluiu !        #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                #                                  #\n\
                ####################################\n", level_monstro+1, level_monstro+1, level_monstro+1, level_monstro+1);
        sleep(1);
        system("clear");

        printf("\n\
                ####################################\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                ####################################\n", level_monstro+1, level_monstro+1, level_monstro+1, level_monstro+1);
        sleep(1);
        system("clear");
            
        level_monstro++;
        xp_monstro = 0;
    }
}

//Função de animações de morte
int mortes()
{
    if ( (fome>=15)&&(jogo == true) )
    {
        printf("\n\
                ####################################\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                ####################################\n", level_monstro, level_monstro, level_monstro, level_monstro);   
        sleep(1);
        system("clear");

        printf("\n\
                ####################################\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c                 #\n\
                #                %c                 #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                ####################################\n", level_monstro, level_monstro);   
        sleep(1);
        system("clear");

        printf("\n\
                ####################################\n\
                #                                  #\n\
                #                                  #\n\
                #              _____               #\n\
                #             /     \\              #\n\
                #            /       \\             #\n\
                #            |  RIP  |             #\n\
                #            |       |             #\n\
                #            |       |             #\n\
                ####################################\n");

        printf("\n\
                %s morreu de fome! :(\n", nome);
        jogo = false;
    }
    
    else if ( (fome<=0)&&(jogo == true) )
    {
        printf("\n\
                ####################################\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                ####################################\n\
                ", level_monstro, level_monstro, level_monstro, level_monstro);   
        sleep(1);
        system("clear");

        printf("\n\
                ####################################\n\
                #                                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #               %c%c%c%c               #\n\
                #               %c%c%c%c               #\n\
                #                %c%c                #\n\
                #                                  #\n\
                #                                  #\n\
                ####################################\n\
                ", level_monstro, level_monstro, level_monstro, level_monstro, level_monstro, level_monstro, level_monstro, level_monstro, level_monstro, level_monstro, level_monstro, level_monstro);   
        sleep(1);
        system("clear");

        printf("\n\
                ####################################\n\
                #                                  #\n\
                #                                  #\n\
                #               %c%c%c%c               #\n\
                #               %c%c%c%c               #\n\
                #               %c%c%c%c               #\n\
                #               %c%c%c%c               #\n\
                #                                  #\n\
                #                                  #\n\
                ####################################\n\
                ", level_monstro, level_monstro, level_monstro, level_monstro, level_monstro, level_monstro, level_monstro, level_monstro, level_monstro, level_monstro, level_monstro, level_monstro, level_monstro, level_monstro, level_monstro, level_monstro);   
        sleep(1);
        system("clear");

        printf("\n\
                ####################################\n\
                #        %c     %c    %c     %c        #\n\
                #                                  #\n\
                #     %c    %c            %c    %c     #\n\
                #               %c  %c               #\n\
                #               %c  %c               #\n\
                #     %c    %c            %c    %c     #\n\
                #                                  #\n\
                #        %c     %c    %c     %c        #\n\
                ####################################\n\
                ", level_monstro, level_monstro, level_monstro, level_monstro, level_monstro, level_monstro, level_monstro, level_monstro, level_monstro, level_monstro, level_monstro, level_monstro, level_monstro, level_monstro, level_monstro, level_monstro, level_monstro, level_monstro, level_monstro, level_monstro);   
        sleep(1);
        system("clear");

        printf("\n\
                ####################################\n\
                #                                  #\n\
                #                                  #\n\
                #              _____               #\n\
                #             /     \\              #\n\
                #            /       \\             #\n\
                #            |  RIP  |             #\n\
                #            |       |             #\n\
                #            |       |             #\n\
                ####################################\n");
            
        printf("\n\
                %s morreu de bucho cheio!\n", nome);
        jogo = false;
    }

    else if ( (felicidade>=15)&&(jogo == true) )
    {
        printf("\n\
                ####################################\n\
                #                                  #\n\
                #                    HA!           #\n\
                #                  /               #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                ####################################\n\
                ", level_monstro, level_monstro, level_monstro, level_monstro);   
        sleep(1);
        system("clear");

        printf("\n\
                ####################################\n\
                #                                  #\n\
                #                    HAHA!         #\n\
                #                  /               #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                ####################################\n\
                ", level_monstro, level_monstro, level_monstro, level_monstro);   
        sleep(1);
        system("clear");

        printf("\n\
                ####################################\n\
                #                                  #\n\
                #                    HAHAHA!       #\n\
                #                  /               #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                ####################################\n\
                ", level_monstro, level_monstro, level_monstro, level_monstro);   
        sleep(1);
        system("clear");

        printf("\n\
                Muito tempo depois...\n");
        sleep(1);
        system("clear");

        printf("\n\
                ####################################\n\
                #                                  #\n\
                #                   HAHAHAHAHAHA   #\n\
                #                 / HAHAHAHAHAHA   #\n\
                #               %c%c  HAHAHAHAHAHA   #\n\
                #               %c%c  HAHAHAHAHAHA   #\n\
                #                   HAHAHAHAHAHA   #\n\
                #                   HAHAHAHAHAHA!  #\n\
                #                                  #\n\
                ####################################\n\
                ", level_monstro, level_monstro, level_monstro, level_monstro);   
        sleep(1);
        system("clear");

        printf("\n\
                ####################################\n\
                #                                  #\n\
                #                                  #\n\
                #              _____               #\n\
                #             /     \\              #\n\
                #            /       \\             #\n\
                #            |  RIP  |             #\n\
                #            |       |             #\n\
                #            |       |             #\n\
                ####################################\n");

        printf("\n\
                %s morreu de rir :D ops... :(\n", nome);
        jogo = false;
    }

    else if ( (felicidade<=0)&&(jogo == true) )
    {
        printf("\n\
                ####################################\n\
                #                                  #\n\
                #                   :(             #\n\
                #                  /               #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                ####################################\n\
                ", level_monstro, level_monstro, level_monstro, level_monstro);   
        sleep(1);
        system("clear");

        printf("\n\
                Algum tempo depois...\n");
        sleep(1);
        printf("\n\
                BANG!\n");
        sleep(1);
        system("clear");

        printf("\n\
                ####################################\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #       %c     %c      %c     %c       #\n\
                ####################################\n\
                ", level_monstro, level_monstro, level_monstro, level_monstro);   
        sleep(1);
        system("clear");

        printf("\n\
                ####################################\n\
                #                                  #\n\
                #                                  #\n\
                #              _____               #\n\
                #             /     \\              #\n\
                #            /       \\             #\n\
                #            |  RIP  |             #\n\
                #            |       |             #\n\
                #            |       |             #\n\
                ####################################\n");

        printf("\n\
                %s morreu de desgosto :(\n", nome);
        jogo = false;
    }

    else if ( (higiene>=15)&&(jogo == true) )
    {
        printf("\n\
                ####################################\n\
                #                                  #\n\
                #                   ATCHIM!        #\n\
                #                  /               #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                ####################################\n", level_monstro, level_monstro, level_monstro, level_monstro);   
        sleep(1);
        system("clear");

        printf("\n\
                Algum tempo depois...\n");
        sleep(1);
        system("clear");

        printf("\n\
                ####################################\n\
                #                                  #\n\
                #                                  #\n\
                #              _____               #\n\
                #             /     \\              #\n\
                #            /       \\             #\n\
                #            |  RIP  |             #\n\
                #            |       |             #\n\
                #            |       |             #\n\
                ####################################\n");

        printf("\n\
                %s morreu por falta de anticorpos!\n", nome);
        jogo = false;
    }

    else if ( (higiene<=0)&&(jogo == true) ) //animação de morte
    {
        printf("\n\
                ####################################\n\
                #                                  #\n\
                #                   COF COF        #\n\
                #                  /               #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                ####################################\n", level_monstro, level_monstro, level_monstro, level_monstro);   
        sleep(1);
        system("clear");

        printf("\n\
                Algum tempo depois...\n");
        sleep(1);
        system("clear");

        printf("\n\
                ####################################\n\
                #                                  #\n\
                #                                  #\n\
                #              _____               #\n\
                #             /     \\              #\n\
                #            /       \\             #\n\
                #            |  RIP  |             #\n\
                #            |       |             #\n\
                #            |       |             #\n\
                ####################################\n");

        printf("\n\
                %s morreu de uma doença infecciosa!\n", nome);
        jogo = false;
    }
    return 0;
}

//Função de animação de morte (velhice)
int morte_velhice()
{
    if ( (level_monstro == xp_monstro) && (level_monstro == 90) && (jogo == true))
    {
        printf("\n\
                ####################################\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                ####################################\n", level_monstro, level_monstro, level_monstro, level_monstro);   
        sleep(1);
        system("clear");

        printf("\n\
                ####################################\n\
                #                                  #\n\
                #                                  #\n\
                #              _____               #\n\
                #             /     \\              #\n\
                #            /       \\             #\n\
                #            |  RIP  |             #\n\
                #            |       |             #\n\
                #            |       |             #\n\
                ####################################\n");
        printf("\n\
                %s teve uma bela vida :)\n", nome);
        jogo = false;
    }
    return 0;
}

//Função jogo
int main()
{

    while (tela_inicial == true)
    {
        system("clear");
        printf("\n\
                ####################################\n\
                #     Bem vindo ao Asciigotchi!    #\n\
                #              (¯ ▽ ¯) ノ          #\n\
                #                                  #\n\
                #     (1) JOGAR                    #\n\
                #     (2) INSTRUÇÕES               #\n\
                #     (3) CRÉDITOS                 #\n\
                #     (4) SOBRE                    #\n\
                #                                  #\n\
                ####################################\n\
                Escolha uma opção: ");
        scanf("%i", &inicio);
        getchar();
        switch (inicio)
        {
            case 1:
                jogo = true;
                tela_inicial = false;
                break;

            case 2:
                instrucoes = true;
                break;
            
            case 3:
                creditos = true;
                break;
            
            case 4:
                sobre = true;
                break;

            default:
                break;

        }
        system("clear");

        //Instruções
        while (instrucoes == true)
        {
            printf("\n\
        Ações do usuário:\n\n\
        O usuário pode a cada 10 segundos agir com seu monstrinho selecionando alguma das seguintes opções:\n\n\
        Comida: Fornece alimentação ao monstrinho\n\
        ○ Esta ação diminui em 2 o grau de fome e diminui em 2 a higiene do monstrinho\n\n\
        Carinho: Fornece felicidade ao monstrinho\n\
        ○ Esta ação aumenta em 3 ao grau de felicidade e aumenta em 1 o grau de fome\n\n\
        Banho: Limpa o monstrinho\n\
        ○ Esta ação aumenta em 7 o grau de higiene e diminui em 4 o grau de felicidade\n\n\
        … : Ignora o monstro\n\
        ○ Basicamente esta ação não faz absolutamente nada\n\n\
        Caso o usuário digite outra opção, 5 pontos serão reduzidos do grau felicidade do monstrinho.\n\n\
        Andamento do Jogo:\n\n\
        O monstrinho evolui a cada XX segundos, onde XX é o decimal correspondente ao caractere ASCII que ele é formado\n\
        (ex.: o caractere ‘A’ é mapeado no decimal 65, ou seja, ele se tornará ‘B’ em 65 segundos).\n\n\
        A cada 5 segundos (apenas depois de ter nascido) nosso monstrinho pode aleatoriamente:\n\
        ficar com fome (grau de fome é incrementado em 1); ou ficar carente (grau de felicidade decrementado em 1);\n\
        ou se sujar (grau de higiene decrementado em 1).\n\n\
        Situações em que o monstrinho morre (“Game over!”):\n\n\
        ○ Ocorre quando o grau de fome chega a 15 ou a 0\n\
        ○ Ocorre quando o grau de felicidade chega a 15 ou a 0\n\
        ○ Ocorre quando o grau de higiene chega a 15 ou a 0\n\
        ○ Ocorre quando o monstro chegar ao estágio de evolução “Z”\n\n\
        Quando estiver pronto digite 0 para voltar à tela de início: ");

            scanf("%i", &voltar2);
            if (voltar2 == 0)
            {
                instrucoes = false;
                tela_inicial = true;
            }
            else
            {
                system("clear");
            }
        }

        //Créditos
        while (creditos == true)
        {
            printf("\n\
        Este Trabalho, o Asciigotchi foi feito por:\n\n\
        Darla Ellen Santos Garcez\n\
        Gustavo Cunha Lacerda\n\
        Henrique Tavares Aguiar\n\n\
        Quando estiver pronto digite 0 para voltar à tela de início: ");

            scanf("%i", &voltar3);
            if (voltar3 == 0)
            {
                creditos = false;
                tela_inicial = true;
            }
            else
            {
                system("clear");
            }
        
        }

        //Sobre
        while (sobre == true)
        {
            printf("\n\
        E o AsciiGotchi?\n\n\
        Neste projeto criaremos uma versão simplificada de Tamagotchi chamada AsciiGotchi.\n\
        Nosso monstrinho virtual será representado por um símbolo na tabela ASCII,\n\
        variando de “@”, quando o monstrinho é apenas um ovo” até “Z”,\n\
        quando o monstrinho já é um senhor de idade pronto para partir…”.\n\n\
        O que é um Tamagotchi?\n\n\
        O Tamagotchi®, é um brinquedo japonês lançado em 1996 pela Bandai©.\n\
        A motivação deste brinquedo consiste em cuidar de um monstrinho virtual como se fosse real,\n\
        alimentando-o, dando-lhe carinho, limpando-o, dentre outras atividades.\n\
        Além disso, o monstrinho virtual, ao longo do tempo, se desenvolve e vai envelhecendo.\n\
        Caso o monstrinho não seja bem cuidado pelo seu dono,há uma possibilidade de que ele venha a falecer.\n\n\
        Quando estiver pronto digite 0 para voltar à tela de início: ");

            scanf("%i", &voltar4);
            if (voltar4 == 0)
            {
                sobre = false;
                tela_inicial = true;
            }
            else
            {
                system("clear");
            }
        }
    }
    
    system("clear");
    printf("\tInforme um nome para seu monstro: ");
    scanf("%25[^\n]s",nome);
    getchar();
    system("clear");

    //Tela de carregando
    carregando();

    //Loop do jogo
    while (jogo == true)
    {
        egg();
        mudanca_status();
        morte_velhice();
        escolha();
        mortes();
        movimento();

        tempo++;
        xp_monstro++;

        evolucao();
    }

    printf("\n");
    return 0;
}