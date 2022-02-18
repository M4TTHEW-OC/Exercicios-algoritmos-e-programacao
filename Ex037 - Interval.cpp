#include <stdio.h>

int main(){
	double a;
	printf("Digite o seu numero a 1seguir: ");
	scanf("%lf", &a);
	
	if(a < 0 or a > 100)
		printf("Fora do Intervalo");
		else if(a <= 25)
			printf("(0 , 25)");
			else if(a <= 50)
				printf("(25 , 50)");
				else if(a <= 75)
					printf("(50 , 75)");
					else if(a <= 100)
						printf("(75 , 100)");
}
