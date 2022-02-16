#include<stdio.h>

int main(){
	double a, b, c, d, x;
	printf("Escreva o seu primeiro numero: ");
	scanf("%lf", &a);
	printf("Escreva o seu segundo numero: ");
	scanf("%lf", &b);
	printf("Escreva o seu terceiro numero: ");
	scanf("%lf", &c);
	printf("Escreva o seu quarto numero: ");
	scanf("%lf", &d);
	x = (a*b - c*d);
	printf("MEDIA = %lf", x);
}
