#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	
	int timeA, timeB, timeC;
	
	printf("Digite a quantidade de times da serie A: ");
	scanf("%d", &timeA);
	printf("Digite a quantidade de times da serie b: ");
	scanf("%d", &timeB);
	printf("Digite a quantidade de times da serie c: ");
	scanf("%d", &timeC);
	
	
	
	printf("\nExistem %d times na serie A \n", timeA);
	printf("\nExistem %d times na serie B \n", timeB);
	printf("\nExistem %d times na serie C \n", timeC);
	
	printf("\nExistem %d times na s�rie A, Existem %d times na s�rie B, Existem %d times na s�rie C\n\n ", timeA,timeB,timeC);
	printf("\t\t  Quantidade de times \n");
	printf("\t\t S�rie A \t S�rie B \t S�rie C\n");
	printf("\t\t   %d     \t     %d    \t   %d\n\n", timeA,timeB,timeC);
	getch();
}