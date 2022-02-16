#include <stdio.h>

int main(){
	double a, b, c, a2, b2, c2, a3, b3, c3, media1, media2, media3;
	printf("Garoto A digite sua primeira nota: ");
	scanf("%lf", &a);
	printf("Segunda nota: ");
	scanf("%lf", &b);
	printf("Terceira nota: ");
	scanf("%lf", &c);
	media1 = (a*2 + b*3 + c*5)/ 10;
	
	printf("Garoto B digite sua primeira nota: ");
	scanf("%lf", &a2);
	printf("Segunda nota: ");
	scanf("%lf", &b2);
	printf("Terceira nota: ");
	scanf("%lf", &c2);
	media2 = (a2*2 + b2*3 + c2*5)/ 10;
	
	printf("Garoto C digite sua primeira nota: ");
	scanf("%lf", &a3);
	printf("Segunda nota: ");
	scanf("%lf", &b3);
	printf("Terceira nota: ");
	scanf("%lf", &c3);
	media3 = (a3*2 + b3*3 + c3*5)/ 10;
	
	printf("A media do garoto a foi: %.2lf \nA media do garoto b foi: %.2lf \nA media do garoto c foi: %.2lf \n", media1, media2, media3);
}

//	printf("A media do garoto a foi: %.2lf \nA media do garoto b foi: %.2lf \nA media do garoto c foi: %.2lf \n", media1, media2, media3);

/* 	printf("A media do garoto a foi: %.2lf \n ", media1);
	printf("A media do garoto b foi: %.2lf \n", media2);
	printf("A media do garoto c foi: %.2lf \n", media3);*/
	
