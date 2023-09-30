#include <stdio.h>

int main (void){
int a[3], b[3];
int somaA=0, somaB=0;

    printf("Digite os resultados dos jogos\n\n");

        for (int i=0; i<3; i++){
            printf("\nJogo %i:\n", i+1);

            printf("Quanto marcou o time A? ");
                scanf("%i", &a[i]);

            printf("Quanto marcou o time B? ");
                scanf("%i", &b[i]);
        }

        for (int i=0; i<3; i++){

            if (a[i] == b[i]){
                somaA = somaA+1;
                somaB = somaB+1;

            }else if (a[i] > b[i]){
                somaA = somaA+3;

            }else {
                somaB = somaB+3;
            }
        }

        if (somaA == somaB){
            printf("Infelizmente empatamos, ambos os times terminaram com %i pontos, só na semana que vem agora com o jogo de desempate", somaA);

        }else if (somaA > somaB){
            printf("E o campeao do campeonato foi o time A com %i pontos, em segundo ficou o time B com %i pontos", somaA, somaB);

        }else {
            printf("E o campeao do campeonato foi o time B com %i pontos, em segundo ficou o time A com %i pontos", somaA, somaB);
        }



return 0;
}
