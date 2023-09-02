#include <stdio.h>
#include <time.h>

void main () {


    int dia;
    int mes;
    int ano;
    int diaAtual;
    int anoAtual;
    int mesAtual;

    printf("Digite o ano atual: ");
    scanf("%d",&anoAtual);
    printf("Digite o mês atual: ");
    scanf("%d",&mesAtual);
    printf("Digite o dia do mês hoje: ");
    scanf("%d",&diaAtual);

    printf("Digite o dia do seu aniversário: ");
    scanf("%d",&dia);
    printf("Digite o mês do seu aniversário: ");
    scanf("%d",&mes);
    printf("Digite o ano do seu aniversário: ");
    scanf("%d",&ano);

    int idadeAnos = anoAtual - ano;
    int idadeMeses = (idadeAnos * 12) + mes;
    int idadeDias = (idadeMeses * 30);
    int idadeSemanas = idadeDias/7;


    printf("A idade dessas pessoas em anos é: %i\n", anoAtual - ano);
    printf("A idade atual dessa pessoa em meses é: %i\n", idadeMeses);
    printf("A idade atual dessa pessoa em semanas é: %i\n", idadeSemanas);
    printf("A idade atual dessa pessoa em dias é: %i\n", idadeDias);




}