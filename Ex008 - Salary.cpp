#include <stdio.h>

int main(){
	double number, hours, sal;
	printf("What's your employee's number?");
	scanf("%lf", &number);
	printf("What's your worked hours?");
	scanf("%lf", &hours);
	printf("What's your amount received per hour?");
	scanf("%lf", &sal);
	
	printf("Number = %.0lf\nSalary = %.2lf", number, hours * sal);
}
