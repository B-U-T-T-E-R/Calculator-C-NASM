#include <stdio.h>

extern void calc(long long a, long long b, long long* res);

int main() {
	long long x = 0, y = 1;

	printf("Enter the first number: ");
	scanf_s("%lld", &x);

	printf("Enter the second number: ");
	scanf_s("%lld", &y);
	
	long long res[4];

	calc(x, y, res);

	printf("Sum: %lld\nDifference: %lld\nProduct: %lld\nRemainder: %lld\n", res[0], res[1], res[2], res[3]);

	printf("\nPress Enter to exit...");
	getchar();
	getchar();
	return 0;
}