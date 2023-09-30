#include <stdio.h>

int main (void){
int i;
float A[3], B[3], C[3];

// LEITURA DOS DADOS DAS VOLTAS DAS MOTOS
    printf ("\nDigite os tres tempos da moto A, em segundos.");

        for (i=0; i<3; i++){
            printf("\nVolta %i: ", i+1);
                scanf("%f", & A[i]);
        }

    printf ("\n\nDigite os tres tempos da moto B, em segundos.");

        for (i=0; i<3; i++){
            printf("\nVolta %i: ", i+1);
                scanf("%f", & B[i]);
        }

    printf ("\n\nDigite os tres tempos da moto C, em segundos.");

        for (i=0; i<3; i++){
            printf("\nVolta %i: ", i+1);
                scanf("%f", & C[i]);
        }

float medA, medB, medC;

// CALCULO DOS 2 MELHORES TEMPOS DE CADA MOTO
// MOTO A
    if (A[0] > A[1] && A[0] > A[2]){
        medA = (A[1]+A[2])/2;

    }else if (A[1] > A[0] && A[1] > A[2]){
        medA = (A[0]+A[2])/2;

    }else {
        medA = (A[0]+A[1])/2;
    }

//MOTO B
    if (B[0] > B[1] && B[0] > B[2]){
        medB = (B[1]+B[2])/2;

    }else if (B[1] > B[0] && B[1] > B[2]){
        medB = (B[0]+B[2])/2;

    }else {
        medB = (B[0]+B[1])/2;
    }

//MOTO C
    if (C[0] > C[1] && C[0] > C[2]){
        medC = (C[1]+C[2])/2;

    }else if (C[1] > C[0] && C[1] > C[2]){
        medC = (C[0]+C[2])/2;

    }else {
        medC = (C[0]+C[1])/2;
    }


//CLASIFICAÇÃO
    // PARA A-B-C
    if (medA < medB && medB < medC){
        printf("\n\nA classificacao ficou:\n\nMoto A em primeiro lugar, com o tempo de %.2f segundos\nMoto B em segundo lugar, com o tempo de %.2f segundos\nMoto C em terceiro lugar, com o tempo de %.2f segundos", medA, medB, medC);

    // PARA A-C-B
    }else if (medA < medB && medC < medB){
        printf("\n\nA classificacao ficou:\n\nMoto A em primeiro lugar, com o tempo de %.2f segundos\nMoto C em segundo lugar, com o tempo de %.2f segundos\nMoto B em terceiro lugar, com o tempo de %.2f segundos", medA, medC, medB);

    //PARA C-B-A
    }else if (medC < medB && medB < medA){
        printf("\n\nA classificacao ficou:\n\nMoto C em primeiro lugar, com o tempo de %.2f segundos\nMoto B em segundo lugar, com o tempo de %.2f segundos\nMoto A em terceiro lugar, com o tempo de %.2f segundos", medC, medB, medA);

    //PARA C-A-B
    }else if (medC < medA && medA < medB){
        printf("\n\nA classificacao ficou:\n\nMoto C em primeiro lugar, com o tempo de %.2f segundos\nMoto A em segundo lugar, com o tempo de %.2f segundos\nMoto B em terceiro lugar, com o tempo de %.2f segundos", medC, medA, medB);

    //PARA B-A-C
    }else if (medB < medA && medA < medC){
        printf("\n\nA classificacao ficou:\n\nMoto B em primeiro lugar, com o tempo de %.2f segundos\nMoto A em segundo lugar, com o tempo de %.2f segundos\nMoto C em terceiro lugar, com o tempo de %.2f segundos", medB, medA, medC);

    //PARA B-C-A
    }else {
        printf("\n\nA classificacao ficou:\n\nMoto B em primeiro lugar, com o tempo de %.2f segundos\nMoto C em segundo lugar, com o tempo de %.2f segundos\nMoto A em terceiro lugar, com o tempo de %.2f segundos", medB, medC, medA);
    }

    printf("\n\n");

return 0;
}
