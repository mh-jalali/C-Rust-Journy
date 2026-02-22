#include <stdio.h>

// print "Hello, World" n times
void print_hello_world (int n) {
	while (n > 0) {
		printf("Hello, World!\n");
		n--;
	}
}

int main(int argc, char** argv) {
	int n = 10;
	print_hello_world(n);

	return 0;	
}
