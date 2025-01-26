#include <stdio.h>

void ordem(int a, int b, int c){

    int temp;

//ordena os valores com base em cada situação, primeiro definindo a como o menor número da ordem crescente, 
//depois comparando b e c para definir c como o maior número.
// se A é maior que B, logo, utilizei a variavel temp, para reservar temporariamente A, para que mude posição os valores das variaveis a e b.
    if(a>b){
       temp = a;
       a = b;
       b = temp;
    }
//faço o mesmo aqui, para verificar A, tornando ela o menor valor. Para configurar a ordem
    if(a > c){
        temp = a;
        a = c;
        c = temp;
    }
//verifico apenas b e c para definir C como o local da maior variavel.
    if(b > c){
        temp = b;
        b = c;
        c = temp;
    }
    printf("%d\n%d\n%d\n", a, b, c);
}

int main(){

    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

    ordem(a, b, c);
    puts("");
    printf("%d\n%d\n%d\n", a, b, c);

    

    return 0;
}