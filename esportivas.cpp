#include <stdio.h>
#include <stdlib.h> // srand, rand
#include <time.h>   // time
#include <locale.h> // Colocar em Portugues
#include <unistd.h>
#include <windows.h>
#include "funcoes.h"
#include <string.h> // Necessário para strcpy

//brasileirao
void flaxvas(int *saldo, int *vencedor4, int *golA5,int *golB5, int *totalgol4);
void sanxsao(int *saldo, int *vencedor5, int *golA6,int *golB6, int *totalgol5);
void bavi(int *saldo, int *vencedor6, int *golA7,int *golB7, int *totalgol6);
void fluxbota(int *saldo, int *vencedor7, int *golA8,int *golB8, int *totalgol7);
//Champions
void realxbar(int *saldo, int *vencedor1, int *golA1,int *golB1, int *totalgol1);
void psgxars(int *saldo, int *vencedor8, int *golA9,int *golB9, int *totalgol8);
void bayerxceltic(int *saldo, int *vencedor, int *golA2,int *golB2, int *totalgol);
void untxcity(int *saldo, int *vencedor9, int *golA10,int *golB10, int *totalgol9);
void interxmil(int *saldo, int *vencedor10, int *golA11,int *golB11, int *totalgol10);
//seleções
void brasilxargentina(int *saldo, int *vencedor3, int *golA4,int *golB4, int *totalgol3);
void franxesp(int *saldo, int *vencedor11, int *golA12,int *golB12, int *totalgol11);
void porxhol(int *saldo, int *vencedor12, int *golA13,int *golB13, int *totalgol12);
void alexing(int *saldo, int *vencedor13, int *golA14,int *golB14, int *totalgol13);
void uruxita(int *saldo, int *vencedor14, int *golA15,int *golB15, int *totalgol14);



int esportivas(int *saldo, int *vencedor, int *golA2, int *golB2, int *vencedor1,
                int *golA1, int *golB1, int *vencedor2, int *golA3, int *golB3,
                int *totalgol, int *totalgol1, int *totalgol2,
				int *vencedor3, int *golA4, int *golB4, int *totalgol3,
				int *vencedor4, int *golA5, int *golB5, int *totalgol4,
				int *vencedor5, int *golA6,int *golB6, int *totalgol5,
				int *vencedor6, int *golA7,int *golB7, int *totalgol6,
				int *vencedor7, int *golA8,int *golB8, int *totalgol7,
				int *vencedor8, int *golA9,int *golB9, int *totalgol8,
				int *vencedor9, int *golA10,int *golB10, int *totalgol9,
				int *vencedor10, int *golA11,int *golB11, int *totalgol10,
				int *vencedor11, int *golA12,int *golB12, int *totalgol11,
				int *vencedor12, int *golA13,int *golB13, int *totalgol12,
				int *vencedor13, int *golA14,int *golB14, int *totalgol13,
				int *vencedor14, int *golA15,int *golB15, int *totalgol14){ //PRECISA ALTERAR


    setlocale(LC_ALL, "Portuguese");  // Para acentuação correta no terminal
    srand(time(NULL));  // Inicializa o gerador de números aleatórios com o tempo atual


	int menu, golsCasa, golsFora, jogo, golsp, golsc, golsf, golsvas, golsbot, golss, golsv, golsb, golsflu, golsg, golssant, resultado, placarA, placarB;
	char time1[50];
	char time2[50];
	int voltar;
	double aposta, oddcasa, oddfora,oddempate, ganhos;
	oddcasa = 2.22;
	oddfora = 3.33;
	oddempate = 4.0;
	     
	
	
    // Lista de times brasileiros
    char brTeams[11][50] = {
        "Palmeiras", "Flamengo", "Bahia", "Vitória", "Vasco",
        "Santos", "Fluminense", "Botafogo", "Corinthians", "Grêmio", "São Paulo"
    };
    int palmeiras = 0;
    int flamengo = 1;
    int bahia = 2;
    int vitoria = 3;
    int vasco = 4;
    int santos = 5;
    int fluminense = 6;
    int botafogo = 7;
    int corinthians = 8;
    int gremio = 9;
    int saoPaulo = 10;
    int tamanhobr = sizeof(brTeams) / sizeof(brTeams[0]);
    char europaTeams [11][50] = {
		 "Barcelona", "Real Madrid", "PSG", "Liverpool", "Man UNT", "Man CITY", "MIlan", "Internazionale", "Arsenal", "Bayer MNCH"
	};
	int barcelona = 0;
	int realMadrid = 1;
	int psg = 2;
	int liverpool = 3;
	int manUnited = 4;
	int manCity = 5;
	int milan = 6;
	int inter = 7;
	int arsenal = 8;
	int bayerM = 9;
	
	char country [11][50] = {
		 "Brasil", "Argentina", "Portugal", "Alemanha", "Espanha", "França", "Inglaterra", "Uruguai", "Itália", "holanda"
	};
	
	int brasil = 0;
	int argentina = 1;
	int portugal = 2;
	int alemanha = 3;
	int espanha = 4;
	int franca = 5;
	int inglaterra = 6;
	int uruguai = 7;
	int italia = 8;
	int holanda = 9;
	

	inicio:
		system("cls");
	    printf("=============TeamBet============\n");
	    printf("	   R$%d reais\n", *saldo);
	    printf("CAMPEONATOS:\n1 - BRASILEIRÃO\n2 - CHAMPIONS\n3 - AMISTOSOS INTERNACIONAIS\n4 - VOLTAR AO MENU INICIAL\n");
	    printf("Selecione: ");
//	    char buffer[10];
//		fgets(buffer, sizeof(buffer), stdin);
//		sscanf(buffer, "%d", &menu);
		scanf("%d", &menu);
		if (menu > 4) {
			printf("Não encontrado. Retornando ao menu inicial...");
			Sleep(1500);
			goto inicio;
		}
	
		
	    switch(menu) {
	    	// BRASILEIRAO
	    	brasileirao:
	    	pular:
	    	case 1:
	    		system("cls");
	    		printf("JOGOS AO VIVO:\n");
	    		//CORINTHIANS 
	    		switch(*vencedor2) {
			    case 3:
			        printf("X  - [PALMEIRAS %d X %d CORINTHIANS]\n", *golB3, *golA3);
			        break;
			    case 4:
			        printf("X  - [PALMEIRAS %d X %d CORINTHIANS]\n", *golB3, *golA3);
			        break;
			    case 2:
			        printf("X  - [PALMEIRAS %d X %d CORINTHIANS]\n", *golB3, *golA3);
			        break;
			    case 1:
			    	printf("1 - [PALMEIRAS X CORINTHIANS]\n");
			    	break;
				}
				switch(*vencedor4) {
			    case 3:
			        printf("X  - [FLAMENGO %d X %d VASCO]\n", *golA5, *golB5);
			        break;
			    case 4:
			        printf("X  - [FLAMENGO %d X %d VASCO]\n", *golA5, *golB5);
			        break;
			    case 2:
			        printf("X  - [FLAMENGO %d X %d VASCO]\n", *golA5, *golB5);
			        break;
			    case 1:
			    	printf("2 - [FLAMENGO X VASCO]\n"); // PRECISA ALTERAR NUMERO
			    	break;
				}
				switch(*vencedor5) {// PRECISA ALTERAR
			    case 3:
			        printf("X  - [SANTOS %d X %d SÃO PAULO]\n", *golA6, *golB6);// PRECISA ALTERAR
			        break;
			    case 4:
			        printf("X  - [SANTOS %d X %d SÃO PAULO]\n", *golA6, *golB6);// PRECISA ALTERAR
			        break;
			    case 2:
			        printf("X  - [SANTOS %d X %d SÃO PAULO]\n", *golA6, *golB6); // PRECISA ALTERAR
			        break;
			    case 1:
			    	printf("3 - [SANTOS X SÃO PAULO]\n"); // PRECISA ALTERAR NUMERO
			    	break;
				}
				switch(*vencedor6) {// PRECISA ALTERAR
			    case 3:
			        printf("X  - [BAHIA %d X %d VITORIA]\n", *golA7, *golB7);// PRECISA ALTERAR
			        break;
			    case 4:
			        printf("X  - [BAHIA %d X %d VITORIA]\n", *golA7, *golB7);// PRECISA ALTERAR
			        break;
			    case 2:
			        printf("X  - [BAHIA %d X %d VITORIA]\n", *golA7, *golB7); // PRECISA ALTERAR
			        break;
			    case 1:
			    	printf("4 - [BAHIA X VITORIA]\n"); // PRECISA ALTERAR NUMERO
			    	break;
				}
				switch(*vencedor7) {// PRECISA ALTERAR
			    case 3:
			        printf("X  - [FLUMINENSE %d X %d BOTAFOGO]\n", *golA8, *golB8);// PRECISA ALTERAR
			        break;
			    case 4:
			        printf("X  - [FLUMINENSE %d X %d BOTAFOGO]\n", *golA8, *golB8);// PRECISA ALTERAR
			        break;
			    case 2:
			        printf("X  - [FLUMINENSE %d X %d BOTAFOGO]\n", *golA8, *golB8); // PRECISA ALTERAR
			        break;
			    case 1:
			    	printf("5 - [FLUMINENSE X BOTAFOGO]\n"); // PRECISA ALTERAR NUMERO
			    	break;
				}
		
				printf("6 - VOLTAR PARA MENU INICIAL\n");
				
				printf("\nSELECIONE: ");
	    		scanf("%d", &jogo);
	    		getchar();
	
	    		 if(jogo <= 6) {
	    		int entradaValida = 0;
				 
	    		switch (jogo) {
	    			case 1:
	    				if(*vencedor2 == 1){
						
	    				system("cls");
	    				printf("[PALMEIRAS X CORINTHIANS]\n\n");
	    				printf("INFO TEAMS:\nEMPATE: odd de %.2f\nTIME DA CASA: odd de %.2f\nTIME VISITANTE:odd de %.2f\n", oddempate, oddcasa, oddfora);
		    			
	        			do {
						printf("\nVai apostar em quem? ");
	    				fgets(time1, sizeof(time1), stdin);
	                    time1[strcspn(time1, "\n")] = 0;
	    				
	    				
	    				if(strcmp(time1, "palmeiras") == 0 || strcmp(time1, "Palmeiras") == 0) {
	    					strcpy(time1, brTeams[palmeiras]);
	    					strcpy(time2, brTeams[corinthians]);
	    					entradaValida++;
	    					
		    				printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    				
		    			//VERIFICAÇÃO DE SALDO, SE APOSTA FOR MAIOR QUE O SALDO, ELE PEDE OUTRO VALOR
		    			do{
						
	    					if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar(); 
        					goto pular;
        					break;
						}	
						} while (aposta > *saldo);
	        			} 
		    				
		    				
						
						 else if(strcmp(time1, "corinthians") == 0 || strcmp(time1, "Corinthians") == 0) {
	    					strcpy(time1, brTeams[corinthians]);
	    					strcpy(time2, brTeams[palmeiras]);
	    					entradaValida++;
	    					
		    				printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    			do{
						
		    				if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar();
							goto pular; 
        					break;
						} 
						}while (aposta > *saldo);
	        			} 
		    				
		    			
		    				
						 else if (strcmp(time1, "empate") == 0 || strcmp(time1, "Empate") == 0) {
	    					strcpy(time1, brTeams[palmeiras]);
	    					strcpy(time1, brTeams[corinthians]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    			do{
							
		    				if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar(); 
        					goto pular;
        					break;
						} 
						} while (aposta > *saldo);
	        			} 
		    				
		    		} while (!entradaValida);
		    				
						
						if(*vencedor2 == 1){
			                system("cls");
			                printf("Você escolheu assistir: Corinthians x Palmeiras\n");
			                corxpal(saldo, vencedor2, golA3, golB3, totalgol2 );
							printf("Pressione Enter para voltar ao menu de jogos...");
			                getchar(); // Para limpar o \n deixado pelo scanf
			                getchar();
			                
			                }

			            	if(strcmp(time1, "palmeiras") == 0 || strcmp(time1, "Palmeiras") == 0) {
	    					strcpy(time1, brTeams[palmeiras]);
	    					strcpy(time2, brTeams[corinthians]);
	    					
		    				if (*golB3 > *golA3) {
		    					
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    					
		    					
		    					
							} else if (*golB3 < *golA3) {
								*saldo = *saldo - aposta;
								
								
							}
	
						} else if(strcmp(time1, "corinthians") == 0 || strcmp(time1, "Corinthians") == 0) {
	    					strcpy(time1, brTeams[corinthians]);
	    					strcpy(time2, brTeams[palmeiras]);
	    				
		    				if (*golA3 > *golB3) {
	    					
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    				
		    					
		    					
							} else if (*golB3 > *golA3 || *golA3 == *golB3) {
								*saldo = *saldo - aposta;
								
							}
	
						} else if (strcmp(time1, "empate") == 0 || strcmp(time1, "Empate") == 0) {
	    					strcpy(time1, brTeams[palmeiras]);
	    					strcpy(time1, brTeams[corinthians]);
	    				
		    				if (*golA3 == *golB3) {
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    					
							} else {
								*saldo = *saldo - aposta;
								
							}
			            
			            }
	    
			        	} else if (*vencedor2 != 1) { //estatisticas da partida
			            	int golAeB = *golA3 + *golB3;
		                	system("cls");
		                	printf("===============Estatisticas do jogo===============\n");
		                	printf("R$%d reais\n", *saldo);
						    printf("[PALMEIRAS %d X %d CORINTHIANS]\n", *golB3, *golA3);
		                	printf("Total de Gols na partida: %d\n", golAeB);
		                	if(*totalgol2 > 0){
		                	printf("Total de Gols do Mvp: %d gol(s)\n", *totalgol2);
		                	} else  { 
		                	printf("Empate de Mvp, Sem destaques.\n");
							}
							
							printf("\nPressione ENTER para continuar...");
							getchar(); getchar(); 
		    				
		    				
		    			
						
						}
						
						
						
		    			
							break;
	    			
	    			case 2:

	    				if(*vencedor4 == 1){
						
	    				system("cls");
	    				printf("[FLAMENGO X VASCO]\n");
	    				printf("INFO TEAMS:\nEMPATE: odd de %.2f\nTIME DA CASA: odd de %.2f\nTIME VISITANTE:odd de %.2f\n", oddempate, oddcasa, oddfora);
		    			
	        			do {
						printf("\nVai apostar em quem? ");
	    				fgets(time1, sizeof(time1), stdin);
	                    time1[strcspn(time1, "\n")] = 0;
	    				
	    				
	    				if(strcmp(time1, "Flamengo") == 0 || strcmp(time1, "flamengo") == 0) {
	    					strcpy(time1, brTeams[flamengo]);
	    					strcpy(time2, brTeams[vasco]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    				
		    			//VERIFICAÇÃO DE SALDO, SE APOSTA FOR MAIOR QUE O SALDO, ELE PEDE OUTRO VALOR
		    			do{
						
	    					if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar(); 
        					goto pular;
        					break;
						}	
						} while (aposta > *saldo);
	        			} 
		    				
		    				
						
						 else if(strcmp(time1, "vasco") == 0 || strcmp(time1, "Vasco") == 0) {
	    					strcpy(time1, brTeams[vasco]);
	    					strcpy(time2, brTeams[flamengo]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    			do{
						
		    				if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar();
							goto pular; 
        					break;
						} 
						}while (aposta > *saldo);
	        			} 
		    				
		    			
		    				
						 else if(strcmp(time1, "empate") == 0 || strcmp(time1, "Empate") == 0) {
	    					strcpy(time1, brTeams[vasco]);
	    					strcpy(time2, brTeams[flamengo]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    			do{
							
		    				if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar(); 
        					goto pular;
        					break;
						} 
						} while (aposta > *saldo);
	        			} 
		    				
		    		} while (!entradaValida);
		    				
						
						if(*vencedor4 == 1){ //PRECISA ALTERAR
			                system("cls");
			                printf("Você escolheu assistir: Vasco x Flamengo\n");
			                flaxvas(saldo, vencedor4, golA5, golB5, totalgol4); //PRECISA ALTERAR
							printf("Pressione Enter para voltar ao menu de jogos...");
			                getchar();
			                getchar();
			                
			                }
			                
			                
			                
			                
			                
			            	if(strcmp(time1, "flamengo") == 0 || strcmp(time1, "Flamengo") == 0) {
	    					strcpy(time1, brTeams[vasco]);
	    					strcpy(time2, brTeams[flamengo]);
	    					
		    				if (*golB5 > *golA5) {
		    					
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    					
		    					
		    					
							} else if (*golB5 < *golA5 || *golA5 == *golB5) {
								*saldo = *saldo - aposta;
								
								
							}
	
						} else if(strcmp(time1, "vasco") == 0 || strcmp(time1, "Vasco") == 0) {
	    					strcpy(time1, brTeams[vasco]);
	    					strcpy(time2, brTeams[flamengo]);
	    				
		    				if (*golA5 > *golB5) {
	    					
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    				
		    					
		    					
							} else if (*golB5 > *golA5 || *golA5 == *golB5) {
								*saldo = *saldo - aposta;
								
							}
	
					} if(strcmp(time1, "empate") == 0 || strcmp(time1, "Empate") == 0) {
	    					strcpy(time1, brTeams[vasco]);
	    					strcpy(time2, brTeams[flamengo]);
	    				
		    				if (*golA5 == *golB5) {
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    					
							} else {
								*saldo = *saldo - aposta;
								
							}
			            
			            }
			   
			        	} else if (*golA8 != 1) { //estatisticas da partida
			            	int golAeB = *golA5 + *golB5;
		                	system("cls");
		                	printf("===============Estatisticas do jogo===============\n");
		                	printf("R$%d reais\n", *saldo);
						    printf("[FLAMENGO %d X %d VASCO]\n", *golB5, *golA5);
		                	printf("Total de Gols na partida: %d\n", golAeB);
		                	if(*totalgol4 > 0){
		                	printf("Total de Gols do Mvp: %d gol(s)\n", *totalgol4);
		                	} else  { 
		                	printf("Empate de Mvp, Sem destaques.\n");
							}
							
							printf("\nPressione ENTER para continuar...");
							getchar(); getchar(); 
		    				
		    				
		    			
						
						}
						break;
	    				
	    				
	    			case 3:
	    				
	    				if(*vencedor5 == 1){
						
	    				system("cls");
	    				printf("[SANTOS X SÃO PAULO]\n");
	    				printf("INFO TEAMS:\nEMPATE: odd de %.2f\nTIME DA CASA: odd de %.2f\nTIME VISITANTE:odd de %.2f\n", oddempate, oddcasa, oddfora);
		    			
	        			do {
						printf("\nVai apostar em quem? ");
	    				fgets(time1, sizeof(time1), stdin);
	                    time1[strcspn(time1, "\n")] = 0;
	    				
	    				
	    				if(strcmp(time1, "Santos") == 0 || strcmp(time1, "santos") == 0) {
	    					strcpy(time1, brTeams[santos]);
	    					strcpy(time2, brTeams[saoPaulo]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    				
		    			//VERIFICAÇÃO DE SALDO, SE APOSTA FOR MAIOR QUE O SALDO, ELE PEDE OUTRO VALOR
		    			do{
						
	    					if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar(); 
        					goto pular;
        					break;
						}	
						} while (aposta > *saldo);
	        			} 
		    				
		    				
						
						 if(strcmp(time1, "São Paulo") == 0 || strcmp(time1, "são paulo") == 0 || strcmp(time1, "Sao Paulo") == 0 || strcmp(time1,"sao paulo" ) == 0) {
	    					strcpy(time1, brTeams[saoPaulo]);
	    					strcpy(time2, brTeams[santos]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    			do{
						
		    				if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar();
							goto pular; 
        					break;
						} 
						}while (aposta > *saldo);
	        			} 
		    				
		    			
		    				
						 if (strcmp(time1, "empate") == 0 || strcmp(time1, "Empate") == 0) {
	    					strcpy(time1, brTeams[santos]);
	    					strcpy(time1, brTeams[saoPaulo]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    			do{
							
		    				if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar(); 
        					goto pular;
        					break;
						} 
						} while (aposta > *saldo);
	        			} 
		    				
		    		} while (!entradaValida);
		    				
						
						if(*vencedor5 == 1){ //PRECISA ALTERAR
		                system("cls");
		                printf("Você escolheu assistir: Santos x São Paulo\n");//PRECISA ALTERAR
		                sanxsao(saldo, vencedor5, golA6, golB7, totalgol5);//PRECISA ALTERAR
		                printf("Pressione Enter para voltar ao menu de jogos...");
		                getchar();
		                getchar();
			        	}
			        	
			                
			            	if(strcmp(time1, "Santos") == 0 || strcmp(time1, "santos") == 0) {
	    					strcpy(time1, brTeams[santos]);
	    					strcpy(time2, brTeams[saoPaulo]);
	    					
		    				if (*golA6 > *golB7) {
		    					
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    					
		    					
		    					
							} else if (*golA6 < *golB7 || *golA6 == *golB7) {
								*saldo = *saldo - aposta;
								
								
							}
	
						} else if(strcmp(time1, "São Paulo") == 0 || strcmp(time1, "são paulo") == 0 || strcmp(time1, "Sao Paulo") == 0 || strcmp(time1,"sao paulo" ) == 0) {
	    					strcpy(time1, brTeams[saoPaulo]);
	    					strcpy(time2, brTeams[santos]);
	    				
		    				if (*golB7 > *golA6) {
	    					
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    				
		    					
		    					
							} else if (*golA6 > *golB7 || *golA6 == *golB7) {
								*saldo = *saldo - aposta;
								
							}
	
					} if (strcmp(time1, "empate") == 0 || strcmp(time1, "Empate") == 0) {
	    					strcpy(time1, brTeams[santos]);
	    					strcpy(time1, brTeams[saoPaulo]);
	    				
		    				if (*golA6 == *golB7) {
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    					
							} else {
								*saldo = *saldo - aposta;
								
							}
			            
			            }
			   
			        	} else if (*vencedor5 != 1) { //estatisticas da partida
			            	int golAeB = *golA6 + *golB7;
		                	system("cls");
		                	printf("===============Estatisticas do jogo===============\n");
		                	printf("R$%d reais\n", *saldo);
						    printf("[SANTOS %d X %d SÃO PAULO]\n", *golA6, *golB7);
		                	printf("Total de Gols na partida: %d\n", golAeB);
		                	if(*totalgol4 > 0){
		                	printf("Total de Gols do Mvp: %d gol(s)\n", *totalgol4);
		                	} else  { 
		                	printf("Empate de Mvp, Sem destaques.\n");
							}
							
							printf("\nPressione ENTER para continuar...");
							getchar(); getchar(); 
		    				
		    				
		    			
						
						}
						break;
						
						
	    			case 4:
	    			
	    			
	    			if(*vencedor6 == 1){
						
	    				system("cls");
	    				printf("[BAHIA X VITÓRIA]\n");
	    				printf("INFO TEAMS:\nEMPATE: odd de %.2f\nTIME DA CASA: odd de %.2f\nTIME VISITANTE:odd de %.2f\n", oddempate, oddcasa, oddfora);
		    			
	        			do {
						printf("\nVai apostar em quem? ");
	    				fgets(time1, sizeof(time1), stdin);
	                    time1[strcspn(time1, "\n")] = 0;
	    				
	    				
	    				if(strcmp(time1, "bahia") == 0 || strcmp(time1, "Bahia") == 0) {
	    					strcpy(time1, brTeams[bahia]);
	    					strcpy(time2, brTeams[vitoria]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    				
		    			//VERIFICAÇÃO DE SALDO, SE APOSTA FOR MAIOR QUE O SALDO, ELE PEDE OUTRO VALOR
		    			do{
						
	    					if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar(); 
        					goto pular;
        					break;
						}	
						} while (aposta > *saldo);
	        			} 
		    				
		    				
						
						 if(strcmp(time1, "vitoria") == 0 || strcmp(time1, "Vitoria") == 0 || strcmp(time1, "vitória") == 0 || strcmp(time1, "Vitória") == 0) {
	    					strcpy(time1, brTeams[vitoria]);
	    					strcpy(time2, brTeams[bahia]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    			do{
						
		    				if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar();
							goto pular; 
        					break;
						} 
						}while (aposta > *saldo);
	        			} 
		    				
		    			
		    				
						 if (strcmp(time1, "empate") == 0 || strcmp(time1, "Empate") == 0) {
	    					strcpy(time1, brTeams[bahia]);
	    					strcpy(time1, brTeams[vitoria]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    			do{
							
		    				if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar(); 
        					goto pular;
        					break;
						} 
						} while (aposta > *saldo);
	        			} 
		    				
		    		} while (!entradaValida);
		    				
						
						if(*vencedor6 == 1){ //PRECISA ALTERAR
		                system("cls");
		                printf("Você escolheu assistir: Bahia x Vitoria\n");//PRECISA ALTERAR
		                bavi(saldo, vencedor6, golA7, golB7, totalgol6);//PRECISA ALTERAR
		                printf("Pressione Enter para voltar ao menu de jogos...");
		                getchar();
		                getchar();
			        	}
			        	
			                
			            	if(strcmp(time1, "bahia") == 0 || strcmp(time1, "Bahia") == 0) {
	    					strcpy(time1, brTeams[bahia]);
	    					strcpy(time2, brTeams[vitoria]);
	    					
		    				if (*golA7 > *golB7) {
		    					
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    					
		    					
		    					
							} else if (*golA7 < *golB7 || *golA7 == *golB7) {
								*saldo = *saldo - aposta;
								
								
							}
	
						} else if(strcmp(time1, "vitoria") == 0 || strcmp(time1, "Vitoria") == 0 || strcmp(time1, "vitória") == 0 || strcmp(time1, "Vitória") == 0) {
	    					strcpy(time1, brTeams[vitoria]);
	    					strcpy(time2, brTeams[bahia]);
	    				
		    				if (*golB7 > *golA7) {
	    					
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    				
		    					
		    					
							} else if (*golA7 > *golB7 || *golA7 == *golB7) {
								*saldo = *saldo - aposta;
								
							}
	
					} if (strcmp(time1, "empate") == 0 || strcmp(time1, "Empate") == 0) {
	    					strcpy(time1, brTeams[bahia]);
	    					strcpy(time1, brTeams[vitoria]);
	    				
		    				if (*golA7 == *golB7) {
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    					
							} else {
								*saldo = *saldo - aposta;
								
							}
			            
			            }
			   
			        	} else if (*vencedor6 != 1) { //estatisticas da partida
			            	int golAeB = *golA7 + *golB7;
		                	system("cls");
		                	printf("===============Estatisticas do jogo===============\n");
		                	printf("R$%d reais\n", *saldo);
						    printf("[BAHIA %d X %d VITORIA]\n", *golA7, *golB7);
		                	printf("Total de Gols na partida: %d\n", golAeB);
		                	if(*totalgol6 > 0){
		                	printf("Total de Gols do Mvp: %d gol(s)\n", *totalgol6);
		                	} else  { 
		                	printf("Empate de Mvp, Sem destaques.\n");
							}
							
							printf("\nPressione ENTER para continuar...");
							getchar(); getchar(); 
		    				
		    				
		    			
						
						}
						break;
	    				
	    				
	    				
	    				
	    				
	    				
	    				
	    				
	    				
	    				
	    				
	    			case 5:
	    				if(*vencedor7 == 1){
						
	    				system("cls");
	    				printf("[FLUMINENSE X BOTAFOGO]\n");
	    				printf("INFO TEAMS:\nEMPATE: odd de %.2f\nTIME DA CASA: odd de %.2f\nTIME VISITANTE:odd de %.2f\n", oddempate, oddcasa, oddfora);
		    			
	        			do {
						printf("\nVai apostar em quem? ");
	    				fgets(time1, sizeof(time1), stdin);
	                    time1[strcspn(time1, "\n")] = 0;
	    				
	    				
	    				if(strcmp(time1, "botafogo") == 0 || strcmp(time1, "Botafogo") == 0) {
	    					strcpy(time1, brTeams[botafogo]);
	    					strcpy(time2, brTeams[fluminense]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    				
		    			//VERIFICAÇÃO DE SALDO, SE APOSTA FOR MAIOR QUE O SALDO, ELE PEDE OUTRO VALOR
		    			do{
						
	    					if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar(); 
        					goto pular;
        					break;
						}	
						} while (aposta > *saldo);
	        			} 
		    				
		    				
						
						 if(strcmp(time1, "Fluminense") == 0 || strcmp(time1, "fluminense") == 0) {
	    					strcpy(time1, brTeams[fluminense]);
	    					strcpy(time2, brTeams[botafogo]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    			do{
						
		    				if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar();
							goto pular; 
        					break;
						} 
						}while (aposta > *saldo);
	        			} 
		    				
		    			
		    				
						 if (strcmp(time1, "empate") == 0 || strcmp(time1, "Empate") == 0) {
	    					strcpy(time1, brTeams[fluminense]);
	    					strcpy(time1, brTeams[botafogo]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    			do{
							
		    				if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar(); 
        					goto pular;
        					break;
						} 
						} while (aposta > *saldo);
	        			} 
		    				
		    		} while (!entradaValida);
		    				
						
						if(*vencedor7 == 1){ //PRECISA ALTERAR
		                system("cls");
		                printf("Você escolheu assistir: Fluminense x Bota Fogo\n");//PRECISA ALTERAR
		                fluxbota(saldo, vencedor7, golA8, golB8, totalgol7);//PRECISA ALTERAR
		                printf("Pressione Enter para voltar ao menu de jogos...");
		                getchar();
		                getchar();
			        	}
			        	
			                
			            	if(strcmp(time1, "botafogo") == 0 || strcmp(time1, "Botafogo") == 0) {
	    					strcpy(time1, brTeams[botafogo]);
	    					strcpy(time2, brTeams[fluminense]);
	    					
		    				if (*golA8 > *golB8) {
		    					
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    					
		    					
		    					
							} else if (*golA8 < *golB8 || *golA8 == *golB8) {
								*saldo = *saldo - aposta;
								
								
							}
	
						} else if(strcmp(time1, "Fluminense") == 0 || strcmp(time1, "fluminense") == 0) {
	    					strcpy(time1, brTeams[fluminense]);
	    					strcpy(time2, brTeams[botafogo]);
	    				
		    				if (*golB8 > *golA8) {
	    					
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    				
		    					
		    					
							} else if (*golA8 > *golB8 || *golA8 == *golB8) {
								*saldo = *saldo - aposta;
								
							}
	
					} if (strcmp(time1, "empate") == 0 || strcmp(time1, "Empate") == 0) {
	    					strcpy(time1, brTeams[fluminense]);
	    					strcpy(time1, brTeams[botafogo]);
	    				
		    				if (*golA8 == *golB8) {
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    					
							} else {
								*saldo = *saldo - aposta;
								
							}
			            
			            }
			   
			        	} else if (*vencedor7 != 1) { //estatisticas da partida
			            	int golAeB = *golA8 + *golB8; //PRECISA ALTERAR
		                	system("cls");
		                	printf("===============Estatisticas do jogo===============\n");
		                	printf("R$%d reais\n", *saldo);
						    printf("[BOTAFOGO %d X %d FLUMINENSE]\n", *golA8, *golB8);
		                	printf("Total de Gols na partida: %d\n", golAeB);
		                	if(*totalgol7 > 0){
		                	printf("Total de Gols do Mvp: %d gol(s)\n", *totalgol7);
		                	} else  { 
		                	printf("Empate de Mvp, Sem destaques.\n");
							}
							
							printf("\nPressione ENTER para continuar...");
							getchar(); getchar(); 
		    				
		    				
		    			
						
						}
						break;
						
						case 6:
							printf("Voltando...");
		    				Sleep(1000);
		    				goto inicio;
		    				
		    			} 
	    				
	    				
	    			
	    				
	    			
		}else if(jogo == 7) {
	 	printf("Voltando...");
	    Sleep(1000);
	 	goto inicio;
	    
	 	} else {
	 		printf("Não entendi...");
	 		Sleep(1000);
	 		goto brasileirao;
	 	}
	 	goto pular;
	 // CHAMPIONS
	 	champions:
	 		pular1:
	 			
	    	case 2:
	    		system("cls");
	    		printf("JOGOS AO VIVO: OITAVAS DA CHAMPIONS\n\n");
	    		
	    		switch(*vencedor1) {
			    case 3:
			        printf("X  - [REAL MADRID %d X %d BARCELONA]\n", *golA1, *golB1);
			        break;
			    case 4:
			        printf("X  - [REAL MADRID %d X %d BARCELONA]\n", *golA1, *golB1);
			        break;
			    case 2:
			        printf("X  - [REAL MADRID %d X %d BARCELONA]\n", *golA1, *golB1);
			        break;
			    case 1:
			        printf("1 - [REAL MADRID X BARCELONA]\n");
			        break;
			}
			
			switch(*vencedor8) {
			    case 3:
			        printf("X  - [PSG %d X %d ARSENAL]\n", *golA9, *golB9);
			        break;
			    case 4:
			        printf("X  - [PSG %d X %d ARSENAL]\n", *golA9, *golB9);
			        break;
			    case 2:
			        printf("X  - [PSG %d X %d ARSENAL]\n", *golA9, *golB9);
			        break;
			    case 1:
			        printf("2 - [PSG X ARSENAL]\n");
			        break;
			}
			
			switch(*vencedor) {
			    case 3:
			        printf("X  - [BAYERN MUNIQUE %d X %d LIVERPOOL]\n", *golA2, *golB2);
			        break;
			    case 4:
			        printf("X  - [BAYERN MUNIQUE %d X %d LIVERPOOL]\n", *golA2, *golB2);
			        break;
			    case 2:
			        printf("X  - [BAYERN MUNIQUE %d X %d LIVERPOOL]\n", *golA2, *golB2);
			        break;
			    case 1:
			        printf("3 - [BAYERN MUNIQUE X LIVERPOOL]\n");
			        break;
			}
			
			switch(*vencedor9) {
			    case 3:
			        printf("X  - [MAN UNITED %d X %d MAN CITY]\n", *golA10, *golB10);
			        break;
			    case 4:
			        printf("X  - [MAN UNITED %d X %d MAN CITY]\n", *golA10, *golB10);
			        break;
			    case 2:
			        printf("X  - [MAN UNITED %d X %d MAN CITY]\n", *golA10, *golB10);
			        break;
			    case 1:
			        printf("4 - [MAN UNITED X MAN CITY]\n");
			        break;
			}
			
			switch(*vencedor10) {
			    case 3:
			        printf("X  - [INTER %d X %d MILAN]\n", *golA11, *golB11);
			        break;
			    case 4:
			        printf("X  - [INTER %d X %d MILAN]\n", *golA11, *golB11);
			        break;
			    case 2:
			        printf("X  - [INTER %d X %d MILAN]\n", *golA11, *golB11);
			        break;
			    case 1:
			        printf("5 - [INTER X MILAN]\n");
			        break;
			}
			
			printf("6 - VOLTAR PARA MENU INICIAL\n");
	    		
	    		printf("\nSELECIONE: ");
	    		scanf("%d", &jogo);
	    		getchar();
				
				if (jogo <= 6) {
				int entradaValida = 0;
					
					switch (jogo) {
		    			case 1:
		    			if(*vencedor1 == 1){
						
	    				system("cls");
		    			printf("[REAL MADRID X BARCELONA]\n");
	    				printf("INFO TEAMS:\nEMPATE: odd de %.2f\nTIME DA CASA: odd de %.2f\nTIME VISITANTE:odd de %.2f\n", oddempate, oddcasa, oddfora);
		    			
	        			do {
						printf("\nVai apostar em quem? ");
	    				fgets(time1, sizeof(time1), stdin);
	                    time1[strcspn(time1, "\n")] = 0;
	    				
	    				
	    				if(strcmp(time1, "Real madrid") == 0 || strcmp(time1, "Real Madrid") == 0 || strcmp(time1, "real madrid") == 0 || strcmp(time1, "real") == 0 || strcmp(time1, "Real") == 0) {
	    					strcpy(time1, europaTeams[realMadrid]);
	    					strcpy(time2, europaTeams[barcelona]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    				
		    			//VERIFICAÇÃO DE SALDO, SE APOSTA FOR MAIOR QUE O SALDO, ELE PEDE OUTRO VALOR
		    			do{
						
	    					if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar(); 
        					goto pular1;
        					break;
						}	
						} while (aposta > *saldo);
	        			} 
		    				
		    				
						
						 if(strcmp(time1, "barcelona") == 0 || strcmp(time1, "Barcelona") == 0) {
		    					strcpy(time1, europaTeams[barcelona]);
		    					strcpy(time2, europaTeams[realMadrid]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    			do{
						
		    				if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar();
							goto pular1; 
        					break;
						} 
						}while (aposta > *saldo);
	        			} 
		    				
		    			
		    				
						 if (strcmp(time1, "empate") == 0 || strcmp(time1, "Empate") == 0) {
	    					strcpy(time1, europaTeams[barcelona]);
	    					strcpy(time1, europaTeams[realMadrid]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    			do{
							
		    				if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar(); 
        					goto pular1;
        					break;
						} 
						} while (aposta > *saldo);
	        			} 
		    				
		    		} while (!entradaValida);
		    				
						
						if(*vencedor1 == 1){
		                system("cls");
		                printf("Você escolheu assistir: Barcelona x Real Madrid\n");
		                realxbar(saldo, vencedor1, golA1, golB1, totalgol1);
		                printf("Pressione Enter para voltar ao menu de jogos...");
		                getchar();
		                getchar();
			        	}
			        	
			                
			            	if(strcmp(time1, "Real madrid") == 0 || strcmp(time1, "Real Madrid") == 0 || strcmp(time1, "real madrid") == 0 || strcmp(time1, "real") == 0 || strcmp(time1, "Real") == 0) {
		    					strcpy(time1, europaTeams[realMadrid]);
		    					strcpy(time2, europaTeams[barcelona]);
	    					
		    				if (*golA1 > *golB1) {
		    					
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    					
		    					
		    					
							} else if (*golA1 < *golB1 || *golA1 == *golB1) {
								*saldo = *saldo - aposta;
								
								
							}
	
						} else if(strcmp(time1, "barcelona") == 0 || strcmp(time1, "Barcelona") == 0) {
		    					strcpy(time1, europaTeams[barcelona]);
		    					strcpy(time2, europaTeams[realMadrid]);
	    				
		    				if (*golB1 > *golA1) {
	    					
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    				
		    					
		    					
							} else if (*golA1 > *golB1 || *golA1 == *golB1) {
								*saldo = *saldo - aposta;
								
							}
	
					} if (strcmp(time1, "empate") == 0 || strcmp(time1, "Empate") == 0) {
	    					strcpy(time1, europaTeams[barcelona]);
	    					strcpy(time1, europaTeams[realMadrid]);
	    				
		    				if (*golA1 == *golB1) {
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    					
							} else {
								*saldo = *saldo - aposta;
								
							}
			            
			            }
			   
			        	} else if (*vencedor1 != 1) { //estatisticas da partida
			            	int golAeB = *golA1 + *golB1; //PRECISA ALTERAR
		                	system("cls");
		                	printf("===============Estatisticas do jogo===============\n");
		                	printf("R$%d reais\n", *saldo);
						    printf("[REAL MADRID %d X %d BARCELONA]\n", *golA9, *golB1);
		                	printf("Total de Gols na partida: %d\n", golAeB);
		                	if(*totalgol1 > 0){
		                	printf("Total de Gols do Mvp: %d gol(s)\n", *totalgol1);
		                	} else  { 
		                	printf("Empate de Mvp, Sem destaques.\n");
							}
							
							printf("\nPressione ENTER para continuar...");
							getchar(); getchar(); 
		    				
		    				
		    			
						
						}
						break;
	    				
	    				case 2:
	    					
	    					
						if(*vencedor8 == 1){
	    				system("cls");
		    			printf("[PSG X ARSENAL]\n");
	    				printf("INFO TEAMS:\nEMPATE: odd de %.2f\nTIME DA CASA: odd de %.2f\nTIME VISITANTE:odd de %.2f\n", oddempate, oddcasa, oddfora);
		    			
	        			do {
						printf("\nVai apostar em quem? ");
	    				fgets(time1, sizeof(time1), stdin);
	                    time1[strcspn(time1, "\n")] = 0;
	    				
	    				
	    				if(strcmp(time1, "psg") == 0 || strcmp(time1, "PSG") == 0) {
		    					strcpy(time1, europaTeams[psg]);
		    					strcpy(time2, europaTeams[arsenal]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    				
		    			//VERIFICAÇÃO DE SALDO, SE APOSTA FOR MAIOR QUE O SALDO, ELE PEDE OUTRO VALOR
		    			do{
						
	    					if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar(); 
        					goto pular1;
        					break;
						}	
						} while (aposta > *saldo);
	        			} 
		    				
		    				
						
						 if(strcmp(time1, "arsenal") == 0 || strcmp(time1, "Arsenal") == 0) {
		    					strcpy(time1, europaTeams[arsenal]);
		    					strcpy(time2, europaTeams[psg]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    			do{
						
		    				if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar();
							goto pular1; 
        					break;
						} 
						}while (aposta > *saldo);
	        			} 
		    				
		    			
		    				
						 if (strcmp(time1, "empate") == 0 || strcmp(time1, "Empate") == 0) {
	    					strcpy(time1, europaTeams[arsenal]);
	    					strcpy(time1, europaTeams[psg]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    			do{
							
		    				if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar(); 
        					goto pular1;
        					break;
						} 
						} while (aposta > *saldo);
	        			} 
		    				
		    		} while (!entradaValida);
		    				
						
						if(*vencedor8 == 1){ //PRECISA ALTERAR
		                system("cls");
		                printf("Você escolheu assistir: PSG x Arsenal\n");//PRECISA ALTERAR
		                psgxars(saldo, vencedor8, golA9, golB9, totalgol8);//PRECISA ALTERAR
		                printf("Pressione Enter para voltar ao menu de jogos...");
		                getchar();
		                getchar();
			        	}
			        	
			                
			            	if(strcmp(time1, "psg") == 0 || strcmp(time1, "PSG") == 0) {
		    					strcpy(time1, europaTeams[psg]);
		    					strcpy(time2, europaTeams[arsenal]);
	    					
		    				if (*golA9 > *golB9) {
		    					
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    					
		    					
		    					
							} else if (*golA9 < *golB9 || *golA9 == *golB9) {
								*saldo = *saldo - aposta;
								
								
							}
	
						} else if(strcmp(time1, "arsenal") == 0 || strcmp(time1, "Arsenal") == 0) {
		    					strcpy(time1, europaTeams[arsenal]);
		    					strcpy(time2, europaTeams[psg]);
	    				
		    				if (*golB9 > *golA9) {
	    					
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    				
		    					
		    					
							} else if (*golA9 > *golB9 || *golA9 == *golB9) {
								*saldo = *saldo - aposta;
								
							}
	
					} if (strcmp(time1, "empate") == 0 || strcmp(time1, "Empate") == 0) {
	    					strcpy(time1, europaTeams[arsenal]);
	    					strcpy(time1, europaTeams[psg]);
	    				
		    				if (*golA9 == *golB9) {
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    					
							} else {
								*saldo = *saldo - aposta;
								
							}
			            
			            }
			   
			        	} else if (*vencedor8 != 1) { //estatisticas da partida
			            	int golAeB = *golA9 + *golB9; //PRECISA ALTERAR
		                	system("cls");
		                	printf("===============Estatisticas do jogo===============\n");
		                	printf("R$%d reais\n", *saldo);
						    printf("[PSG %d X %d ARSENAL]\n", *golA9, *golB9);
		                	printf("Total de Gols na partida: %d\n", golAeB);
		                	if(*totalgol8 > 0){
		                	printf("Total de Gols do Mvp: %d gol(s)\n", *totalgol8);
		                	} else  { 
		                	printf("Empate de Mvp, Sem destaques.\n");
							}
							
							printf("\nPressione ENTER para continuar...");
							getchar(); getchar(); 
		    				
		    				
		    			
						
						}
						break;
		    				
						case 3:
							
						if(*vencedor == 1){
	    				system("cls");
		    			printf("[LIVERPOOL X BAYERN DE MUNICH]\n");
	    				printf("INFO TEAMS:\nEMPATE: odd de %.2f\nTIME DA CASA: odd de %.2f\nTIME VISITANTE:odd de %.2f\n", oddempate, oddcasa, oddfora);
		    			
	        			do {
						printf("\nVai apostar em quem? ");
	    				fgets(time1, sizeof(time1), stdin);
	                    time1[strcspn(time1, "\n")] = 0;
	    				
	    				
	    				if(strcmp(time1, "bayern") == 0 || strcmp(time1, "Bayern") == 0 || strcmp(time1, "bayer") == 0) {
		    					strcpy(time1, europaTeams[bayerM]);
		    					strcpy(time2, europaTeams[liverpool]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    				
		    			//VERIFICAÇÃO DE SALDO, SE APOSTA FOR MAIOR QUE O SALDO, ELE PEDE OUTRO VALOR
		    			do{
						
	    					if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar(); 
        					goto pular1;
        					break;
						}	
						} while (aposta > *saldo);
	        			} 
		    				
		    				
						
						 if(strcmp(time1, "liverpool") == 0 || strcmp(time1, "Liverpool") == 0) {
	    					strcpy(time1, europaTeams[liverpool]);
	    					strcpy(time2, europaTeams[bayerM]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    			do{
						
		    				if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar();
							goto pular1; 
        					break;
						} 
						}while (aposta > *saldo);
	        			} 
		    				
		    			
		    				
						if (strcmp(time1, "empate") == 0 || strcmp(time1, "Empate") == 0) {
	    					strcpy(time1, europaTeams[liverpool]);
	    					strcpy(time1, europaTeams[bayerM]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    			do{
							
		    				if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar(); 
        					goto pular1;
        					break;
						} 
						} while (aposta > *saldo);
	        			} 
		    				
		    		} while (!entradaValida);
		    				
						
						if(*vencedor == 1){
		                system("cls");
		                printf("Você escolheu assistir: Bayern Munique x Liverpool\n");
		                bayerxceltic(saldo, vencedor, golA2, golB2, totalgol);
		                printf("Pressione Enter para voltar ao menu de jogos...");
		                getchar();
		                getchar();
			        	}
			        	
			                
			            	if(strcmp(time1, "bayern") == 0 || strcmp(time1, "Bayern") == 0 || strcmp(time1, "bayer") == 0) {
		    					strcpy(time1, europaTeams[bayerM]);
		    					strcpy(time2, europaTeams[liverpool]);
	    					
		    				if (*golA2 > *golB2) {
		    					
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    					
		    					
		    					
							} else if (*golA2 < *golB2 || *golA2 == *golB2) {
								*saldo = *saldo - aposta;
								
								
							}
	
						} else if(strcmp(time1, "liverpool") == 0 || strcmp(time1, "Liverpool") == 0) {
		    					strcpy(time1, europaTeams[liverpool]);
		    					strcpy(time2, europaTeams[bayerM]);
	    				
		    				if (*golB2 > *golA2) {
	    					
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    				
		    					
		    					
							} else if (*golA2 > *golB2 || *golA2 == *golB2) {
								*saldo = *saldo - aposta;
								
							}
	
					} if (strcmp(time1, "empate") == 0 || strcmp(time1, "Empate") == 0) {
	    					strcpy(time1, europaTeams[liverpool]);
	    					strcpy(time1, europaTeams[bayerM]);
	    				
		    				if (*golA2 == *golB2) {
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    					
							} else {
								*saldo = *saldo - aposta;
								
							}
			            
			            }
			   
			        	} else if (*vencedor != 1) { //estatisticas da partida
			            	int golAeB = *golA2 + *golB2; //PRECISA ALTERAR
		                	system("cls");
		                	printf("===============Estatisticas do jogo===============\n");
		                	printf("R$%d reais\n", *saldo);
						    printf("[BAYERN %d X %d LIVERPOOL]\n", *golA2, *golB2);
		                	printf("Total de Gols na partida: %d\n", golAeB);
		                	if(*totalgol > 0){
		                	printf("Total de Gols do Mvp: %d gol(s)\n", *totalgol);
		                	} else  { 
		                	printf("Empate de Mvp, Sem destaques.\n");
							}
							
							printf("\nPressione ENTER para continuar...");
							getchar(); getchar(); 
		    				
		    				
		    			
						
						}
						break;
		    				
		    			
		    			case 4:
		    				
		    			if(*vencedor9 == 1){
	    				system("cls");
		    			printf("[MAN UNITED X MAN CITY]\n");
	    				printf("INFO TEAMS:\nEMPATE: odd de %.2f\nTIME DA CASA: odd de %.2f\nTIME VISITANTE:odd de %.2f\n", oddempate, oddcasa, oddfora);
		    			
	        			do {
						printf("\nVai apostar em quem? ");
	    				fgets(time1, sizeof(time1), stdin);
	                    time1[strcspn(time1, "\n")] = 0;
	    				
	    				
	    				if(strcmp(time1, "city") == 0 || strcmp(time1, "City") == 0) {
		    					strcpy(time1, europaTeams[manCity]);
		    					strcpy(time2, europaTeams[manUnited]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    				
		    			//VERIFICAÇÃO DE SALDO, SE APOSTA FOR MAIOR QUE O SALDO, ELE PEDE OUTRO VALOR
		    			do{
						
	    					if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar(); 
        					goto pular1;
        					break;
						}	
						} while (aposta > *saldo);
	        			} 
		    				
		    				
						
						 if(strcmp(time1, "united") == 0 || strcmp(time1, "United") == 0) {
	    					strcpy(time1, europaTeams[manUnited]);
	    					strcpy(time2, europaTeams[manCity]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    			do{
						
		    				if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar();
							goto pular1; 
        					break;
						} 
						}while (aposta > *saldo);
	        			} 
		    				
		    			
		    				
						if (strcmp(time1, "empate") == 0 || strcmp(time1, "Empate") == 0) {
	    					strcpy(time1, europaTeams[manUnited]);
	    					strcpy(time1, europaTeams[manCity]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    			do{
							
		    				if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar(); 
        					goto pular1;
        					break;
						} 
						} while (aposta > *saldo);
	        			} 
		    				
		    		} while (!entradaValida);
		    				
						
						if(*vencedor9 == 1){ //PRECISA ALTERAR
		                system("cls");
		                printf("Você escolheu assistir: Man United x Man City\n");//PRECISA ALTERAR
		                untxcity(saldo, vencedor9, golA10, golB10, totalgol9);//PRECISA ALTERAR
		                printf("Pressione Enter para voltar ao menu de jogos...");
		                getchar();
		                getchar();
			        	}
			        	
			                
			            	if(strcmp(time1, "city") == 0 || strcmp(time1, "City") == 0) {
		    					strcpy(time1, europaTeams[manCity]);
		    					strcpy(time2, europaTeams[manUnited]);
	    					
		    				if (*golA10 > *golB10) {
		    					
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    					
		    					
		    					
							} else if (*golA10 < *golB10 || *golA10 == *golB10) {
								*saldo = *saldo - aposta;
								
								
							}
	
						} else if(strcmp(time1, "united") == 0 || strcmp(time1, "United") == 0) {
		    					strcpy(time1, europaTeams[manUnited]);
		    					strcpy(time2, europaTeams[manCity]);
	    				
		    				if (*golB10 > *golA10) {
	    					
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    				
		    					
		    					
							} else if (*golA10 > *golB10 || *golA10 == *golB10) {
								*saldo = *saldo - aposta;
								
							}
	
					} if (strcmp(time1, "empate") == 0 || strcmp(time1, "Empate") == 0) {
	    					strcpy(time1, europaTeams[manUnited]);
	    					strcpy(time1, europaTeams[manCity]);
	    				
		    				if (*golA10 == *golB10) {
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    					
							} else {
								*saldo = *saldo - aposta;
								
							}
			            
			            }
			   
			        	} else if (*vencedor9 != 1) { //estatisticas da partida
			            	int golAeB = *golA10 + *golB10; //PRECISA ALTERAR
		                	system("cls");
		                	printf("===============Estatisticas do jogo===============\n");
		                	printf("R$%d reais\n", *saldo);
						    printf("[MAN UNITED %d X %d MAN CITY]\n", *golA10, *golB10);
		                	printf("Total de Gols na partida: %d\n", golAeB);
		                	if(*totalgol9 > 0){
		                	printf("Total de Gols do Mvp: %d gol(s)\n", *totalgol9);
		                	} else  { 
		                	printf("Empate de Mvp, Sem destaques.\n");
							}
							
							printf("\nPressione ENTER para continuar...");
							getchar(); getchar(); 
		    				
		    				
		    			
						
						}
						break;
		    				
		    				
						case 5:
						if(*vencedor10 == 1){
	    				system("cls");
		    			printf("[MILAN X INTERNAZIONALE]\n");
	    				printf("INFO TEAMS:\nEMPATE: odd de %.2f\nTIME DA CASA: odd de %.2f\nTIME VISITANTE:odd de %.2f\n", oddempate, oddcasa, oddfora);
		    			
	        			do {
						printf("\nVai apostar em quem? ");
	    				fgets(time1, sizeof(time1), stdin);
	                    time1[strcspn(time1, "\n")] = 0;
	    				
	    				
	    				if(strcmp(time1, "milan") == 0 || strcmp(time1, "Milan") == 0) {
		    					strcpy(time1, europaTeams[milan]);
		    					strcpy(time2, europaTeams[inter]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    				
		    			//VERIFICAÇÃO DE SALDO, SE APOSTA FOR MAIOR QUE O SALDO, ELE PEDE OUTRO VALOR
		    			do{
						
	    					if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar(); 
        					goto pular1;
        					break;
						}	
						} while (aposta > *saldo);
	        			} 
		    				
		    				
						
						 if(strcmp(time1, "inter") == 0 || strcmp(time1, "internazionale") == 0) {
		    					strcpy(time1, europaTeams[inter]);
		    					strcpy(time2, europaTeams[milan]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    			do{
						
		    				if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar();
							goto pular1; 
        					break;
						} 
						}while (aposta > *saldo);
	        			} 
		    				
		    			
		    				
						if (strcmp(time1, "empate") == 0 || strcmp(time1, "Empate") == 0) {
	    					strcpy(time1, europaTeams[inter]);
	    					strcpy(time1, europaTeams[milan]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    			do{
							
		    				if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar(); 
        					goto pular1;
        					break;
						} 
						} while (aposta > *saldo);
	        			} 
		    				
		    		} while (!entradaValida);
		    				
						
						if(*vencedor10 == 1){ //PRECISA ALTERAR
		                system("cls");
		                printf("Você escolheu assistir: Inter x Milan\n");//PRECISA ALTERAR
		                interxmil(saldo, vencedor10, golA11, golB11, totalgol10);//PRECISA ALTERAR
		                printf("Pressione Enter para voltar ao menu de jogos...");
		                getchar();
		                getchar();
			        	}
			        	
			                
			            	if(strcmp(time1, "milan") == 0 || strcmp(time1, "Milan") == 0) {
		    					strcpy(time1, europaTeams[milan]);
		    					strcpy(time2, europaTeams[inter]);
	    					
		    				if (*golA10 > *golB10) {
		    					
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    					
		    					
		    					
							} else if (*golA10 < *golB10 || *golA10 == *golB10) {
								*saldo = *saldo - aposta;
								
								
							}
	
						} else if(strcmp(time1, "inter") == 0 || strcmp(time1, "internazionale") == 0) {
		    					strcpy(time1, europaTeams[inter]);
		    					strcpy(time2, europaTeams[milan]);
	    				
		    				if (*golB10 > *golA10) {
	    					
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    				
		    					
		    					
							} else if (*golA10 > *golB10 || *golA10 == *golB10) {
								*saldo = *saldo - aposta;
								
							}
	
					} if (strcmp(time1, "empate") == 0 || strcmp(time1, "Empate") == 0) {
	    					strcpy(time1, europaTeams[inter]);
	    					strcpy(time1, europaTeams[milan]);
	    				
		    				if (*golA10 == *golB10) {
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    					
							} else {
								*saldo = *saldo - aposta;
								
							}
			            
			            }
			   
			        	} else if (*vencedor9 != 1) { //estatisticas da partida
			            	int golAeB = *golA10 + *golB10; //PRECISA ALTERAR
		                	system("cls");
		                	printf("===============Estatisticas do jogo===============\n");
		                	printf("R$%d reais\n", *saldo);
						    printf("[INTER %d X %d MILAN]\n", *golA10, *golB10);
		                	printf("Total de Gols na partida: %d\n", golAeB);
		                	if(*totalgol9 > 0){
		                	printf("Total de Gols do Mvp: %d gol(s)\n", *totalgol9);
		                	} else  { 
		                	printf("Empate de Mvp, Sem destaques.\n");
							}
							
							printf("\nPressione ENTER para continuar...");
							getchar(); getchar(); 
		    				
		    				
		    			
						
						}
						break;
		    			
						case 6:
							printf("Voltando...");
		    				Sleep(1000);
		    				goto inicio;
		    				
		    			} 
		    			
						}else if(jogo == 7) {
					 	printf("Voltando...");
					    Sleep(1000);
					 	goto inicio;
					    
					 	} else {
					 		printf("Não entendi...");
					 		Sleep(1000);
					 		goto brasileirao;
					 	}
	 	goto pular1;
			// AMISTOSOS
			amistosos:
				pular2:
			case 3:
				system("cls");
	    		printf("JOGOS AO VIVO: AMISTOSOS INTERNACIONAIS\n\n");
	    		
	    		
				    	
			switch (*vencedor3) {
			    case 3:
			    case 4:
			    case 2:
			        printf("X  - [BRASIL %d X %d ARGENTINA]\n", *golA4, *golB4);
			        break;
			    case 1:
			        printf("1 - [BRASIL X ARGENTINA]\n");
			        break;
			}
			
			
			switch (*vencedor11) {
			    case 3:
			    case 4:
			    case 2:
			        printf("X  - [FRANÇA %d X %d ESPANHA]\n", *golA12, *golB12);
			        break;
			    case 1:
			        printf("2 - [FRANÇA X ESPANHA]\n");
			        break;
			}
			
			
			switch (*vencedor12) {
			    case 3:
			    case 4:
			    case 2:
			        printf("X  - [PORTUGAL %d X %d HOLANDA]\n", *golA13, *golB13);
			        break;
			    case 1:
			        printf("3 - [PORTUGAL X HOLANDA]\n");
			        break;
			}
			
			
			switch (*vencedor13) {
			    case 3:
			    case 4:
			    case 2:
			        printf("X  - [ALEMANHA %d X %d INGLATERRA]\n", *golA14, *golB14);
			        break;
			    case 1:
			        printf("4 - [ALEMANHA X INGLATERRA]\n");
			        break;
			}
			
			
			switch (*vencedor14) {
			    case 3:
			    case 4:
			    case 2:
			        printf("X  - [URUGUAI %d X %d ITALIA]\n", *golA15, *golB15);
			        break;
			    case 1:
			        printf("5 - [URUGUAI X ITALIA]\n");
			        break;
			}

	    	
			printf("6 - VOLTAR PARA MENU INICIAL\n");
	    		
	    		
	    		printf("\nSELECIONE: ");
	    		scanf("%d", &jogo);
	    		getchar();
	    		
	    		if (jogo <= 6) {
	    			int entradaValida = 0;
	    			switch (jogo) {
	    			case 1:
	    				if(*vencedor3 == 1){
						
	    				system("cls");
	    				printf("[BRASIL X ARGENTINA]\n");
	    				printf("INFO TEAMS:\nEMPATE: odd de %.2f\nTIME DA CASA: odd de %.2f\nTIME VISITANTE:odd de %.2f\n", oddempate, oddcasa, oddfora);
		    			
	        			do {
						printf("\nVai apostar em quem? ");
	    				fgets(time1, sizeof(time1), stdin);
	                    time1[strcspn(time1, "\n")] = 0;
	    				
	    				
	    				if(strcmp(time1, "brasil") == 0 || strcmp(time1, "Brasil") == 0) {
	    					strcpy(time1, country[brasil]);
	    					strcpy(time2, country[argentina]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    				
		    			//VERIFICAÇÃO DE SALDO, SE APOSTA FOR MAIOR QUE O SALDO, ELE PEDE OUTRO VALOR
		    			do{
						
	    					if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar(); 
        					goto pular2;
        					break;
						}	
						} while (aposta > *saldo);
	        			} 
		    				
		    				
						
						 if(strcmp(time1, "argentina") == 0 || strcmp(time1, "Argentina") == 0) {
	    					strcpy(time1, country[argentina]);
	    					strcpy(time2, country[brasil]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    			do{
						
		    				if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar();
							goto pular2; 
        					break;
						} 
						}while (aposta > *saldo);
	        			} 
		    				
		    			
		    				
						 if (strcmp(time1, "empate") == 0 || strcmp(time1, "Empate") == 0) {
	    					strcpy(time1, country[brasil]);
	    					strcpy(time2, country[argentina]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    			do{
							
		    				if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar(); 
        					goto pular2;
        					break;
						} 
						} while (aposta > *saldo);
	        			} 
		    				
		    		} while (!entradaValida);
		    				
						
						if(*vencedor3 == 1){
		                system("cls");
		                printf("Você escolheu assistir: Brasil x Argentina\n");
		                brasilxargentina(saldo, vencedor3, golA4, golB4, totalgol3);
		                printf("Pressione Enter para voltar ao menu de jogos...");
		                getchar();
		                getchar();
			        	}
			        	
			                
			            	if(strcmp(time1, "brasil") == 0 || strcmp(time1, "Brasil") == 0) {
	    					strcpy(time1, country[brasil]);
	    					strcpy(time2, country[argentina]);
	    					
		    				if (*golA4 > *golB4) {
		    					
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    					
		    					
		    					
							} else if (*golA4 < *golB4 || *golA4 == *golB4) {
								*saldo = *saldo - aposta;
								
								
							}
	
						} else if(strcmp(time1, "argentina") == 0 || strcmp(time1, "Argentina") == 0) {
	    					strcpy(time1, country[argentina]);
	    					strcpy(time2, country[brasil]);
	    				
		    				if (*golB4 > *golA4) {
	    					
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    				
		    					
		    					
							} else if (*golA4 > *golB4 || *golA4 == *golB4) {
								*saldo = *saldo - aposta;
								
							}
	
					} if (strcmp(time1, "empate") == 0 || strcmp(time1, "Empate") == 0) {
	    					strcpy(time1, country[brasil]);
	    					strcpy(time2, country[argentina]);
	    				
		    				if (*golA4 == *golB4) {
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    					
							} else {
								*saldo = *saldo - aposta;
								
							}
			            
			            }
			   
			        	} else if (*vencedor3 != 1) { //estatisticas da partida
			            	int golAeB = *golA4 + *golB4; //PRECISA ALTERAR
		                	system("cls");
		                	printf("===============Estatisticas do jogo===============\n");
		                	printf("R$%d reais\n", *saldo);
						    printf("BRASIL %d X %d ARGENTINA]\n", *golA4, *golB4);
		                	printf("Total de Gols na partida: %d\n", golAeB);
		                	if(*totalgol3 > 0){
		                	printf("Total de Gols do Mvp: %d gol(s)\n", *totalgol3);
		                	} else  { 
		                	printf("Empate de Mvp, Sem destaques.\n");
							}
							
							printf("\nPressione ENTER para continuar...");
							getchar(); getchar(); 
		    				
		    				
		    			
						
						}
						break;
	    				
	    			case 2:
	    				if(*vencedor11 == 1){
						
	    				system("cls");
	    				printf("[FRANÇA X ESPANHA]\n");
	    				printf("INFO TEAMS:\nEMPATE: odd de %.2f\nTIME DA CASA: odd de %.2f\nTIME VISITANTE:odd de %.2f\n", oddempate, oddcasa, oddfora);
		    			
	        			do {
						printf("\nVai apostar em quem? ");
	    				fgets(time1, sizeof(time1), stdin);
	                    time1[strcspn(time1, "\n")] = 0;
	    				
	    				
	    				if(strcmp(time1, "França") == 0 || strcmp(time1, "franca") == 0) {
	    					strcpy(time1, country[franca]);
	    					strcpy(time2, country[espanha]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    				
		    			//VERIFICAÇÃO DE SALDO, SE APOSTA FOR MAIOR QUE O SALDO, ELE PEDE OUTRO VALOR
		    			do{
						
	    					if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar(); 
        					goto pular2;
        					break;
						}	
						} while (aposta > *saldo);
	        			} 
		    				
		    				
						
						 if(strcmp(time1, "espanha") == 0 || strcmp(time1, "Espanha") == 0) {
	    					strcpy(time1, country[espanha]);
	    					strcpy(time2, country[franca]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    			do{
						
		    				if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar();
							goto pular2; 
        					break;
						} 
						}while (aposta > *saldo);
	        			} 
		    				
		    			
		    				
						 if (strcmp(time1, "empate") == 0 || strcmp(time1, "Empate") == 0) {
	    					strcpy(time1, country[espanha]);
	    					strcpy(time2, country[franca]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    			do{
							
		    				if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar(); 
        					goto pular2;
        					break;
						} 
						} while (aposta > *saldo);
	        			} 
		    				
		    		} while (!entradaValida);
		    				
						
						if(*vencedor11 == 1){ //PRECISA ALTERAR
		                system("cls");
		                printf("Você escolheu assistir: França x Espanha\n");//PRECISA ALTERAR
		                franxesp(saldo, vencedor11, golA12, golB12, totalgol11);//PRECISA ALTERAR
		                printf("Pressione Enter para voltar ao menu de jogos...");
		                getchar();
		                getchar();
			        	}
			        	
			                if(strcmp(time1, "França") == 0 || strcmp(time1, "franca") == 0) {
	    					strcpy(time1, country[franca]);
	    					strcpy(time2, country[espanha]);
	    					
		    				if (*golA12 > *golB12) {
		    					
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    					
		    					
		    					
							} else if (*golA12 < *golB12 || *golA12 == *golB12) {
								*saldo = *saldo - aposta;
								
								
							}
	
						} else if(strcmp(time1, "espanha") == 0 || strcmp(time1, "Espanha") == 0) {
	    					strcpy(time1, country[espanha]);
	    					strcpy(time2, country[franca]);
	    				
		    				if (*golB12 > *golA12) {
	    					
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    				
		    					
		    					
							} else if (*golA12 > *golB12 || *golA12 == *golB12) {
								*saldo = *saldo - aposta;
								
							}
	
					} if (strcmp(time1, "empate") == 0 || strcmp(time1, "Empate") == 0) {
	    					strcpy(time1, country[espanha]);
	    					strcpy(time2, country[franca]);
	    				
		    				if (*golA12 == *golB12) {
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    					
							} else {
								*saldo = *saldo - aposta;
								
							}
			            
			            }
			   
			        	} else if (*vencedor11 != 1) { //estatisticas da partida
			            	int golAeB = *golA12 + *golB12; //PRECISA ALTERAR
		                	system("cls");
		                	printf("===============Estatisticas do jogo===============\n");
		                	printf("R$%d reais\n", *saldo);
						    printf("FRANÇA %d X %d ESPANHA]\n", *golA12, *golB12);
		                	printf("Total de Gols na partida: %d\n", golAeB);
		                	if(*totalgol11 > 0){
		                	printf("Total de Gols do Mvp: %d gol(s)\n", *totalgol11);
		                	} else  { 
		                	printf("Empate de Mvp, Sem destaques.\n");
							}
							
							printf("\nPressione ENTER para continuar...");
							getchar(); getchar(); 
		    				
		    				
		    			
						
						}
						break;
	    				
	    			case 3:
	    				if(*vencedor12 == 1){
						
	    				system("cls");
	    				printf("[PORTUGAL X HOLANDA]\n");
	    				printf("INFO TEAMS:\nEMPATE: odd de %.2f\nTIME DA CASA: odd de %.2f\nTIME VISITANTE:odd de %.2f\n", oddempate, oddcasa, oddfora);
		    			
	        			do {
						printf("\nVai apostar em quem? ");
	    				fgets(time1, sizeof(time1), stdin);
	                    time1[strcspn(time1, "\n")] = 0;
	    				
	    				
	    				if(strcmp(time1, "portugal") == 0 || strcmp(time1, "Portugal") == 0) {
	    					strcpy(time1, country[portugal]);
	    					strcpy(time2, country[holanda]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    				
		    			//VERIFICAÇÃO DE SALDO, SE APOSTA FOR MAIOR QUE O SALDO, ELE PEDE OUTRO VALOR
		    			do{
						
	    					if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar(); 
        					goto pular2;
        					break;
						}	
						} while (aposta > *saldo);
	        			} 
		    				
		    				
						
						 if(strcmp(time1, "holanda") == 0 || strcmp(time1, "Holanda") == 0) {
	    					strcpy(time1, country[holanda]);
	    					strcpy(time2, country[portugal]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    			do{
						
		    				if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar();
							goto pular2; 
        					break;
						} 
						}while (aposta > *saldo);
	        			} 
		    				
		    			
		    				
						 if (strcmp(time1, "empate") == 0 || strcmp(time1, "Empate") == 0) {
	    					strcpy(time1, country[portugal]);
	    					strcpy(time2, country[holanda]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    			do{
							
		    				if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar(); 
        					goto pular2;
        					break;
						} 
						} while (aposta > *saldo);
	        			} 
		    				
		    		} while (!entradaValida);
		    				
						
						if(*vencedor12 == 1){ //PRECISA ALTERAR
		                system("cls");
		                printf("Você escolheu assistir: Portugal x Holanda\n");//PRECISA ALTERAR
		                porxhol(saldo, vencedor12, golA13, golB13, totalgol12);//PRECISA ALTERAR
		                printf("Pressione Enter para voltar ao menu de jogos...");
		                getchar();
		                getchar();
			        	}
			        	
			                if(strcmp(time1, "portugal") == 0 || strcmp(time1, "Portugal") == 0) {
	    					strcpy(time1, country[portugal]);
	    					strcpy(time2, country[holanda]);
	    					
		    				if (*golA13 > *golB13) {
		    					
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    					
		    					
		    					
							} else if (*golA13 < *golB13 || *golA13 == *golB13) {
								*saldo = *saldo - aposta;
								
								
							}
	
						} else if(strcmp(time1, "holanda") == 0 || strcmp(time1, "Holanda") == 0) {
	    					strcpy(time1, country[holanda]);
	    					strcpy(time2, country[portugal]);
	    				
		    				if (*golB13 > *golA13) {
	    					
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    				
		    					
		    					
							} else if (*golA13 > *golB13 || *golA13 == *golB13) {
								*saldo = *saldo - aposta;
								
							}
	
					} if (strcmp(time1, "empate") == 0 || strcmp(time1, "Empate") == 0) {
	    					strcpy(time1, country[portugal]);
	    					strcpy(time2, country[holanda]);
	    				
		    				if (*golA13 == *golB13) {
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    					
							} else {
								*saldo = *saldo - aposta;
								
							}
			            
			            }
			   
			        	} else if (*vencedor12 != 1) { //estatisticas da partida
			            	int golAeB = *golA13 + *golB13; //PRECISA ALTERAR
		                	system("cls");
		                	printf("===============Estatisticas do jogo===============\n");
		                	printf("R$%d reais\n", *saldo);
						    printf("PORTUGAL %d X %d HOLANDA]\n", *golA13, *golB13);
		                	printf("Total de Gols na partida: %d\n", golAeB);
		                	if(*totalgol12 > 0){
		                	printf("Total de Gols do Mvp: %d gol(s)\n", *totalgol12);
		                	} else  { 
		                	printf("Empate de Mvp, Sem destaques.\n");
							}
							
							printf("\nPressione ENTER para continuar...");
							getchar(); getchar(); 
		    				
		    				
		    			
						
						}
						break;
	    				
	    			case 4:
	    				if(*vencedor13 == 1){ 
						
	    				system("cls");
	    				printf("[ALEMANHA X INGLATERRA]\n");
	    				printf("INFO TEAMS:\nEMPATE: odd de %.2f\nTIME DA CASA: odd de %.2f\nTIME VISITANTE:odd de %.2f\n", oddempate, oddcasa, oddfora);
		    			
	        			do {
						printf("\nVai apostar em quem? ");
	    				fgets(time1, sizeof(time1), stdin);
	                    time1[strcspn(time1, "\n")] = 0;
	    				
	    				
	    				
	    				if(strcmp(time1, "Alemanha") == 0 || strcmp(time1, "alemanha") == 0) {
	    					strcpy(time1, country[alemanha]);
	    					strcpy(time2, country[inglaterra]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    				
		    			//VERIFICAÇÃO DE SALDO, SE APOSTA FOR MAIOR QUE O SALDO, ELE PEDE OUTRO VALOR
		    			do{
						
	    					if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar(); 
        					goto pular2;
        					break;
						}	
						} while (aposta > *saldo);
	        			} 
		    				
		    				
						
						 if(strcmp(time1, "inglaterra") == 0 || strcmp(time1, "Inglaterra") == 0) {
	    					strcpy(time1, country[inglaterra]);
	    					strcpy(time2, country[alemanha]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    			do{
						
		    				if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar();
							goto pular2; 
        					break;
						} 
						}while (aposta > *saldo);
	        			} 
		    				
		    			
		    				
						 if (strcmp(time1, "empate") == 0 || strcmp(time1, "Empate") == 0) {
	    					strcpy(time1, country[alemanha]);
	    					strcpy(time2, country[inglaterra]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    			do{
							
		    				if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar(); 
        					goto pular2;
        					break;
						} 
						} while (aposta > *saldo);
	        			} 
		    				
		    		} while (!entradaValida);
		    				
						
						if(*vencedor13 == 1){ //PRECISA ALTERAR
		                system("cls");
		                printf("Você escolheu assistir: Alemanha x Inglaterra\n");//PRECISA ALTERAR
		                alexing(saldo, vencedor13, golA14, golB14, totalgol13);//PRECISA ALTERAR
		                printf("Pressione Enter para voltar ao menu de jogos...");
		                getchar();
		                getchar();
			        	}
			        	
			                if(strcmp(time1, "Alemanha") == 0 || strcmp(time1, "alemanha") == 0) {
	    					strcpy(time1, country[alemanha]);
	    					strcpy(time2, country[inglaterra]);
	    					
		    				if (*golA14 > *golB14) {
		    					
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    					
		    					
		    					
							} else if (*golA14 < *golB14 || *golA14 == *golB14) {
								*saldo = *saldo - aposta;
								
								
							}
	
						} else if(strcmp(time1, "inglaterra") == 0 || strcmp(time1, "Inglaterra") == 0) {
	    					strcpy(time1, country[inglaterra]);
	    					strcpy(time2, country[alemanha]);
	    				
		    				if (*golB14 > *golA14) {
	    					
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    				
		    					
		    					
							} else if (*golA14 > *golB14 || *golA14 == *golB14) {
								*saldo = *saldo - aposta;
								
							}
	
					} if (strcmp(time1, "empate") == 0 || strcmp(time1, "Empate") == 0) {
	    					strcpy(time1, country[alemanha]);
	    					strcpy(time2, country[inglaterra]);
	    				
		    				if (*golA14 == *golB14) {
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    					
							} else {
								*saldo = *saldo - aposta;
								
							}
			            
			            }
			   
			        	} else if (*vencedor13 != 1) { //estatisticas da partida
			            	int golAeB = *golA14 + *golB14; //PRECISA ALTERAR
		                	system("cls");
		                	printf("===============Estatisticas do jogo===============\n");
		                	printf("R$%d reais\n", *saldo);
						    printf("ALEMANHA %d X %d INGLATERRA]\n", *golA14, *golB14);
		                	printf("Total de Gols na partida: %d\n", golAeB);
		                	if(*totalgol13 > 0){
		                	printf("Total de Gols do Mvp: %d gol(s)\n", *totalgol13);
		                	} else  { 
		                	printf("Empate de Mvp, Sem destaques.\n");
							}
							
							printf("\nPressione ENTER para continuar...");
							getchar(); getchar(); 
		    				
		    				
		    			
						
						}
						break;
	    				
	    			case 5:
	    				if(*vencedor14 == 1){
						
	    				system("cls");
	    				printf("[URUGUAI X ITÁLIA]\n");
	    				printf("INFO TEAMS:\nEMPATE: odd de %.2f\nTIME DA CASA: odd de %.2f\nTIME VISITANTE:odd de %.2f\n", oddempate, oddcasa, oddfora);
		    			
	        			do {
						printf("\nVai apostar em quem? ");
	    				fgets(time1, sizeof(time1), stdin);
	                    time1[strcspn(time1, "\n")] = 0;
	    				
	    				
	    				
	    			if(strcmp(time1, "uruguai") == 0 || strcmp(time1, "Uruguai") == 0) {
	    					strcpy(time1, country[uruguai]);
	    					strcpy(time2, country[italia]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    				
		    			//VERIFICAÇÃO DE SALDO, SE APOSTA FOR MAIOR QUE O SALDO, ELE PEDE OUTRO VALOR
		    			do{
						
	    					if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar(); 
        					goto pular2;
        					break;
						}	
						} while (aposta > *saldo);
	        			} 
		    				
		    				
						
						if(strcmp(time1, "italia") == 0 || strcmp(time1, "Italia") == 0) {
	    					strcpy(time1, country[italia]);
	    					strcpy(time2, country[uruguai]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    			do{
						
		    				if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar();
							goto pular2; 
        					break;
						} 
						}while (aposta > *saldo);
	        			} 
		    				
		    			
		    				
						 if (strcmp(time1, "empate") == 0 || strcmp(time1, "Empate") == 0) {
	    					strcpy(time1, country[uruguai]);
	    					strcpy(time2, country[italia]);
	    					entradaValida++;
	    					
	    					printf("\nDeposite o valor: ");
		    				scanf("%lf", &aposta);
		    			do{
							
		    				if (aposta > *saldo) {
        					printf("Saldo insuficiente para esta aposta! Saldo R$%d\n", *saldo);
        					printf("Pressione enter para voltar ao menu.\n");
        					getchar(); getchar(); 
        					goto pular2;
        					break;
						} 
						} while (aposta > *saldo);
	        			} 
		    				
		    		} while (!entradaValida);
		    				
						
						if(*vencedor14 == 1){ //PRECISA ALTERAR
		                system("cls");
		                printf("Você escolheu assistir: Uruguai x Italia\n");//PRECISA ALTERAR
		                uruxita(saldo, vencedor14, golA15, golB15, totalgol14);//PRECISA ALTERAR
		                printf("Pressione Enter para voltar ao menu de jogos...");
		                getchar();
		                getchar();
			        	}
			        	
			                if(strcmp(time1, "uruguai") == 0 || strcmp(time1, "Uruguai") == 0) {
	    					strcpy(time1, country[uruguai]);
	    					strcpy(time2, country[italia]);
	    					
		    				if (*golA15 > *golB15) {
		    					
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    					
		    					
		    					
							} else if (*golA15 < *golB15 || *golA15 == *golB15) {
								*saldo = *saldo - aposta;
								
								
							}
	
						} else if(strcmp(time1, "italia") == 0 || strcmp(time1, "Italia") == 0) {
	    					strcpy(time1, country[italia]);
	    					strcpy(time2, country[uruguai]);
	    				
		    				if (*golB15 > *golA15) {
	    					
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    				
		    					
		    					
							} else if (*golA15 > *golB15 || *golA15 == *golB15) {
								*saldo = *saldo - aposta;
								
							}
	
					} if (strcmp(time1, "empate") == 0 || strcmp(time1, "Empate") == 0) {
	    					strcpy(time1, country[uruguai]);
	    					strcpy(time2, country[italia]);
	    				
		    				if (*golA15 == *golB15) {
		    					*saldo += aposta + ganhos;
		    					ganhos = aposta*oddcasa - aposta;
		    					
							} else {
								*saldo = *saldo - aposta;
								
							}
			            
			            }
			   
			        	} else if (*vencedor14 != 1) { //estatisticas da partida
			            	int golAeB = *golA15 + *golB15; //PRECISA ALTERAR
		                	system("cls");
		                	printf("===============Estatisticas do jogo===============\n");
		                	printf("R$%d reais\n", *saldo);
						    printf("ALEMANHA %d X %d INGLATERRA]\n", *golA15, *golB15);
		                	printf("Total de Gols na partida: %d\n", golAeB);
		                	if(*totalgol14 > 0){
		                	printf("Total de Gols do Mvp: %d gol(s)\n", *totalgol14);
		                	} else  { 
		                	printf("Empate de Mvp, Sem destaques.\n");
							}
							
							printf("\nPressione ENTER para continuar...");
							getchar(); getchar(); 
		    				
		    				
		    			
						
						}
						break;
						
							case 6:
							printf("Voltando...");
		    				Sleep(1000);
		    				goto inicio;
		    				
		    			} 
	    				 			
						}else if(jogo == 7) {
					 	printf("Voltando...");
					    Sleep(1000);
					 	goto inicio;
					    
					 	} else {
					 		printf("Não entendi...");
					 		Sleep(1000);
					 		goto brasileirao;
					 	}
					 	goto pular2;
					
					
					
				case 4:
					printf("Voltando...");
			    	Sleep(1000);
			    	break;
	} 
	
		
	}
