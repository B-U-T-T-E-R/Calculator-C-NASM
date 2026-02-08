#include <stdio.h>
#include <stdlib.h>
#include <math.h>

extern double Addition(double a, double b);
extern double Subtraction(double a, double b);
extern double Product(double a, double b);
extern double Division(double a, double b);

// Function to clear input buffer, removes all characters until end of line or EOF
void flush_input() {
	int c;
	while ((c = getchar()) != '\n' && c != EOF) {}
}

// Function for safe reading of a double number
double read_double() {
	char buffer[255];

	// Read string with length limit
	// scanf_s returns number of successfully read elements
	if (scanf_s("%255s", buffer, (unsigned)sizeof(buffer)) != 1) {
		printf("Input error\n");
		exit(1);
	}

	// Replace all commas with dots for language format support
	// Example: "3,14" → "3.14"
	for (size_t i = 0; buffer[i]; i++) {
		if (buffer[i] == ',') {
			buffer[i] = '.';
		}
	}

	// Safe string to double conversion
	char* endptr;
	double rez = strtod(buffer, &endptr);

	// If string contains unconvertible characters (including early EOF indication)
	if (*endptr != '\0'){
		printf("Invalid number format\n");
		exit(1);
	}

	return rez;
}

// In main() function:
int main() {
	printf("Calculator (enter 'q' to quit)\n");

	while (1)
	{
		double x, y, result;
		char op;

		printf("\nEnter the first number: ");
		x = read_double();

		printf("Enter the second number: ");
		y = read_double();

		printf("Enter the operation (+, -, *, /): ");
		if (scanf_s(" %c", &op, 1) != 1)
			break; // Exit if input error or EOF

		flush_input();

		// Compare operation with exit operation
		if (op == 'q' || op == 'Q')
			break; // Exit program

		// In switch use functions from func.asm file
		switch (op) {
			case '+':
				result = Addition(x, y);
				break;
			case '-':
				result = Subtraction(x, y);
				break;
			case '*':
				result = Product(x, y);
				break;
			case '/':
				// Check for zero with epsilon
				if (fabs(y) < 1e-9) {
					printf("ERR: Divide by zero\n");
					continue;
				}
				result = Division(x, y);
				break;
			default:
				printf("Invalid operation\n");
				continue;
		}

		printf("Result: %g\n", result);
	}

	// Protection against premature exit - clear buffer before final getchar()
	printf("\nPress Enter to exit...");
	flush_input(); // Clear any remaining characters
	getchar(); // Now waits for actual Enter ke
	return 0;
}