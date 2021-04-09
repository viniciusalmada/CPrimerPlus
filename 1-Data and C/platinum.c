/* platinum.c -- your weight in platinum */
#include <stdio.h>
int main(void) {
	printf("Are you worth your weight in platinum?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in kg: ");

	float weight;
	float value;
	/* get input from user */
	scanf("%f", &weight);
	/* assume platinum is R$219.556 per kg */
	value = 219.556 * weight;

	printf("Your weight in platinum is worth R$ %.2f.\n", value);
	printf("You are easily worth that! If platinum prices drop,\n");
	printf("eat more to maintain your value.\n");

	return 0;
}
