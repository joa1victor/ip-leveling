#include <stdio.h>
 
int main() {
 
    int hr_ini, hr_fin;

    scanf("%d%d",&hr_ini, &hr_fin);

    int duracao;

    duracao = hr_fin - hr_ini;

    if(duracao==0){
        duracao = 24;
    } else if(duracao<0){
        duracao += 24;
    }

    printf("O JOGO DUROU %d HORA(S)\n", duracao);

    return 0;
}