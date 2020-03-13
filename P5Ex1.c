#include <stdio.h>

int main()
{
    int n1, centena, dezena, unidade, aux;

    printf("Digite um numero entre 100 e 999: ");
    scanf("%i", &n1);

    aux = n1;

    unidade = n1 % 10;
    n1 -= unidade;
    dezena = (n1 % 100) / 10;
    n1 -= dezena;
    centena = (n1 % 1000) / 100;

    if((unidade * unidade * unidade + dezena * dezena * dezena + centena * centena * centena) == aux){
        printf("%i eh um numero de angstron", aux);
    } else {
        printf("%i nao eh um numero de angstron", aux);
    }


}
