#include <stdio.h>
 
int main() {
 
    int hr_ini, min_ini, hr_fin, min_fin;

    scanf("%d%d%d%d", &hr_ini, &min_ini, &hr_fin, &min_fin);

    int horas;
    int minutos;

    horas = hr_fin - hr_ini;
    minutos = min_fin - min_ini;
    
    int minutoshr = 0;

    if(horas<0){
        horas += 24;
    } else if(horas==0){
        horas =24;
    } else if(minutos<0 && horas==1){
        horas = 60;
        minutos+=horas;
        horas = minutoshr;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);

    return 0;
}