#include <stdio.h>

int main(){
    int x;
    
    do{
        printf("Digite o tamanho da matriz, deve ser entre 1 e 5: \n");
        scanf("%d", &x);
    }while(x < 1 || x > 5);

    int matriz[x][x];

    for (int i = 0; i < x; i++){
        for(int j = 0; j < x; j++){
            printf("Digite o elemento da posicao %d, %d da matriz: \n",i + 1,j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    int maior_elemento[x], soma[x], posicao_menor[2];
    int menor = matriz[0][0];
    posicao_menor[0] = 0; posicao_menor[1] = 0;


    for (int i = 0; i < x; i++){
        int maior = matriz[i][0];
        soma[i] = 0;
        
        for(int j = 0; j < x; j++){
            if (matriz[i][j] > maior){
                maior = matriz[i][j];
            }
            
            soma[i] += matriz[i][j];

            if (matriz[i][j] < menor){
                menor = matriz[i][j];
                posicao_menor[0] = i;
                posicao_menor[1] = j;
            }
        }
        
        maior_elemento[i] = maior;

    }

    for (int i = 0; i < x; i++){
        printf("Maior elemento da linha %d: %d\n", (i + 1), maior_elemento[i]);
        printf("Soma dos elementos da linha %d: %d\n", (i + 1), soma[i]);
    }

    printf("Posicao do menor elemento: %d %d\n", posicao_menor[0] + 1, posicao_menor[1] + 1);
}
