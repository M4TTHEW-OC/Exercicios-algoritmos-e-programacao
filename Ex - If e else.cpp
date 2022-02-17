#include <stdio.h>

int main(){
	double a, b;
	printf("What's your first number? ");
	scanf("%lf", &a);
	printf("What's your second number? ");
	scanf("%lf", &b);
	
	if(a > b)
		printf("Valores aceitos");
		else printf("Valores nao aceitos");
}
