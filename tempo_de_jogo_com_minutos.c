#include <stdio.h>
 
int main() {
 
    int hr_ini, min_ini, hr_fin, min_fin;

    scanf("%d%d%d%d", &hr_ini, &min_ini, &hr_fin, &min_fin);

    int horas;
    int minutos;

    horas = hr_fin - hr_ini;
    minutos = min_fin - min_ini;

    printf("%d e %d\n", horas, minutos);

    return 0;
}