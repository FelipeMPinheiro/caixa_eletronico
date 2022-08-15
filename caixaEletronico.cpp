// Programa para pagar uma quantia inteira com a menor 
// quantidade de cédulas.
// Exemplo: 588 reais. ----> (2 cédulas de 200, 1 cédula de 100, 1 cédula de 50
// 1 cédula de 20, 1 cédula de 10, 1 cédula de 5, 1 cédula de 2 e uma moeda de 1
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	int q, c200, c100, c50, c20, c10, c5, c2;
	printf("Qual a quantia para pagar? ");
	scanf("%d",&q);
	c200=q/200;
	q = q%200;
	c100=q/100;
	q = q%100;
	c50=q/50;
	q = q%50;
	c20=q/20;
	q = q%20;
	c10=q/10;
	q = q%10;
	c5=q/5;
	q = q%5;
	c2=q/2;
	q = q%2;
	printf("Cédulas de 200 reais = %d\n",c200);
	printf("Cédulas de 100 reais = %d\n",c100);
	printf("Cédulas de  50 reais = %d\n",c50);
	printf("Cédulas de  20 reais = %d\n",c20);
	printf("Cédulas de  10 reais = %d\n",c10);
	printf("Cédulas de   5 reais = %d\n",c5);
	printf("Cédulas de   2 reais = %d\n",c2);
	printf("Moedas  de   1 real  = %d\n",q);
	system("pause");
}
