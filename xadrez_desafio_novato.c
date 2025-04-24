
//Desafio Xadrex Novato
#include <stdio.h>

int main(){
    //Logica do movimento da torre
        int TorreCasa=6;  //quantida de casas a mover-se
        int Torredirecao=1; 
        int TorreCont=1; //Contador da movimento da torre

        //Movimento do Bispo
        int BispoCasa=5;  //quantida de casas a mover-se
        int direcao1=1;   //contador de direção
        int direcao2=3;


        //Movimentos da Rainha
        
        int contRainha=1;  //conta a direção das casas
        int Rainha=9;       //quantidade de movimentos da rainha

          //Movimentos do cavalo
        
          int cavaloBaixo=2;  //conta a direção das casas
          int cavaloEsquerda=2;       //quantidade de movimentos do cavalo para esquerda
          int j=1;
  


        printf("****Movimento da Torre**** \n");
        //Usar a logica com Do While
        do{

            printf("Direta!! %d \n",TorreCont);
                TorreCont++;

        } while (TorreCont < TorreCasa);   //contador da torre


        printf("\n****Movimento do Bispo****\n");
        //Usar a logica usando o comando de repitição FOR

        for(int i=0; i< BispoCasa; i++){

            switch (direcao1)  //case que mostra  a direção da movimentação das casas
            {
                case 1: printf("Cima ");break;
                
             }

            switch (direcao2)
            {
                    case 3: printf("Esquerda\n");break;
                    
             }




        }

        printf("\n****Movimentos da Rainha****\n");
        //Usar a logica usando o comando de repitição WHILE
        while (contRainha < Rainha)
        {
            printf("Esquerda!! %d \n",contRainha);
            contRainha++;                           /* Mostra a movimentação da rainha*/
        }


        printf("\n****Movimentos do cavalo****\n");
        //Usar a logica usando o comando de repitição WHILE e for

        for (int i = 0 ;i < cavaloBaixo;i++){

            printf("Baixo \n"); //duas casas para baixo!!


        }
        

        while (j < cavaloEsquerda)
        {
            printf("Esquerda\n");  //uma casa para esquerda
            j++;                    //contagem do movimento.
        }
        
      
        

return 0;


}
