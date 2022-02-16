#include <stdio.h>

int main(){
double a, b, x;
printf("Digita sua nota ai: ");
scanf("%lf", &a);
printf("A outra nota: ");
scanf("%lf", &b);
x = (3.5*a + 7.5*b) / 11;
printf("A sua média foi de %.2lf", x);
}

//Variável do tipo double e float!!! (Reais)
//Poucas casas decimais float (4byts)  %f
//Muitas casas decimais double (8byts) %lf
//%.2lf ---> O .n define a quantidade de casas decimais depois da vírgula!!!
