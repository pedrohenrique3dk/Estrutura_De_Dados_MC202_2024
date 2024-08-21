#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
    int N, M;
    int um, d, u, i, c;
    int decimal, centena;
    int cont = 1;
    printf("recebendo o valor N: ");
    scanf("%d", &N);
    printf("recebendo o valor M: ");
    scanf("%d", &M);
    printf("%d %d", N, M);
    printf("\n");
    for (i = N; i <= M; i++){
        printf("%d\n", N);
        N++;
        if (M < 100){
            d = (int)floor(N/10);
            u = N - (d*10);
            if (d != u){
                cont++;
            }
        }else if (100 < M < 999){
            c = (int)floor(N/100);
            decimal = N - (c*100);
            d = (int) floor(decimal/10);
            u = decimal - (d*10);
            if ((d != u) && (d != c) && (c != u)){
                cont++;
            }  
        } else{
            um = (int)floor(N/1000);
            centena = N - (um*1000);
            c = (int) floor(centena/100);
            


        }
    }
    printf("%d", cont);
    return 0;
}
