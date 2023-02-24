#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Exercícios sobre os comandos básicos em C
*/

//1. Faça um programa que imprima o seu nome.
void imprimir_nome() {
    printf("João Paulo\n");
}

//2. Faça um programa que imprima o produto dos valores 30 e 27.
void imprimir_produto() {
    printf("30 * 27 = %d\n",30*27);
}

//3. Faça um programa que imprima a média aritmética entre os números 5, 8, 12.
void imprimir_media() {
    float media = (5.0 + 8 + 12)/3;
    printf("(8+5+12)/3 = %f\n", media);
}

//4. Faça um programa que leia e imprima um número inteiro.
void imprimir_inteiro() {
    int numero;
    printf("Informe um núm. inteiro: ");
    scanf("%d", &numero);
    printf("Número informado foi %d\n", numero);
}

//5. Faça um programa que leia dois números reais e os imprima.
void imprimir_reais() {
	float num1, num2;
    printf("Número 1: ");
    scanf("%f", &num1);
    printf("Número 2: ");
    scanf("%f", &num2);    
    printf("Números informados %f e %f\n", num1, num2);	
}

//6. Faça um programa que leia um número inteiro e imprima o seu
//   antecessor e o seu sucessor.
void imprimir_sucessor_antecessor() {
	int numero;
    printf("Informe um núm. inteiro: ");
    scanf("%d", &numero);
    printf("Sucessor de  %d = %d\n", numero, numero + 1);
    printf("Antecessor de  %d = %d\n", numero, numero - 1);    
}

//7. Faça um programa que leia o nome o endereço e o telefone de
//   um cliente e ao final, imprima esses dados.
void imprimir_dados_pessoais() {
	char nome[31];
	char endereco[51];
	char telefone[15];
	printf("Nome: ");
    scanf(" %30[^\n]",nome);
   	printf("Endereço: ");
    scanf(" %50[^\n]",endereco);
    printf("Telefone: ");
    scanf(" %14[^\n]",telefone);
    printf("Nome: %s\nEndereço: %s\nTelefone: %s\n",nome,endereco,telefone);	
}

//8. Faça um programa que leia dois números inteiros e imprima a
//   subtração deles.
void imprimir_subtracao() {
    int num1 = 0, num2 = 0;
    printf("Digite o primeiro número inteiro: ");
    scanf(" %d",&num1);
    printf("Digite o segundo número inteiro: ");
    scanf(" %d",&num2);
    printf("%d - %d = %d:\n", num1, num2, num1-num2);
}

//9. Faça um programa que leia umnúmero real e imprima ¼ deste número.
void imprimir_um_quarto() {
    float numero = 0.0;
    printf("Digite um número real: ");
    scanf(" %f",&numero);
    printf("¼ de %2.2f = %2.2f\n",numero,numero/4.0);
}

//10. Faça um programa que leia três números reais e calcule a
//    média aritmética destes números. Ao final, o programa deve
//    imprimir o resultado do cálculo.
void calcular_media() {
    float num1 = 0.0, num2 = 0.0, num3 = 0.0;
    printf("Digite o primeiro número real: ");
    scanf(" %f",&num1);
    printf("Digite o segundo número real: ");
    scanf(" %f",&num2);
    printf("Digite o terceiro número real: ");
    scanf(" %f",&num3);
    printf("Média = %2.2f\n",(num1+num2+num3)/3.0);
}

//11. Faça um programa que leia dois números reais e calcule as
//    quatro operações básicas entre estes dois números, adição,
//    subtração,multiplicação e divisão. Ao final, o programa
//    deve imprimir os resultados dos cálculos.
void imprimir_operacoes_basicas() {
    float num1 = 0.0, num2 = 0.0;
    printf("Digite o primeiro número real: ");
    scanf(" %f",&num1);
    printf("Digite o segundo número real: ");
    scanf(" %f",&num2);
    printf("%2.2f + %2.2f = %2.2f\n",num1,num2,num1+num2);
    printf("%2.2f - %2.2f = %2.2f\n",num1,num2,num1-num2);
    printf("%2.2f * %2.2f = %2.2f\n",num1,num2,num1*num2);
    printf("%2.2f / %2.2f = %2.2f\n",num1,num2,num1/num2);
}

//12. Faça um programa que leia um número real e calcule o
//    quadrado deste número. Ao final, o programa deve
//    imprimir o resultado do cálculo.
void imprimir_quadrado() {
    float quadrado = 0.0;
    printf("Digite um número real: ");
    scanf(" %f",&quadrado);
    printf("Seu quadrado é %2.2f\n", pow(quadrado,2.0));
}

//13. Faça um programa que leia o saldo de uma conta poupança e
//    imprima o novo saldo, considerando um reajuste de 2%.
void imprimir_saldo() {
	float saldo = 0.0;
    printf("Digite o saldo: R$ ");
    scanf(" %f",&saldo);
    printf("Saldo com reajuste de 2%%: R$ %2.2f\n", saldo*1.02);		
}

//14. Faça um programa que leia a base e a altura de um retângulo
//    e imprima o perímetro (base + altura) e a área (base * altura).
void retangulo() {
    int base = 0, altura = 0;
    printf("Digite a base do retângulo: ");
    scanf(" %d",&base);
    printf("Digite a altura do retângulo: ");
    scanf(" %d",&altura);
    printf("Perímetro: %d\n", base+altura);
    printf("Área: %d\n", base*altura);
}

//15. Faça um programa que leia o valor de um produto, o percentual
//    do desconto desejado e imprima o valor do desconto e o valor
//    do produto subtraindo o desconto.
void produto() {
    float valor = 0.0, desconto = 0.0;
    printf("Digite o valor do produto: R$ ");
    scanf(" %f",&valor);
    printf("Digite o percentual do desconto: ");
    scanf(" %f",&desconto);
    printf("Valor do desconto: R$ %2.2f\n",valor*desconto/100);
    printf("Valor final do produto: R$ %2.2f\n",valor*(1-desconto/100));
}

//16. Faça um programa que calcule o reajuste do salário de um
//    funcionário. Para isso, o programa deverá ler o salário atual
//    do funcionário e ler o percentual de reajuste. Ao final imprimir
//    o valor do novo salário.
void salario() {
    float salario = 0.0, reajuste = 0.0;
    printf("Digite o valor do salário: R$ ");
    scanf(" %f",&salario);
    printf("Digite o percentual do reajuste: ");
    scanf(" %f",&reajuste);
    printf("Valor do salário reajustado: R$ %2.2f\n",salario*(1+reajuste/100));
}

//17. Faça um programa que calcule a conversão entre graus centígrados
//    e Fahrenheit. Para isso, leia o valor em centígrados e calcule
//    com base na fórmula a seguir. Após calcular o programa deve
//    imprimir o resultado da conversão.
//    F = (9 x C +160) / 5
void temperatura() {
    float celsius = 0.0;
    printf("Digite a temperatura em celsius: ");
    scanf(" %f",&celsius);
    printf("Farenheit: %2.1f\n", (9*celsius+160)/5);
}

//18. Faça um programa que calcule a quantidade de litros de combustível
//    consumidos em uma viagem, sabendo-se que o carro tem autonomia de
//    12 km por litro de combustível. O programa deverá ler o tempo
//    decorrido na viagem e a velocidade média e aplicar as fórmulas:
//    D = T x V       L = D / 12
//    Em que:
//    • D = Distância percorrida em horas
//    • T = Tempo
//    • V = Velocidade média
//    • L = Litros de combustível consumidos
//    Ao final, o programa deverá imprimir a distância percorrida e a
//    quantidade de litros consumidos na viagem.
void combustivel() {
    int tempo = 0, velocidade = 0;
    printf("Digite o tempo gasto na viagem em minutos: ");
    scanf(" %d",&tempo);
    printf("Digite a velocidade média (km/h): ");
    scanf(" %d",&velocidade);
    float distancia = tempo/60.0*velocidade;
    printf("Distância percorrida (km): %2.1f\n", distancia);
    printf("Litros consumidos: %2.1f\n", distancia/12.0);
}

//19. Faça um programa que calcule o valor de uma prestação em atraso.
//    Para isso, o programa deve ler o valor da prestação vencida, a
//    taxa periódica de juros e o período de atraso. Ao final, o
//    programa deve imprimir o valor da prestação atrasada, o período
//    de atraso, os juros que serão cobrados pelo período de atraso, o
//    valor da prestação acrescido dos juros. Considere juros simples.
void prestacao() {
   	float prestacao = 0.0, juros = 0.0;
    int dias_atraso = 0;
    printf("Valor da prestação: R$ ");
    scanf(" %f",&prestacao);
    printf("Taxa de juros por dia: ");
    scanf(" %f",&juros);
    printf("Qtde de dias atrasado: ");
    scanf(" %d",&dias_atraso);
    printf("Valor com multa: R$ %2.2f\n",prestacao*(1+juros*dias_atraso/100));
}

//20. Faça um programa que efetue a apresentação do valor da conversão
//    em real (R$) de um valor lido em dólar (US$). Para isso, será
//    necessário também ler o valor da cotação do dólar.
void dolar() {
    float dolares = 0.0, cotacao = 0.0;
    printf("Qtde de dólares: US$ ");
    scanf(" %f",&dolares);
    printf("Cotação do dólar: R$ ");
    scanf(" %f",&cotacao);
    printf("US$ %2.2f = R$ %2.2f\n",dolares,dolares*cotacao);
}

int main() {
    imprimir_nome();
    imprimir_produto();
    imprimir_media();
    imprimir_inteiro();
    imprimir_reais();
    imprimir_sucessor_antecessor();
    imprimir_dados_pessoais();
    imprimir_subtracao();
    imprimir_um_quarto();
    calcular_media();
    imprimir_operacoes_basicas();
    imprimir_quadrado();
    imprimir_saldo();
	retangulo();
	produto();
	salario();
	temperatura();
	combustivel();
	prestacao();
	dolar();
	    
    return EXIT_SUCCESS;
}

