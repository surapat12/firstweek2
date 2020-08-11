#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float Amount, Principal, Interest, Years, x ;
	printf("Amount of compound interest");
	printf("\n\n");
	printf("Principal = ");
	scanf_s("%f", &Principal);
	printf("\n\n");
	printf("Interest = ");
	scanf_s("%f", &Interest);
	printf("\n\n");
	printf("Years = ");
	scanf_s("%f", &Years);
	x = 1 + (Interest / 100);
	Amount = Principal * pow(x, Years);
	printf("Amount = %.2f", Amount);

















}