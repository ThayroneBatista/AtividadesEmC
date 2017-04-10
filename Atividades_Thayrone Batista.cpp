#include<stdio.h>
#include<stdlib.h>

int main ()
{
	 int a, b, c, d;
	 float peso, alt, imc;
	 
	 printf(" ESCOLHA UM EXERCICIO\n");
	 printf("----------------------\n");
	 printf("|  [40] Exercicio 40  |\n");
	 printf("|  [41] Exercicio 41  |\n");
	 printf("|  [42] Exercicio 42  |\n");
	 printf("|  [46] Exercicio 46  |\n");
	 printf("|  [47] Exercicio 47  |\n");
	 printf("|  [49] Exercicio 49  |\n");
	 printf("|  [53] Exercicio 53  |\n");
	 printf("|  [60] Exercicio 60  |\n");
	 printf("|  [62] Exercicio 62  |\n");
	 printf("|  [64] Exercicio 64  |\n");
	 printf("----------------------\n");
	 printf(" ESCOLHA UM EXERCICIO\n");
	 
	 scanf("%d",&n);
	 
	 switch (n)
	 {
	 	case (40):
	 			 printf("|  [40] Exercicio 40  |\n"); //Escreva um programa que leia um número e o imprima caso ele seja maior que 20. 
	 			 
	 		printf("Digite um numero inteiro: ");
	 		scanf("%d",&a);
	 		
	 		if (a > 20)
	 		{
	 			printf ("%d\n",a);
	 		}
	 		
	 		break;
	 		
	 	case (41):
	 			 printf("|  [41] Exercicio 41  |\n"); //Construa um programa que leia dois valores numéricos inteiros e efetue a adição; caso o resultado seja maior que 10, apresentá-lo. 
	 			 		
		 	printf("Digite o primeiro numero: ");
		 	scanf("%d",&c);
		 	printf("Digite o segundo numero: ");
		 	scanf("%d",&b);
		 	
		 	d = b + c;
		 	
		 	if (d > 10)
		 	{
		 		printf("%d\n",d);
		 	}
		 	
		 	break;
		 	
		case (42):
				 printf("|  [42] Exercicio 42  |\n"); //Construa um programa que determine (imprima) se um dado número N inteiro (recebido através do teclado) é PAR ou ÍMPAR.
	 			 		
		 	printf("Digite o numero: ");
		 	scanf("%d",&a);
		 	
		 	if (a % 2 == 0)
		 	{
		 		printf("Numero par\n");
		 	}
		 	else 
			{
		 		printf("Numero Impar\n");
		 	}
		 	
		 	break;
		 	
		case (46):
				 printf("|  [46] Exercicio 46  |\n");  //Escreva um programa que receba um número e imprima uma das mensagens: “é múltiplo de 3” ou “não é múltiplo de 3”. 
	 			 		
		 	printf("Digite o numero: ");
		 	scanf("%d",&a);
		 	
		 	if (a % 3 == 0)
		 	{
		 		printf("Multiplo de 3\n");
		 	}
		 	else 
			{
		 		printf("Nao e multiplo de 3\n");
		 	}
		 	
		 	break;
		 	
		case (47):
				 printf("|  [47] Exercicio 47  |\n");  //Escreva um programa que leia um número e informe se ele é ou não divisível por 5. 
	 			 		
		 	printf("Digite o numero: ");
		 	scanf("%d",&a);
		 	
		 	if (a % 5 == 0)
		 	{
		 		printf("Divisivel por 5\n");
		 	}
		 	else 
			{
		 		printf("Nao e divisivel por 5\n");
		 	}
		 	
		 	break;
		 	
		case (49):
				 printf("|  [49] Exercicio 49  |\n");  //Construa um programa que imprima qual o menor e qual o maior valor de dois números A e B, lidos através do teclado. 
	 			 		
		 	printf("Digite um numero: ");
		 	scanf("%d",&a);
		 	printf("Digite outro numero: ");
		 	scanf("%d",&b);
		 	
		 	if (a > b)
		 	{
		 		printf("%d e maior que %d\n",a,b);
		 	}
		 	else if (a == b)
			{
		 		printf("%d e igual a %d\n",b,a);
		 	}
		 	else 
			{
		 		printf("%d e maior que %d\n",b,a);
		 	}
		 	
		 	break; 	
		 	
		 case (53):
				 printf("|  [53] Exercicio 53  |\n"); //Dados três valores A, B e C, construa um programa, que imprima os valores de forma ascendente (do menor para o maior). 
	 			 		
		 	printf("Digite um numero: ");
		 	scanf("%d",&a);
		 	printf("Digite outro numero: ");
		 	scanf("%d",&b);
		 	printf("Digite outro numero: ");
		 	scanf("%d",&c);
		 	
		 	if ((a < b ) && (a < c))
		 	{
		 		printf("%d\n",a);
		 		if (b < c){
		 			printf("%d\n",b);
		 			printf("%d\n",c);
		 		}
		 		else{
		 			printf("%d\n",c);
		 			printf("%d\n",b);
		 		}
		 	}
		 	else if  ((b < a ) && (b < c))
			{
		 		printf("%d\n",b);
		 		if (a < c){
		 			printf("%d\n",a);
		 			printf("%d\n",c);
		 		}
		 		else{
		 			printf("%d\n",c);
		 			printf("%d\n",a);
		 		}
		 	}
		 	else if  ((c < a ) && (c < b))
			{
		 		printf("%d\n",c);
		 		if (a < b){
		 			printf("%d\n",a);
		 			printf("%d\n",b);
		 		}
		 		else{
		 			printf("%d\n",b);
		 			printf("%d\n",a);
		 		}
		 	}
		 	
		 	break;	
		 	
		case (60):
				 printf("|  [60] Exercicio 60  |\n");  //Construa um programa para determinar se o indivíduo está com um peso favorável. Essa situação é determinada através do IMC (Índice de Massa Corpórea), que é definida como sendo a relação entre o peso (PESO) e o quadrado da Altura (ALTURA) do indivíduo.   
	 		
		 	printf("Digite seu peso: ");
		 	scanf("%f",&peso);
		 	printf("Digite sua altura: ");
		 	scanf("%f",&alt);

		 	imc = (peso/(alt*alt));
		 	if (imc < 20)
		 	{
		 		printf("Abaixo do peso\n");
		 		printf("IMC = %.2f\n",imc);
		 	}
		 	else if ((imc >= 20) && (imc <= 25))
			{
		 		printf("Peso normal");
		 		printf("IMC = %.2f\n",imc);
		 	}
		 	else if ((imc > 25) && (imc <= 30))
			{
		 		printf("Sobrepeso");
		 		printf("IMC = %.2f\n",imc);
		 	}
		 	else if ((imc > 30) && (imc <= 40))
			{
		 		printf("Obeso");
		 		printf("IMC = %.2f\n",imc);
		 	}
		 	else if (imc > 40)
		 	{
		 		printf("Obeso morbido\n");
		 		printf("IMC = %.2f\n",imc);
		 	}
		 	else
			{
				printf("Valores invalidos\n");
		 	}
		 	
		 	break;
		 	
		case (62):
				 printf("|  [62] Exercicio 62  |\n");  //Escreva um programa que dada a idade de uma pessoa, determine sua classificação de acordo com a idade 
	 			 		
		 	printf("Digite sua idade: ");
		 	scanf("%d",&a);
		 	
		 	if (a < 17)
		 	{
		 		printf("Menor de idade\n");
		 	}
		 	else if ((a >= 18) && (a < 65))
			{
		 		printf("Maior de idade\n");
		 	}
		 	else if (a >= 65)
			{
		 		printf("Pessoa idosa\n");
		 	}
		 	
		 	break; 
		 	
		case (64):
				 printf("|  [64] Exercicio 64  |\n");  //A confederação brasileira de natação irá promover eliminatórias para o próximo mundial...
	 			 		
		 	printf("Digite a idade do nadador: ");
		 	scanf("%d",&a);
		 	
		 	if (a < 5)
		 	{
		 		printf("Idade insuficiente\n");
		 	}
		 	else if ((a >= 5) && (a <= 7))
			{
		 		printf("Infantil A\n");
		 	}
		 	else if ((a >= 8) && (a <= 10))
			{
		 		printf("Infantil B\n");
		 	}
		 	else if ((a >= 11) && (a <= 13))
			{
		 		printf("Juvenil A\n");
		 	}
		 	else if ((a >= 14) && (a <= 17))
			{
		 		printf("Juvenil B\n");
		 	}
		 	else if (a >= 18)
			{
		 		printf("Senior\n");
		 	}
		 	
		 	break;
		 	
		default:
			
		    printf ("Exercicio nao encontrado\n");
		    
		    break;
	 }
	 
	 system("pause");
     return 0;
}
