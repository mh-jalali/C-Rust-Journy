#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool is_greater (int a, int b) {
	if (a > b) {
		return true;
	}
	else {
		return false;
	}
}

int main (int argc, char** argv) {
	int a = 3;
	int b = 4;
	
	if (is_greater(a, b)) {
		printf("a : %d is greater than b : %d", a, b);
	}
	else {
		printf("a : %d is not greater than b : %d", a, b);
	}

	return 0;
}
