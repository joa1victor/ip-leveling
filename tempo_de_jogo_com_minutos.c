#include <stdio.h>
 
int main() {
 
    int hr_ini, min_ini, hr_fin, min_fin;

    scanf("%d%d%d%d", &hr_ini, &min_ini, &hr_fin, &min_fin);

    int comeco, fim, duracao;

//converte tudo para minutos

    comeco = hr_ini * 60 + min_ini;
    fim = hr_fin * 60 + min_fin;
    duracao = fim - comeco;

//condiciona o cenário negativo e nulo, aumentando um dia

    if(duracao<=0){
        duracao+=24 * 60;
    }

    int horas, minutos;

//em minutos, ao dividir por 60, vc obtém as horas e ao tirar o resto de 60, vc obtém os minutos

    horas = duracao/60;
    minutos = duracao%60;


    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);

    return 0;
}