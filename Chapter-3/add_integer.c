#include <stdio.h>

// Return a + b
int add_integer (int a, int b) {
	return a + b;
}

// Main function calls add_integer and print response to stdout
int main(int argc, char** argv) {
	int result;
	result = add_integer (1, 2);
	printf("The result is : %d", result);
	return 0;
}
