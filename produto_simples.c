#include <stdio.h>

int produtoSimples(int a, int b){
    return a * b;
}

int main(){

    int a, b, prod;

    scanf("%d%d", &a, &b);

    prod = produtoSimples(a, b);

    printf("PROD = %d\n", prod);

    return 0;
}