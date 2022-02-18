#include <stdio.h>

int main(){
	char name;
	float sal, sale, salary;
	printf("What's your name? ");
	scanf("%s", &name);
	printf("What's your fixed salary? ");
	scanf("%f", &sal);
	printf("What's your total sale (Month)? ");
	scanf("%f", &sale);	
	
	salary = (0.15 * sale + sal);
	
	printf("Total = R$ %f", salary);
}
