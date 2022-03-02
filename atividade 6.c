#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int cm, area, perimetro;
	
	printf("Digite os centimetros de um lado do cubo: ");
	scanf("%d", &cm);
	
	area=cm*cm;
	perimetro = cm*4;
	printf("\nA area do cubo e: %d", area);
	printf("\nA area do cubo e: %d", perimetro);
	getch();
}