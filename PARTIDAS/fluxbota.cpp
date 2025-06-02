//FLUMINESE X BOTA FOGO
//fluxbota


#include <stdio.h>
#include <stdlib.h> // srand, rand
#include <time.h>   // time
#include <locale.h> // Colocar em Portugues
#include <unistd.h>
#include <windows.h>
#include "funcoes.h"
#include <string.h> // Necessário para strcpy


//EXEMPLO DE PARTIDA COM FAVORITISMO DO TIME DA CASA

//| Etapa          |    TIMEA    |   TIMEB   | Sem Gol |
//| -------------- | ----------- | --------- | ------- |
//| Primeiro Tempo | **6,67%**   | 4,33%     | 89,00%  |
//| Segundo Tempo  | **6,25%**   | 6,25%     | 87,50%  |
//| Minutos Finais | **20,00%**  | 20,00%    | 60,00%  |







void fluxbota(int *saldo, int *vencedor7, int *golA8,int *golB8, int *totalgol7) { //PRECISA ALTERAR
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	//Variaveis
    int tempo = 0;
    int tempo2 = 45;
    int placarA = 0;
    int placarB = 0;
    char timeA[99] = "Fluminense"; //PRECISA ALTERAR
    char jogadorA[99] = "Germán Cano"; //PRECISA ALTERAR
    int golA = 0;
    char jogadorAfrc[99] = "Rubén Lezcano"; //PRECISA ALTERAR
    int golAfrc = 0;
    char timeB[99] = "Botafogo"; //PRECISA ALTERAR
    char jogadorB[99] = "John"; //PRECISA ALTERAR
    int golB = 0;
    char jogadorBfrc[99] = "Igor Jesus"; //PRECISA ALTERAR
	int golBfrc = 0;
	char empate[8] = "Empate";
	//Variaveis
	
	
    while (tempo < 15) { // Primeiro tempo.
        tempo++;
        system("cls"); //limpar o terminal
        int gol = rand() %  300 + 1;//Sorteia as chances de Gol baseada na força do time.
        printf("1 Tempo: %d\nPlacar: %s %d x %d %s\n", tempo*3, timeA, placarA, placarB, timeB);//Placar do Jogo.
        
        //SITUAÇÃO DE GOL DO TIMEA
        if (gol <= 7 || gol >= 295 && gol < 298){
        	printf("%s no ATAQUE.\n", timeA);
        	sleep(1);
        	printf("%s faz lindo passe para %s, ele domina e segue em direção a gol do adversario...\n", jogadorAfrc,jogadorA);
        	sleep(3);
        	printf("Grande chance para o %s abrir o placar para o %s.\n", jogadorA, timeA);
        	sleep(3);
        	printf("%s prepara o chute, chuta no angulo de cima do goleiro e abre o placar para o %s, com um golaço.\n", jogadorA, timeA);
        	printf("GOOOOOOOOOOOOOOOOOOOOL\n");
        	golA++;
        	placarA++;
        	sleep(2);
		} else if (gol > 7 && gol <=14 || gol >= 298){
			printf("%s no ATAQUE.\n", timeA);
        	sleep(1);
        	printf("%s deixa dois marcadores para trás e faz cruzamento para %s\n", jogadorA, jogadorAfrc);
        	sleep(3);
        	printf("%s domina de peito e chuta de primeira fazendo um lindo voleio\n", jogadorAfrc);
        	printf("GOOOOOOOOOOOOOOOOOOL\n");
        	golAfrc++;
        	placarA++;
        	sleep(2);
        //SITUAÇÃO DE GOL DO TIMEB
		} else if( gol > 14 && gol <= 18 || gol >= 290 && gol < 293){
			printf("%s no ATAQUE.\n", timeB);
        	sleep(1);
        	printf("%s faz passe de trivela para %s, ele domina bonito e segue em direção a gol do adversario...\n", jogadorBfrc,jogadorB);
        	sleep(3);
        	printf("Otima chance para o %s abrir o placar para o %s.\n", jogadorB, timeB);
        	sleep(3);
        	printf("%s depois de limpar 2 zagueiros, prepara o chute, chuta no contra pé do goleiro e abre o placar para o %s.\n", jogadorB, timeB);
        	printf("GOOOOOOOOOOOOOOOOOOOOL\n");
        	golB++;
        	placarB++;
        	sleep(2);
		} else if(gol > 18 && gol <= 22 || gol >= 293 && gol < 295){
			printf("%s no ATAQUE.\n", timeB);
        	sleep(1);
        	printf("%s faz Tiki-taka com %s, ele domina bonito, corta para o meio e faz um lançamento para o %s\n", jogadorBfrc,jogadorB, jogadorBfrc);
        	sleep(3);
        	printf("%s consegue driblar um zagueiro do %s e segue no ataque.\n", jogadorB, timeA);
        	sleep(3);
        	printf("%s cara a cara com o goleiro, e muito gelado faz uma cavadinha deixando o estadio do %s em silencio.\n", jogadorB, timeA);
        	printf("GOOOOOOOOOOOOOOOOOOOOL\n");
        	golBfrc++;
        	placarB++;
        	sleep(2);
		}
		
		//SITUAÇÃO DE NÃO GOL
		else if (gol > 22 && gol < 40){
			//SITUAÇÃO 1 DE NÃO GOL PARA TIME B
			printf("%s no ATAQUE.\n", timeB);
        	sleep(1);
			printf("Grande chance para o %s abrir o placar para o %s.\n", jogadorB, timeB);
        	sleep(3);
        	printf("%s recebe um lindo passe do seu lateral, corta pro meio, chuta firme mas no meio do gol %s.\n", jogadorB, timeB);
        	sleep(2);
        	
		} else if(gol > 40 && gol <= 60){
			//SITUAÇÃO 2 DE NÃO GOL PARA TIME B
			printf("%s no ATAQUE.\n", timeB);
        	sleep(1);
			printf("Chance para o %s abrir o placar para o %s.\n", jogadorB, timeB);
        	sleep(3);
        	printf("%s domina, porém fica sem visao do gol e decide cruzar para área.\n", jogadorB);
        	sleep(3);
        	printf("%s sem angulo tenta chutar de primeira, porém não consegue chutar com muita força.", jogadorBfrc);
        	sleep(2);
			
			//SITUAÇÃO 1 DE NÃO GOL PARA TIME A
		} else if (gol > 60 && gol <= 80 ){
			printf("%s vem descendo em velocidade pelo lado direito!\n", timeA);
			sleep(1);
			printf("%s recebe e parte pra cima da marcação.\n", jogadorA);
			sleep(2);
			printf("Ele faz o corte pro meio, olha pro gol...\n");
			sleep(2);
			printf("CHUTA DE FORA DA ÁREA!!!\n");
			sleep(2);
			printf("Mas a bola explode no zagueiro adversário e sai pela linha de fundo.\n");
			sleep(2);
			printf("É escanteio para o %s!\n", timeA);
			sleep(2);
			
			
			// NOVA SITUAÇÃO 2 DE NÃO GOL PARA TIME A
		} else if(gol > 80 && gol <= 100){
			printf("Contra-ataque rápido do %s!\n", timeA);
			sleep(1);
			printf("%s recebe no meio-campo e acelera a jogada.\n", jogadorA);
			sleep(2);
			printf("Ele faz um passe em profundidade para %s, que invade a área!\n", jogadorAfrc);
			sleep(3);
			printf("%s tenta finalizar cruzado...\n", jogadorAfrc);
			sleep(2);
			printf("Mas o goleiro do %s faz uma defesa espetacular com a ponta dos dedos!\n", timeB);
			sleep(2);
			printf("QUE DEFESA! Continua tudo igual no placar.\n");
			sleep(2);
			} 
		
        

        Sleep(500); // espera 1 segundo
    }
    system("cls");
    printf("Intervalo...\n");
    printf("Placar Parcial: %s %d x %d %s\n", timeA, placarA, placarB, timeB);
    printf("Iniciando 2 tempo em:\n");
    int contagem = 0;
	while(contagem <= 2){
		contagem++;
		printf("%d\n", contagem);
		sleep(1);
	} 
	printf("Inicio do 2 Tempo."); sleep(1); 
	
	
	// Segundo tempo
	while (tempo2 <= 90) { 
    tempo2+=4;
    system("cls");
    int gol = rand() % 160 + 1;
    printf("2 Tempo: %d\nPlacar: %s %d x %d %s\n", tempo2, timeB, placarB, placarA, timeA);

    // GOL TIME B
    if (gol <= 5) {
        printf("%s vai ao ataque com velocidade!\n", timeB);
        sleep(1);
        printf("%s toca em profundidade para %s, que invade a área com liberdade!\n", jogadorBfrc, jogadorB);
        sleep(3);
        printf("Olha a chance clara! O %s finaliza com categoria, no canto!\n", jogadorB);
        sleep(3);
        printf("É GOOOOOOOOOOOOOL do %s!\n", timeB);
        golB++;
        placarB++;
        sleep(2);

    } else if (gol > 5 && gol <= 10) {
        printf("%s aperta a marcação e recupera a bola.\n", timeB);
        sleep(1);
        printf("%s encontra %s livre na ponta!\n", jogadorB, jogadorBfrc);
        sleep(3);
        printf("%s ajeita e manda uma pancada pro gol!\n", jogadorBfrc);
        sleep(2);
        printf("GOOOOOOOOOOOOOOOOOOOOL do %s! Uma bela finalização!\n", timeB);
        golBfrc++;
        placarB++;
        sleep(2);

    // GOL TIME A
    } else if (gol > 10 && gol <= 15) {
        printf("%s começa a construir a jogada com paciência.\n", timeA);
        sleep(1);
        printf("%s toca para %s, que avança com muita categoria.\n", jogadorAfrc, jogadorA);
        sleep(3);
        printf("%s vê o espaço e bate colocado, sem chance pro goleiro!\n", jogadorA);
        sleep(2);
        printf("GOOOOOOOOOOOOOOL do %s, que resposta rápida!\n", timeA);
        golA++;
        placarA++;
        sleep(2);

    } else if (gol > 15 && gol <= 20) {
        printf("%s domina o meio-campo e acelera o jogo.\n", timeA);
        sleep(1);
        printf("%s recebe um belo passe de %s e dispara em direção ao gol!\n", jogadorA, jogadorAfrc);
        sleep(3);
        printf("Ele finaliza com frieza, rasteiro no canto!\n");
        sleep(2);
        printf("GOOOOOOOOOL do %s! Que bela jogada coletiva!\n", timeA);
        golA++;
        placarA++;
        sleep(2);
    }

    // NÃO GOL

    else if (gol > 20 && gol < 40) {
        // TIME A perde a chance
        printf("Chegada perigosa do %s pelo meio!\n", timeA);
        sleep(1);
        printf("%s tenta o passe rápido para %s dentro da área.\n", jogadorA, jogadorAfrc);
        sleep(3);
        printf("%s tenta a finalização, mas manda por cima do gol.\n", jogadorAfrc);
        sleep(2);

    } else if (gol > 40 && gol <= 60) {
        // TIME A mais uma chance perdida
        printf("%s avança com liberdade pelo lado esquerdo.\n", timeA);
        sleep(1);
        printf("%s se apresenta no ataque, recebe e arrisca de longe!\n", jogadorA);
        sleep(3);
        printf("Mas a bola sai fraca e fica fácil para o goleiro do %s.\n", timeB);
        sleep(2);

    } else if (gol > 60 && gol <= 80) {
        // TIME B perde o gol
        printf("%s recupera a posse no campo ofensivo.\n", timeB);
        sleep(1);
        printf("%s faz o lançamento para %s, que se infiltra entre os zagueiros!\n", jogadorB, jogadorBfrc);
        sleep(3);
        printf("Ele chuta de primeira, mas pega mal na bola e ela vai pra fora.\n");
        sleep(2);

    } else if (gol > 80 && gol <= 100) {
        // TIME B outra oportunidade desperdiçada
        printf("Boa jogada do %s pelo centro do campo!\n", timeB);
        sleep(1);
        printf("%s acha um espaço e deixa %s cara a cara com o goleiro!\n", jogadorB, jogadorBfrc);
        sleep(2);
        printf("Chuta firme, mas o arqueiro do %s espalma no reflexo!\n", timeA);
        sleep(2);
        printf("Defesaça! Quase o %s marca!\n", timeB);
        sleep(2);
        
    } else if (tempo2 >= 80 && tempo2 <= 90) {
       int chanceFinal = rand() % 100 + 1;

    if (chanceFinal <= 60) {
        // Nada acontece nos acréscimos
        printf("O jogo fica tenso nos minutos finais, mas as defesas seguram bem!\n");
        sleep(2);
        
    } else if (chanceFinal <= 80) {
        // GOL NOS ACRÉSCIMOS PARA TIME A
        printf("Últimos minutos do jogo e o %s pressiona com tudo!\n", timeA);
        sleep(2);
        printf("%s levanta a cabeça e acha %s livre na entrada da área!\n", jogadorA, jogadorAfrc);
        sleep(2);
        printf("%s domina no peito, ajeita para o pé direito...\n", jogadorAfrc);
        sleep(2);
        printf("SOLTA UMA BOMBA NO CANTO ALTO!!!\n");
        sleep(2);
        printf("É GOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOL DO %s!!!\n", timeA);
        printf("Um gol heroico que pode garantir a vitória!\n");
        golAfrc++;
        placarA++;
        sleep(2);

    } else {
        // GOL NOS ACRÉSCIMOS PARA TIME B
        printf("O %s não desiste e parte com tudo para o ataque!\n", timeB);
        sleep(2);
        printf("%s recebe no meio, gira com categoria e lança %s em profundidade!\n", jogadorB, jogadorBfrc);
        sleep(2);
        printf("%s invade a área, o goleiro sai desesperado...\n", jogadorBfrc);
        sleep(2);
        printf("TOCA POR CIMA!!!\n");
        sleep(2);
        printf("É GOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOL INACREDITÁVEL DO %s!!!\n", timeB);
        golBfrc++;
        placarB++;
        sleep(2);
    }
}

    Sleep(500);
}

	
	system("cls");
    printf("Placar final: %s %d x %d %s\n\n",timeA, placarA, placarB, timeB);
	printf("Fim de jogo!\n");
   	char mvp[50];
	int mvpgol = 0;
	
	
	if (golA > golAfrc && golA > golB && golA > golBfrc) {
	    strcpy(mvp, jogadorA);
	    mvpgol = golA;
	} else if (golAfrc > golA && golAfrc > golB && golAfrc > golBfrc) {
	    strcpy(mvp, jogadorAfrc);
	    mvpgol = golAfrc;
	} else if (golB > golA && golB > golAfrc && golB > golBfrc) {
	    strcpy(mvp, jogadorB);
	    mvpgol = golB;
	} else if (golBfrc > golA && golBfrc > golAfrc && golBfrc > golB) {
	    strcpy(mvp, jogadorBfrc);
	    mvpgol = golBfrc;
	} else {
	    strcpy(mvp, "Empate - Sem Destaque");
	    mvpgol = 0;
	}

	if (mvpgol > 0) {
    printf("Man Of The Match: %s com %d gol(s)\n\n", mvp, mvpgol);
	} else {
	    printf("Man Of The Match: %s\n\n", mvp);
	}

	printf(" Gols do jogo:\n");
	printf("%s - %d gol(s)\n", jogadorA, golA);
	printf("%s - %d gol(s)\n", jogadorAfrc, golAfrc);
	printf("%s - %d gol(s)\n", jogadorB, golB);
	printf("%s - %d gol(s)\n\n", jogadorBfrc, golBfrc);
	
	//mercados de aposta
	
	*totalgol7 += mvpgol;//PRECISA ALTERAR
	*golA8 += placarA;//PRECISA ALTERAR
	*golB8 += placarB;//PRECISA ALTERAR
	
	if (placarA == placarB) {
	    *vencedor7 = 2;  // empate
	} else if (placarA > placarB) {
	    *vencedor7 = 3;  // vitória time A (Uruguai)
	} else if (placarB > placarA) {
	    *vencedor7 = 4;  // vitória time B (Itália)
	} else {
	    *vencedor7 = 1;  // só exibir placar
	}

}


