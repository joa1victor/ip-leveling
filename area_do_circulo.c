#include <stdio.h>
#include <math.h>

int main(){

    double raio;

    scanf("%lf", &raio);

    double area, n = 3.14159;

    area = n*pow(raio,2);

    printf("A=%.4lf\n", area);

    return 0;
}