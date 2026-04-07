#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int escolha;
	char escolhapr;
	
	
		
	do{	
		
		printf("\tHollow Next Games\n\n");
		printf("1)Perguntas Respostas\n2)Jawas na Caixa\n3)Wookiee Wars\n4)Sair\n");
		scanf(" %i",&escolha);
		system("cls");
		
		
		
		
		if(escolha==1){
		do{
			int acertos=0;
			int total=5;
			printf("Bem-Vindo ao jogo de perguntas e respostas\n\n");
			printf("Pergunta 1\n");
			printf("Quem destruiu a 1 Estrela da Morte\n");
			printf("\na)Anakin\nb)Obi-Wan\nc)Luke\nd)Princesa Leia\n");
			scanf(" %c",&escolhapr);
			system("cls");
			if(escolhapr=='c'){
				printf("\nResposta Certa\n\n");
				acertos+=1;
			}
			
			else{
				printf("\nResposta Errada\n\n");
				printf("\n Resposta Certa era Luke\n");
			}
			
			
			printf("Pergunta 2\n");
			printf("Quem e o pai de Luke Skywalker\n");
			printf("\na)Darth Vader\nb)R2D2\nc)Han Solo\nd)Jaba\n");
			scanf(" %c",&escolhapr);
			system("cls");
			if(escolhapr=='a'){
				printf("\nResposta Certa\n\n");
				acertos+=1;
			}
			
			else{
				printf("\nResposta Errada\n\n");
				printf("\n Resposta Certa era Darth Vader\n");
			}
			
			printf("Pergunta 3\n");
			printf("Qual nome do planeta natal do Luke\n");
			printf("\na)Coruscant\nb)Endor\nc)Dagobah\nd)Tatooine\n");
			scanf(" %c",&escolhapr);
			system("cls");
			if(escolhapr=='d'){
				printf("\nResposta Certa\n\n");
				acertos+=1;
			}
			
			else{
				printf("\nResposta Errada\n\n");
				printf("\n Resposta Certa era Tatooine\n");
	
			}
			
			printf("Pergunta 4\n");
			printf(" O que Anakin era de Obi Wan?\n");
			printf("\na)Sobrinho\nb)Padawan\nc)Filho\nd)Mestre\n");
			scanf(" %c",&escolhapr);
			system("cls");
			if(escolhapr=='b'){
				printf("\nResposta Certa\n\n");
				acertos+=1;
			}
			
			else{
				printf("\nResposta Errada\n\n");
				printf("\n Resposta Certa era Padawan\n");
			}
			
			printf("Pergunta 5\n");
			printf("Em que ano foi lancado o primeiro filme de Star Wars? \n");
			printf("\na)1978\nb)1999\nc)1977\nd)1915\n");
			scanf(" %c",&escolhapr);
			system("cls");
			if(escolhapr=='c'){
				printf("\nResposta Certa\n\n");
				acertos+=1;
			}
			
			else{
				printf("\nResposta Errada\n");
				printf("\n Resposta Certa era 1977\n\n");
			}
			
			printf("Parabens voce finalizou o jogo de perguntas e respostas!! \n\nVoce acertou %d de %d perguntas \n\nQuer jogar novamente: s=sim n=nao\n",acertos,total);
			scanf(" %c",&escolhapr);
			system("cls");
		
		}while(escolhapr=='s');
		  	}
		  	
		  	
		  	if(escolha==2){
		  		char nomes[7][20]={"Anakin", "Luke", "Han Solo", "Leia", "Yoda", "R2D2", "Palpatine"};
		  		char p1[20], p2[20], *playeratual;
		  		int escolhaCnC, Jawas, botao, turno;
		  		char repetir;
		  		do{
		  		printf("Bem-Vindo ao jogo dos Jawas na Caixa\n");
		  	
		  		printf("Nomes Disponiveis: Anakin, Luke, Han Solo, Leia, Yoda, R2D2, Palpatine\n");
		  		
		  		printf("Jogador 1 Escolha seu nome: \n");
		  		scanf(" %s",p1);
		  		printf("Jogador 2 Escolha seu nome: \n");
		  		scanf(" %s",p2);
		  		
		  		srand(time(NULL));
				turno = rand() % 2;
				int gameover = 0;
					
				while(gameover==0){
					if(turno==0){
						playeratual=p1;
						
					}
					else{
						playeratual=p2;
					}
					
					botao=(rand() % 5) + 1;
					Jawas=(rand() % 5) + 1;
					
					while(Jawas==botao) Jawas=(rand() % 5) + 1;
					
					printf("\nTurno de %s\n",playeratual);
					printf("Escolha uma (1-5): ");
					scanf(" %i", &escolhaCnC);
					if(escolhaCnC==botao){
						printf("Voce venceu e abriu a tumba\n");
						gameover = 1;
					}
					else if(escolhaCnC==Jawas){
						printf("Voce Morreu pelo blaster do Jawa\n");
						gameover= 1;
					}
					else{
						printf("Caixa Vazia va pra proxima porta\n");
						turno = 1 - turno;
						
					}
				}
					printf("\nParabens voce finalizou o jogo dos Jawas na Caixa!! \nQuer jogar novamente: s=sim n=nao\n");
					scanf(" %c",&repetir);
					system("cls");
					
				}while(repetir=='s');
				
		  	}	
		  		
		  		if(escolha==3){
		  			int w1_p1, w2_p1, w1_p2, w2_p2;
		  			int op_acao, op_alvo, op_origem, forca;
		  			int turno = 0;
		  			char repetirWW;
		  			
		  			do{
		  			
		  			w1_p1 = 1; w2_p1 = 1;
		  			w1_p2 = 1; w2_p2 = 1;
		  			turno = 0;
		  			
		  			while((w1_p1 > 0 || w2_p1 > 0) && (w1_p2 > 0 || w2_p2 > 0)){
		  				system("cls");
		  				printf("Bem-Vindo ao Wookiee Wars\n");
		  				printf("Jogador 1: [w1: %d] [w2: %d]\n",w1_p1, w2_p1);
		  				printf("Jogador 2: [w1: %d] [w2: %d]\n",w1_p2, w2_p2);
		  				printf("\nVez do Jogador %d\n",turno + 1);
		  				
		  				printf("1) Atacar\n2) Dividir\n Escolha: \n");
		  				scanf(" %d",&op_acao);
		  				
		  				if(op_acao==1){
		  					printf("Com qual Wookiee quer atacar (1 ou 2)\n");
		  					scanf(" %d",&op_origem);
		  					printf("Qual Wookiee Inimigo voce ira atarcar (1 ou 2)\n");
		  					scanf(" %d",&op_alvo);
		  					
		  					if (turno == 0) { 
                    
                    		if (op_origem == 1) {
                        		forca = w1_p1;
                        	}	
                     		else {
                        		forca = w2_p1;
                    		}

                    
                    		if (op_alvo == 1) {
                        		w1_p2 = w1_p2 + forca;
                        	 }
                    		else {
                        		w2_p2 = w2_p2 + forca;
                    		}
		  					
						  }
						  	else { 
                    
                    		if (op_origem == 1) {
                        		forca = w1_p2;
                        	}
                     		else {
                        		forca = w2_p2;
                    		}

                    
                    		if (op_alvo == 1) {
                        		w1_p1 = w1_p1 + forca;
                        	}	
                     		else {
                        		w2_p1 = w2_p1 + forca;
                    			}
                		}
            				}
            				else if (op_acao == 2) { 
                
                			if (turno == 0) {
                    		if (w1_p1 > 0 && w2_p1 == 0) {
                        		w2_p1 = w1_p1 / 2;
                        		w1_p1 = w1_p1 - w2_p1;
                        	}	
                     		else if (w2_p1 > 0 && w1_p1 == 0) {
                        		w1_p1 = w2_p1 / 2;
                        		w2_p1 = w2_p1 - w1_p1;
                    			}
                    			} 
                			else {
                    		if (w1_p2 > 0 && w2_p2 == 0) {
                        		w2_p2 = w1_p2 / 2;
                        		w1_p2 = w1_p2 - w2_p2;
                        		 } 
                   			else if (w2_p2 > 0 && w1_p2 == 0) {
                        		w1_p2 = w2_p2 / 2;
                        		w2_p2 = w2_p2 - w1_p2;
                    						}
                								}
            										}

            				if (w1_p1 > 5){
								w1_p1 = 0   
									}
            				if (w2_p1 > 5) {
								w2_p1 = 0   
							}
            				if (w1_p2 > 5){
								w1_p2 = 0
									}
            				if (w2_p2 > 5){
								w2_p2 = 0
									}

            					turno = 1 - turno; 
        		}
		  				printf("\nParabens voce finalizou o jogo do Wookiees Wars!! \nQuer jogar novamente: s=sim n=nao\n");
						scanf(" %c",&repetirWW);
						system("cls");
		  				
					  }while(repetirWW=='s');
					  
				
		  			  }
		  			
				  }while(escolha!=4);
		  	
			
	
	
	
	return 0;
	}
	
