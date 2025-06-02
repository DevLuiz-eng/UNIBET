#include <stdio.h>
#include <stdlib.h> // srand, rand
#include <time.h>   // time
#include <locale.h> // Colocar em Portugues
#include <windows.h>
#include "funcoes.h"

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");

	//variaveis do ESPORTIVAS.cpp
	//PRECISA ALTERAR
	
	//real x barça
	int totalgol1 = 0; //totalgol == mvp da partida + saldo de gols do jogador.
	int vencedor1 = 1; //Vencedor da partida.
	int golA1 = 0, golB1 = 0; //Gols do TimeA e TimeB, para colocar no placar.
	
	//bayer x celtic
	int totalgol = 0;
	int vencedor = 1;
	int golA2 = 0, golB2 = 0;
	
	//cor x pal
	int totalgol2 = 0;
	int vencedor2 = 1;
	int golA3 = 0, golB3 = 0;
	
	
	//Brasil x Argentina
	int totalgol3 = 0;
	int vencedor3 = 1;
	int golA4 = 0, golB4 = 0;
	
	// Fla x vasco
	int totalgol4 = 0;
	int vencedor4 = 1;
	int golA5 = 0, golB5 = 0;
	
	// Santos x Sao paulo
	int totalgol5 = 0;
	int vencedor5 = 1;
	int golA6 = 0, golB6 = 0;
	
	// bahia x Vitoria
	int totalgol6 = 0;
	int vencedor6 = 1;
	int golA7 = 0, golB7 = 0;
	
	// Fluminense x BotaFogo
	int totalgol7 = 0;
	int vencedor7 = 1;
	int golA8 = 0, golB8 = 0;
	
	// PSG x ARSENAL
	int totalgol8 = 0;
	int vencedor8 = 1;
	int golA9 = 0, golB9 = 0;
	
	// United x City
	int totalgol9 = 0;
	int vencedor9 = 1;
	int golA10 = 0, golB10 = 0;
	
	// Inter x Milan
	int totalgol10 = 0;
	int vencedor10 = 1;
	int golA11 = 0, golB11 = 0;
	
	// França x Espanha
	int totalgol11 = 0;
	int vencedor11 = 1;
	int golA12 = 0, golB12 = 0;
	
	// Portugal x Holanda
	int totalgol12 = 0;
	int vencedor12 = 1;
	int golA13 = 0, golB13 = 0;
	
	// Alemanha x Inglaterra
	int totalgol13 = 0;
	int vencedor13 = 1;
	int golA14 = 0, golB14 = 0;
	
	// Uruguai x Italia
	int totalgol14 = 0;
	int vencedor14 = 1;
	int golA15 = 0, golB15 = 0;
	
	//PRECISA ALTERAR
	//variaveis do ESPORTIVAS.cpp
	
	
    int age, pass, menu, menu1, games, deposit, balance, creators, newpass, saldo = 0, bonus = 0;
    char user[99];

    printf("\n\n				      Olá!, Seja bem vindo ao UniBet. CRIE SUA CONTA!\n");
    printf("				     	 	    Qual sua idade? ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("				     	        Qual seu nome de usuário? ");
        scanf("%s", &user);
        printf("				     	        Crie sua senha (4 Digitos): ");
        scanf("%d", &pass);
        system("cls");
    } else {
        printf("				     	     Você precisa ser maior de idade!");
        return 0;
    }

    do {
        system("cls");
        printf("==============MENU==============\n");
        printf("1 - JOGOS\n2 - DEPOSITO\n3 - SALDO\n4 - CRIADORES\n");

        do {
            printf("Selecione a opções: ");
            scanf("%d", &menu);
        } while (menu > 4);

        switch (menu) {
            case 1: // Jogos
                system("cls");
                printf("==============JOGOS=============\n");
                printf("1 - Colors Roulette (Roleta Colorida)\n");
                printf("2 - TeamBet (Apostas Esportivas)\n");
                printf("3 - MENU INICIAL\n");

                do {
                    printf("Selecione a opções: ");
                    scanf("%d", &games);
                } while (games > 3);

                switch(games){
                	case 1:
                		roleta(&saldo);
                		break;
                	case 2:
                		esportivas(&saldo, &vencedor, &golA2, &golB2,
                                   &vencedor1, &golA1, &golB1,
                                   &vencedor2, &golA3, &golB3,
                                   &totalgol, &totalgol1, &totalgol2,
								   &vencedor3, &golA4, &golB4,&totalgol3,
								   &vencedor4, &golA5, &golB5,&totalgol4,
								   &vencedor5, &golA6, &golB6,&totalgol5,
								   &vencedor6, &golA7, &golB7,&totalgol6,
								   &vencedor7, &golA8, &golB8,&totalgol7,
								   &vencedor8, &golA9, &golB9,&totalgol8,
								   &vencedor9, &golA10, &golB10,&totalgol9,
								   &vencedor10, &golA11, &golB11,&totalgol10,
								   &vencedor11, &golA12, &golB12,&totalgol11,
								   &vencedor12, &golA13, &golB13,&totalgol12,
								   &vencedor13, &golA14, &golB14,&totalgol13,
								   &vencedor14, &golA15, &golB15,&totalgol14);//PRECISA ALTERAR
                		break;
                	case 3:
                		
                		goto final;
				}
                break;

            case 2:
			    system("cls");
			    printf("========================DEPÓSITO=======================\n");
			    printf("1 - Depositar\n2 - Saldo\n");
			    printf("Selecione a opção: ");
			    scanf("%d", &balance);
			
			    switch (balance) {
			        case 1: {
			            int deposito;
			            printf("Digite sua senha: ");
			            scanf("%d", &newpass);
			        	if (newpass == pass)  {
			        		
						
			            printf("Digite o valor do depósito: ");
			            scanf("%d", &deposito);
			            saldo += deposito; // Soma o depósito ao saldo atual
			            
			            if(deposito >= 100 && bonus ==0){
			                printf("Parabéns, %s, você recebeu um bônus de R$50,00!\n\n", user);
			                saldo += 50;
			                bonus++;
			            }
			        } else {
			        	printf("Senha incorreta!!");
					}
			            break;
			        }
			        case 2:
			            printf("Seu saldo é: R$%d\n", saldo);
			            break;
			        default:
			            printf("Opção inválida!\n");
			            break;
			    }
			    break;


            case 3: // Saldo
                printf("Seu saldo atual é: R$%d\n", saldo);
                break;

            case 4: // Criadores
                printf("Criadores:Eryck Viana Bispo e Luiz Armando\n");
                break;

            default:
                printf("Nao entendi.\n");
                break;
        }
        
        //GOTO FINAL
		final:
		//==========
    	
        printf("\nDeseja voltar ao menu principal ou Encerrar?\n1 - Voltar\n2 - Encerrar\n");
        printf("Selecione a opção: ");
        scanf("%d", &menu1);
        printf("Voltando...");
    	Sleep(1000);
    	

    } while (menu1 == 1);
    return 0;
}

