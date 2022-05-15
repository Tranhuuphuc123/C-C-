#include<stdio.h>
#include<math.h>
int main() {
	int a, b;

	printf("ente the value a: ");
	scanf_s("%d", &a);
	printf("\n");

	printf("enter the value b: ");
	scanf_s("%d", &b);
	printf("\n");


	// ham toan hoc ceil & floor

	float lamTron = (float) a / b;
	printf("ceil(a/b): %.2f \n", ceil(lamTron));
	printf("floor(a/b): %.2f \n", floor(lamTron));
	printf("sqrt(a): %.2f",sqrt(a));
	printf(" %d^2 = %.0f", a, pow(a, 2));

	return 0;

	
}