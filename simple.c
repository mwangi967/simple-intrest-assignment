#include<stdio.h>

int main()
{
	float principal, rate, time, simple_interest;

	printf("\nPrincipal Amount: ");
	scanf("%f", &principal);

	printf("Rate of Interest: ");
	scanf("%f", &rate);

	printf("Time Period: ");
	scanf("%f", &time);
	
    rate = rate /100;
	simple_interest = principal * time * rate ;

	printf("\nSimple Interest = %.2f\n", simple_interest);

	return 0;
}

