
//Desafio Xadrex Mestre
#include <stdio.h>

    void movimentoTorre(int torreCasa){  //movimento torre 

        if (torreCasa > 0){            //if para validar até que torrecasa seja menor que 6

            printf("Direta!! %d \n",torreCasa);
            movimentoTorre(torreCasa - 1);
        }
    }// final da recursividade da torre

    void movimentoBispo(){
        int BispoCasa=5;

        printf("Cima a Direita:\n");
        for(int i = 0;i < BispoCasa;i++){  //for vertical

            for(int j = 0;j < 1;j++){         //for horizontal

                printf("Cima Direita\n");
            }


        }

        printf("Baixa a Esquerda");
        for (int i = 0;i < BispoCasa;i++){
            for(int j = 0;j < 1;j++){

                printf("Baixo esquerda!!");
            }
        }

        



    }//final movimento recursidade bispo


    void movimentoRainha(int movRainha){
            if (movRainha > 0){   //movimento de recursividade da rainha


                printf("Mover-se a Esquerda!! %d\n",movRainha);
                movimentoRainha(movRainha - 1);
            }


    }//final da logica de recursividade da rainha







int main(){
    //Logica do movimento da torre
        int TorreCasa=6;  //quantida de casas a mover-se
        int Torredirecao=1; 
        int TorreCont=1; //Contador da movimento da torre

        //Movimento do Bispo
        int BispoCasa=5;  //quantida de casas a mover-se
       


        //Movimentos da Rainha
        
        int contRainha=1;  //conta a direção das casas
        int Rainha=9;       //quantidade de movimentos da rainha

          //Movimentos do cavalo
        
          int cavaloAcima=2;  //conta a direção das casas
          int cavaloDireita=1;       //quantidade de movimentos do cavalo para esquerda

          char opcao;
          
        printf("Selecione o movimentos das peças : T-Torre, R-Rainha,C-Cavalo,B-Bispo \n");
        scanf("%c",&opcao);

        switch (opcao)
        {
        case 'T':
        case 't':
            printf("****Movimento da Torre**** \n");
            //Usando recursividade para o movimento da torre
                
                
                movimentoTorre(TorreCasa);
            break;
        case 'B':
        case 'b':

        printf("\n****Movimento do Bispo****\n");
        //Usar a logica usando o comando de repitição FOR
            movimentoBispo(4,1,1);

            break;


        case 'R':
        case 'r':

                printf("\n****Movimentos da Rainha****\n");
                //Usar a logica de recursividade da Rainha
                movimentoRainha(Rainha);
           

            break;

            case 'C':
            case 'c':
                printf("\n****Movimentos do cavalo****\n");
            //Usar a logica usando o comando de repitição WHILE e for

            for (int i = 0;i<4;i++){

                if (i==2) break;;
                    
                printf("Acima!!\n");
                
                // if (i==1) continue;;
                

        }       
             printf("Direita\n");
        break;
          

        
        default:

        printf("Opcao Invalida!!");
            break;
        };
    }



