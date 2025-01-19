#include <stdio.h>

int soma(int a, int b){
    return a + b;
}

int main(){ 

    int a, b;

    scanf("%d%d", &a, &b);

    int x;

    x = soma(a, b);

    printf("SOMA = %d\n", x);

    return 0;
}