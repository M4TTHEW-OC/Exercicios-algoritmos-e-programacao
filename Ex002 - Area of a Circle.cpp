#include <stdio.h>

int main(){
double r, a;
printf("Digite o seu raio: ");
scanf("%lf", &r);
a = r * r * 3.14159265359;
printf("Sua área é %lf", a);
}

//Biblioteca <math.h> ajuda nessas questões
//floor( )	arredonda para baixo
//ceil( )	arredonda para cima
//sqrt( )	Calcula raiz quadrada
//pow(variável, expoente)	potenciação
//sin( )	seno
//cos( )	cosseno
//tan( )	Tangente
//log( )	logaritmo natural
//log10( )	logaritmo base 10

//"#define PI 3.14159" (esse valor permanece o mesmo durante todo o tempo!!!
