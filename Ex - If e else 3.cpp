#include <stdio.h>

int main(){
	float a, b, c, media;
	printf("digite sua nota 1 a seguir: ");
	scanf("%f", &a);
	printf("digite sua nota 2 a seguir: ");
	scanf("%f", &b);
	printf("digite sua frequência a seguir: ");
	scanf("%f", &c);
	
	media = a + b;
	
	if(media >= 9.5 and c >= 75)
		printf("Parabens vc nao reprovou!");
		else printf("Cara burro do caramba");
}
