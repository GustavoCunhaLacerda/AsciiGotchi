#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#define true 1
#define false 0

//CONTROLE DO LOOP DO JOGO
int game = true;

//INFORMAÇÕES DOBRE O TAMAGOTCHI
int level_monstro = 64, xp_monstro = 55, fome = 10, felicidade = 10, higiene = 10;
int perda_status_natural;
char nomeMonstro[25];

//ANIMAÇOES E CONTROLE DE FRAMES/"SPRITES"
int acao, tempo_comemoracao, tempo = 0, tempo_animacao = 1, movimento;

//FUNÇÃO DE LOADING
int loading() {
    system("clear");
    printf("                Carregando.\n");    
    sleep(1);
    system("clear");
    printf("                Carregando..\n");
    sleep(1);
    system("clear");
    printf("                Carregando...\n");
    sleep(1);
    system("clear");
    printf("                Carregando..\n");
    sleep(1);
    system("clear");
    printf("                Carregando.\n");
    sleep(1);
    system("clear");
    return 0;
}

//FUNÇÃO DE PERDA DE STATUS NATURAL
int func_perda_status_naturalemte() {
    if ((tempo%5 == 0) && (tempo != 0) && (level_monstro != 64)) {
            perda_status_natural = rand()%3;
            if (perda_status_natural == 0) {
                fome += 1;
            }
            else if (perda_status_natural == 1) {
                felicidade -= 1;
            }
            else {
                higiene -= 1;
            }  
        }
    return 0;
}

//FUNÇÃO DE MOVIMENTAÇÃO
int movimentacao() {
    //RAMO ANIMAÇÃO PADRÃO DE MOVIMENTO PT.1
        if ( (tempo%2 == 0) && (game == true))
        {
            printf("\n\
                ####################################\n\
                # Nome: %-25s  #\n\
                # Tempo de vida: %-4i              #\n\
                # Fome:%-2d Felicidade:%-2d Higiene:%-2d #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n", nomeMonstro, tempo, fome, felicidade, higiene, level_monstro, level_monstro, level_monstro, level_monstro);
        }

        //RAMO ANIMAÇÃO PADRÃO DE MOVIMENTO PT.2
        else if ( (tempo%2 != 0) && (game == true) )
        {
            movimento = rand()%2;
            if (movimento == 0)
            {
            printf("\n\
                ####################################\n\
                # Nome: %-25s  #\n\
                # Tempo de vida: %-4i              #\n\
                # Fome:%-2d Felicidade:%-2d Higiene:%-2d #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                 %c%c               #\n\
                #                 %c%c               #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n", nomeMonstro, tempo, fome, felicidade, higiene, level_monstro, level_monstro, level_monstro, level_monstro);
            }
            else
            {
               printf("\n\
                ####################################\n\
                # Nome: %-25s  #\n\
                # Tempo de vida: %-4i              #\n\
                # Fome:%-2d Felicidade:%-2d Higiene:%-2d #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #               %c%c                 #\n\
                #               %c%c                 #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n", nomeMonstro, tempo, fome, felicidade, higiene, level_monstro, level_monstro, level_monstro, level_monstro); 
            }
        }
    
    return 0;
}

//FUNÇÃO DE ESCOLHAS
int escolhas() {
    if( (tempo%10 == 0) && (tempo != 0) && (game == true) )
        {
                printf("\n\
                ####################################\n\
                # Nome: %-25s  #\n\
                # Tempo de vida: %-4i              #\n\
                # Fome:%-2d Felicidade:%-2d Higiene:%-2d #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n\
                Digite uma opção: ",nomeMonstro, tempo,fome, felicidade, higiene, level_monstro, level_monstro, level_monstro, level_monstro);
            scanf("%d",&acao);
            system("clear");
            tempo_comemoracao = 0;
            switch (acao)
            {
            
            //CASO 1 DE ESCOLHA: COMER
            case 1:
            system("clear");
            printf("\n\
                ####################################\n\
                # Nome: %-25s  #\n\
                # Tempo de vida: %-4i              #\n\
                # Fome:%-2d Felicidade:%-2d Higiene:%-2d #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n\
                %s, hora de comer!\n",nomeMonstro, tempo, fome, felicidade, higiene, level_monstro, level_monstro, level_monstro, level_monstro, nomeMonstro);   
            sleep(1);
            system("clear");
            printf("\n\
                ####################################\n\
                # Nome: %-25s  #\n\
                # Tempo de vida: %-4i              #\n\
                # Fome:%-2d Felicidade:%-2d Higiene:%-2d #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n\
                %s, hora de comer!\n",nomeMonstro, tempo, fome, felicidade, higiene, level_monstro, level_monstro, level_monstro, level_monstro, nomeMonstro);   
            sleep(1);
            system("clear");
            printf("\n\
                ####################################\n\
                # Nome: %-25s  #\n\
                # Tempo de vida: %-4i              #\n\
                # Fome:%-2d Felicidade:%-2d Higiene:%-2d #\n\
                #                                  #\n\
                #        Humm, que delícia!        #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n",nomeMonstro, tempo, fome, felicidade, higiene, level_monstro, level_monstro, level_monstro, level_monstro);   
            sleep(1);
            system("clear");
            printf("\n\
                ####################################\n\
                # Nome: %-25s  #\n\
                # Tempo de vida: %-4i              #\n\
                # Fome:%-2d Felicidade:%-2d Higiene:%-2d #\n\
                #                                  #\n\
                #        Humm, que delícia!        #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n",nomeMonstro, tempo, fome, felicidade, higiene, level_monstro, level_monstro, level_monstro, level_monstro);   
            sleep(1);
            fome -= 2;
            higiene -=2;
            system("clear");
            break;

            //CASO 2 DE ESCOLHA: CARINHO
            case 2:
            system("clear");
            printf("\n\
                ####################################\n\
                # Nome: %-25s  #\n\
                # Tempo de vida: %-4i              #\n\
                # Fome:%-2d Felicidade:%-2d Higiene:%-2d #\n\
                #                                  #\n\
                # O carinho do mestre me faz bem!  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n",nomeMonstro, tempo, fome, felicidade, higiene, level_monstro, level_monstro, level_monstro, level_monstro);   
                sleep(1);
            system("clear");
            printf("\n\
                ####################################\n\
                # Nome: %-25s  #\n\
                # Tempo de vida: %-4i              #\n\
                # Fome:%-2d Felicidade:%-2d Higiene:%-2d #\n\
                #                                  #\n\
                # O carinho do mestre me faz bem!  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n",nomeMonstro, tempo, fome, felicidade, higiene, level_monstro, level_monstro, level_monstro, level_monstro);   
                sleep(1);
            felicidade += 3;
            fome += 1;
            system("clear");
            break;

            //CASO 3 DE ESCOLHA: BANHO
            case 3:
            system("clear");
            printf("\n\
                ####################################\n\
                # Nome: %-25s  #\n\
                # Tempo de vida: %-4i              #\n\
                # Fome:%-2d Felicidade:%-2d Higiene:%-2d #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n\
                %s, hora do banho!\n",nomeMonstro, tempo, fome, felicidade, higiene, level_monstro, level_monstro, level_monstro, level_monstro, nomeMonstro);   
            sleep(1);
            system("clear");
            printf("\n\
                ####################################\n\
                # Nome: %-25s  #\n\
                # Tempo de vida: %-4i              #\n\
                # Fome:%-2d Felicidade:%-2d Higiene:%-2d #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n\
                %s, hora do banho!\n",nomeMonstro, tempo, fome, felicidade, higiene, level_monstro, level_monstro, level_monstro, level_monstro, nomeMonstro);   
            sleep(1);
            system("clear");
            printf("\n\
                ####################################\n\
                # Nome: %-25s  #\n\
                # Tempo de vida: %-4i              #\n\
                # Fome:%-2d Felicidade:%-2d Higiene:%-2d #\n\
                #                                  #\n\
                #       Nãoooooo!                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n",nomeMonstro, tempo, fome, felicidade, higiene, level_monstro, level_monstro, level_monstro, level_monstro);   
            sleep(1); 
            system("clear");
            printf("\n\
                ####################################\n\
                # Nome: %-25s  #\n\
                # Tempo de vida: %-4i              #\n\
                # Fome:%-2d Felicidade:%-2d Higiene:%-2d #\n\
                #                                  #\n\
                #       Nãoooooo!                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n",nomeMonstro, tempo, fome, felicidade, higiene, level_monstro, level_monstro, level_monstro, level_monstro);   
            sleep(1);       
            higiene += 7;
            felicidade -= 4;
            system("clear");
            break;
            
            //CASO 4 DE ESCOLHA: IGNORAR O TAMAGOTCHI
            case 4:
                printf("\n\
                ####################################\n\
                # Nome: %-25s  #\n\
                # Tempo de vida: %-4i              #\n\
                # Fome:%-2d Felicidade:%-2d Higiene:%-2d #\n\
                #                                  #\n\
                #           ...!                   #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n",nomeMonstro, tempo, fome, felicidade, higiene, level_monstro,level_monstro, level_monstro, level_monstro);
            sleep(1);
            system("clear");
            printf("\n\
                ####################################\n\
                # Nome: %-25s  #\n\
                # Tempo de vida: %-4i              #\n\
                # Fome:%-2d Felicidade:%-2d Higiene:%-2d #\n\
                #                                  #\n\
                #           ...!                   #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n",nomeMonstro, tempo, fome, felicidade, higiene, level_monstro,level_monstro, level_monstro, level_monstro);
            sleep(1);
            system("clear");
            break;

            //CASO GENÉRICO DE ESCOLHA INEXISTENTE
            default:
                system("clear");
                printf("\n\
                ####################################\n\
                # Nome: %-25s  #\n\
                # Tempo de vida: %-4i              #\n\
                # Fome:%-2d Felicidade:%-2d Higiene:%-2d #\n\
                #                                  #\n\
                #  O que foi isso mestre ?!        #\n\
                #  O que queria de mim ?           #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n",nomeMonstro, tempo, fome, felicidade, higiene, level_monstro, level_monstro, level_monstro, level_monstro);
            sleep(1);
            system("clear");
            printf("\n\
                ####################################\n\
                # Nome: %-25s  #\n\
                # Tempo de vida: %-4i              #\n\
                # Fome:%-2d Felicidade:%-2d Higiene:%-2d #\n\
                #                                  #\n\
                #  O que foi isso mestre ?!        #\n\
                #  O que queria de mim ?           #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n",nomeMonstro, tempo, fome, felicidade, higiene, level_monstro, level_monstro, level_monstro, level_monstro);
            sleep(1);
            felicidade -= 5;  
            system("clear");         
            }
        }
    return 0;
}

//FUNÇÃO DE EVOLUÇÃO
int evolution() {
        if ( (level_monstro == xp_monstro) && (level_monstro <= 90) && (game == true) ) {
            xp_monstro = 0;
            if (level_monstro == 90)
            {
                printf("nada");
            }  
            else
            {
                system("clear");
                printf("\n\
                ####################################\n\
                #                                  #\n\
                #               !!!                #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n", level_monstro, level_monstro, level_monstro, level_monstro);
                sleep(2);
                system("clear");
                printf("\n\
                ####################################\n\
                #                                  #\n\
                #          Está evoluindo !        #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n", level_monstro, level_monstro, level_monstro, level_monstro);
                sleep(2);
                system("clear");
                printf("\n\
                ####################################\n\
                #                                  #\n\
                #          Está evoluindo !        #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                #                                  #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n", level_monstro, level_monstro, level_monstro, level_monstro);
                sleep(1);
                system("clear");
                printf("\n\
                ####################################\n\
                #                                  #\n\
                #          Está evoluindo !        #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                #                                  #\n\
                #                                  #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n", level_monstro, level_monstro, level_monstro, level_monstro);
                sleep(1);
                system("clear");
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
                (1)comer (2)carinho (3)banho (4)...\n", level_monstro, level_monstro, level_monstro, level_monstro);
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
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n", level_monstro, level_monstro, level_monstro+1, level_monstro+1, level_monstro+1, level_monstro+1, level_monstro, level_monstro);
                sleep(1);
                if (level_monstro == 64){
                    tempo = 0;
                }
                level_monstro++;           
                system("clear");
                printf("\n\
                ####################################\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                #                                  #\n\
                #                                  #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n", level_monstro, level_monstro, level_monstro, level_monstro);
                sleep(1);
                system("clear");
                printf("\n\
                ####################################\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                #                                  #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n", level_monstro, level_monstro, level_monstro, level_monstro);
                sleep(1);
                system("clear");
                printf("\n\
                ####################################\n\
                #                                  #\n\
                #                                  #\n\
                #             Evoluiu!!!           #\n\
                #                                  #\n\
                #                                  #\n\
                #                                  #\n\
                #                %c%c                #\n\
                #                %c%c                #\n\
                ####################################\n\
                (1)comer (2)carinho (3)banho (4)...\n", level_monstro, level_monstro, level_monstro, level_monstro);
                sleep(1);
            }
        }

    return 0;
}

//FUNÇÃO DE MORTES
int mortes() {
    return 0;
}

//FUNÇÃO PRINCIPAL
int main() {
    //GERADOR DE NÚMEROS ALEATÓRIOS
    srand(time(NULL));

    //INÍCIO E ESCOLHA DO NOME DO TAMAGOTCHI
    system("clear");
    printf("                Bem vindo ao AsciiGotchi!\n");
    sleep(1);
    printf("                Informe um nome para seu monstro: ");
    scanf("%s", nomeMonstro);
    sleep(2);

    //LOADING INICIAL
    loading();

    //LOOP PRINCIPAL DO JOGO
    while (game ==true) {
        system("clear");

        func_perda_status_naturalemte();
        escolhas();
        movimentacao();
        evolution();


        sleep(1);
        xp_monstro++;
        tempo++;
    }
    return 0;
}



