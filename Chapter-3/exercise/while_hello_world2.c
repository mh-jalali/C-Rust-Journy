#include <stdio.h>

void print_hello_world(int n) {
	int i = 0;
	while (i < n) {
		printf("Hello, World!\n");
		i++;
	}
}

int main (int argc, char** argv) {
	print_hello_world(10);
}
