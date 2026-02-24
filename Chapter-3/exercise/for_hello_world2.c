#include <stdio.h>

void print_hello_world(int n) {
	for (int i = 0; i < n; i++) {
		printf("Hello, World!\n");
	}
}

int main (int argc, char** argv) {
	print_hello_world(10);
}
