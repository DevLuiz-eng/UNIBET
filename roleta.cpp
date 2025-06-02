#include "funcoes.h"
#include <stdio.h>
#include <stdlib.h> // srand, rand
#include <time.h>   // time
#include <locale.h> // Colocar em Portugues
#include <windows.h>

void roleta(int *saldo){
	
	int cor, combinar1, combinar2, menu1, aposta;
	system("cls");
	printf("========================COLORS ROULETTE=======================\n");
	
	do {
		system("cls");
		printf("========================COLORS ROULETTE=======================\n");
	    srand(time(NULL));
	    int num = rand() % 15 + 1;
		printf("						    R$%d reais\n", *saldo);
	    printf("Escolha uma das cores: \n");
	    printf("| 1 - Vermelho | 2 - Preto | 3 - Branco | 4 - Combinar Cores |\n");
	    scanf("%d", &cor);
	    
	
	    switch (cor) {
	        case 1:
	            do {
	            	printf("Qual valor deseja apostar nessa cor: ");
	            	scanf("%d", &aposta);
	            	if(aposta > *saldo){
	            		printf("Saldo insuficiente! Seu saldo atual é R$%d\n", *saldo);
					}
	            } while (aposta > *saldo);
	            
	            *saldo = *saldo - aposta;
	            
	            if (num <= 7) {
	                printf("Vermelho, Voce ganhou!\n");
	                *saldo = *saldo + (aposta * 2);
	            } else if (num > 7 && num <= 14) {
	                printf("Preto, Voce perdeu!\n");
	            } else {
	                printf("Branco, Voce perdeu!\n");
	            }
	            break;
	
	        case 2:
	            do {
	            	printf("Qual valor deseja apostar nessa cor: ");
	            	scanf("%d", &aposta);
	            	if(aposta > *saldo){
	            		printf("Saldo insuficiente! Seu saldo atual é R$%d\n", *saldo);
					}
	            } while (aposta > *saldo);
	            
	            *saldo = *saldo - aposta;
	            
	            if (num <= 7) {
	                printf("Vermelho, Voce perdeu!\n");
	            } else if (num > 7 && num <= 14) {
	                printf("Preto, Voce ganhou!\n");
	                *saldo = *saldo + (aposta * 2);
	            } else {
	                printf("Branco, Voce perdeu!\n");
	            }
	            break;
	
	        case 3:
	            do {
	            	printf("Qual valor deseja apostar nessa cor: ");
	            	scanf("%d", &aposta);
	            	if(aposta > *saldo){
	            		printf("Saldo insuficiente! Seu saldo atual é R$%d\n", *saldo);
					}
	            } while (aposta > *saldo);
	            
	            *saldo = *saldo - aposta;
	            
	            if (num <= 7) {
	                printf("Vermelho, Voce perdeu!\n");
	            } else if (num > 7 && num <= 14) {
	                printf("Preto, Voce perdeu!\n");
	            } else {
	                printf("Branco, Voce ganhou!\n");
	                *saldo = *saldo + (aposta * 14);
	            }
	            break;
	
	        case 4:
	        	{
	        		int aposta1, aposta2, aposta3=0; // aposta3 declarado só para o caso 1 e 2 combinarem com branco
	        		
	        		printf("Escolha uma das cores: \n");
	        		printf("| 1 - Vermelho | 2 - Preto | 3 - Branco |\n");
	        		scanf("%d%d", &combinar1, &combinar2);
	        		
	        		// Validar apostas separadamente, somar e só depois subtrair
	        		
	        		if(combinar1 == 1 && combinar2 == 2){ // VERMELHO E PRETO
	        			do {
	        				printf("Qual valor deseja apostar na cor VERMELHA: ");
	        				scanf("%d", &aposta1);
	        				if (aposta1 > *saldo) {
	        					printf("Saldo insuficiente! Seu saldo atual é R$%d\n", *saldo);
							}
	        			} while (aposta1 > *saldo);
	        			
	        			do {
	        				printf("Qual valor deseja apostar na cor PRETA: ");
	        				scanf("%d", &aposta2);
	        				if (aposta2 > (*saldo - aposta1)) {
	        					printf("Saldo insuficiente para esta aposta! Restam R$%d\n", *saldo - aposta1);
							}
	        			} while (aposta2 > (*saldo - aposta1));
	        			
	        			*saldo = *saldo - (aposta1 + aposta2);
						
						if (num <= 7) {
				            printf("Vermelho, Voce ganhou!\n");
				            *saldo = *saldo + (aposta1 * 2);
				        } else if (num > 7 && num <= 14) {
				        	printf("Preto, Voce ganhou!\n");
				        	*saldo = *saldo + (aposta2 * 2); 
				        } else if (num == 15){
				        	printf("Branco, Voce perdeu!\n");
						}
					}
	        		
	        		else if(combinar1 == 1 && combinar2 == 3){ // VERMELHO E BRANCO
	        			do {
	        				printf("Qual valor deseja apostar na cor VERMELHA: ");
	        				scanf("%d", &aposta1);
	        				if (aposta1 > *saldo) {
	        					printf("Saldo insuficiente! Seu saldo atual é R$%d\n", *saldo);
							}
	        			} while (aposta1 > *saldo);
	        			
	        			do {
	        				printf("Qual valor deseja apostar na cor BRANCA: ");
	        				scanf("%d", &aposta3);
	        				if (aposta3 > (*saldo - aposta1)) {
	        					printf("Saldo insuficiente para esta aposta! Restam R$%d\n", *saldo - aposta1);
							}
	        			} while (aposta3 > (*saldo - aposta1));
	        			
	        			*saldo = *saldo - (aposta1 + aposta3);
	        			
	        			if (num <= 7) {
				            printf("Vermelho, Voce ganhou!\n");
				            *saldo = *saldo + (aposta1 * 2);
				        } else if (num > 7 && num <= 14) {
				            printf("Preto, Voce perdeu!\n");
				        } else if (num == 15){
				        	printf("Branco, Voce ganhou!\n");
				        	*saldo = *saldo + (aposta3 * 14);
						}
					}
	        		
	        		else if(combinar1 == 2 && combinar2 == 3){ // PRETO E BRANCO
	        			do {
	        				printf("Qual valor deseja apostar na cor PRETO: ");
	        				scanf("%d", &aposta2);
	        				if (aposta2 > *saldo) {
	        					printf("Saldo insuficiente! Seu saldo atual é R$%d\n", *saldo);
							}
	        			} while (aposta2 > *saldo);
	        			
	        			do {
	        				printf("Qual valor deseja apostar na cor BRANCA: ");
	        				scanf("%d", &aposta3);
	        				if (aposta3 > (*saldo - aposta2)) {
	        					printf("Saldo insuficiente para esta aposta! Restam R$%d\n", *saldo - aposta2);
							}
	        			} while (aposta3 > (*saldo - aposta2));
	        			
	        			*saldo = *saldo - (aposta2 + aposta3);
	        			
	        			if (num <= 7) {
				            printf("Vermelho, Voce perdeu!\n");
				        } else if (num > 7 && num <= 14) {
				        	printf("Preto, Voce ganhou!\n");
				        	*saldo = *saldo + (aposta2 * 2);
				        } else if (num == 15){
				        	printf("Branco, Voce ganhou!\n");
				        	*saldo = *saldo + (aposta3 * 14);
						}
					}
	        		
	        		else if(combinar1 == 2 && combinar2 == 1){ // PRETO E VERMELHO (invertido)
	        			do {
	        				printf("Qual valor deseja apostar na cor PRETA: ");
	        				scanf("%d", &aposta2);
	        				if (aposta2 > *saldo) {
	        					printf("Saldo insuficiente! Seu saldo atual é R$%d\n", *saldo);
							}
	        			} while (aposta2 > *saldo);
	        			
	        			do {
	        				printf("Qual valor deseja apostar na cor VERMELHA: ");
	        				scanf("%d", &aposta1);
	        				if (aposta1 > (*saldo - aposta2)) {
	        					printf("Saldo insuficiente para esta aposta! Restam R$%d\n", *saldo - aposta2);
							}
	        			} while (aposta1 > (*saldo - aposta2));
	        			
	        			*saldo = *saldo - (aposta1 + aposta2);
						
						if (num <= 7) {
				            printf("Vermelho, Voce ganhou!\n");
				            *saldo = *saldo + (aposta1 * 2);
				        } else if (num > 7 && num <= 14) {
				        	printf("Preto, Voce ganhou!\n");
				        	*saldo = *saldo + (aposta2 * 2); 
				        } else if (num == 15){
				        	printf("Branco, Voce perdeu!\n");
						}
					}
	        		
	        		else if(combinar1 == 3 && combinar2 == 1){ // BRANCO E VERMELHO (invertido)
	        			do {
	        				printf("Qual valor deseja apostar na cor BRANCA: ");
	        				scanf("%d", &aposta3);
	        				if (aposta3 > *saldo) {
	        					printf("Saldo insuficiente! Seu saldo atual é R$%d\n", *saldo);
							}
	        			} while (aposta3 > *saldo);
	        			
	        			do {
	        				printf("Qual valor deseja apostar na cor VERMELHA: ");
	        				scanf("%d", &aposta1);
	        				if (aposta1 > (*saldo - aposta3)) {
	        					printf("Saldo insuficiente para esta aposta! Restam R$%d\n", *saldo - aposta3);
							}
	        			} while (aposta1 > (*saldo - aposta3));
	        			
	        			*saldo = *saldo - (aposta1 + aposta3);
	        			
	        			if (num <= 7) {
				            printf("Vermelho, Voce ganhou!\n");
				            *saldo = *saldo + (aposta1 * 2);
				        } else if (num > 7 && num <= 14) {
				            printf("Preto, Voce perdeu!\n");
				        } else if (num == 15){
				        	printf("Branco, Voce ganhou!\n");
				        	*saldo = *saldo + (aposta3 * 14);
						}
					}
	        		
	        		else if(combinar1 == 3 && combinar2 == 2){ // BRANCO E PRETO (invertido)
	        			do {
	        				printf("Qual valor deseja apostar na cor BRANCA: ");
	        				scanf("%d", &aposta3);
	        				if (aposta3 > *saldo) {
	        					printf("Saldo insuficiente! Seu saldo atual é R$%d\n", *saldo);
							}
	        			} while (aposta3 > *saldo);
	        			
	        			do {
	        				printf("Qual valor deseja apostar na cor PRETA: ");
	        				scanf("%d", &aposta2);
	        				if (aposta2 > (*saldo - aposta3)) {
	        					printf("Saldo insuficiente para esta aposta! Restam R$%d\n", *saldo - aposta3);
							}
	        			} while (aposta2 > (*saldo - aposta3));
	        			
	        			*saldo = *saldo - (aposta2 + aposta3);
	        			
	        			if (num <= 7) {
				            printf("Vermelho, Voce perdeu!\n");
				        } else if (num > 7 && num <= 14) {
				        	printf("Preto, Voce ganhou!\n");
				        	*saldo = *saldo + (aposta2 * 2);
				        } else if (num == 15){
				        	printf("Branco, Voce ganhou!\n");
				        	*saldo = *saldo + (aposta3 * 14);
						}
					}
	        		
	        		else {
	        			printf("Combinação inválida!\n");
	        		}
	        		
	        	break;
				}
	
	        default:
	            printf("Opcao invalida!\n");
	            break;
	    }
	
	    printf("1 - Jogar Novamente\n2 - Voltar ao Menu Inicial\n");
	    printf("Selecione a opção: ");
	    scanf("%d", &menu1);
	
	} while (menu1 == 1);
}

