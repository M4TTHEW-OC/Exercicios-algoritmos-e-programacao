#include <stdio.h>
#include <math.h>

int main(){
	double a, b, c, delta, x1, x2;
	printf("Digite o a da equação: ");
	scanf("%lf", &a);
	printf("Digite o b da equação: ");
	scanf("%lf", &b);
	printf("Digite o c da equação: ");
	scanf("%lf", &c);
	
	delta = pow(b, 2) - (4 * a * c);
	
	if(delta >= 0 && a != 0){
		x1 = (- b - sqrt(delta)) / (2 * a);
		x2 = (- b + sqrt(delta)) / (2 * a);
		printf("R1 = %.5lf \nR2 = %.5lf", x1, x2);}
		else printf("Nao da");
}
	
