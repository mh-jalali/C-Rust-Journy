#include <stdio.h>
#include <math.h>

// 2D point def
typedef struct {
	float x;
	float y;
} point;

int main (int argc, char** argv) {
	float length;
	point p;
	p.x = 0.1f;
	p.y = 10.0f;
	length = sqrt(p.x * p.x + p.y + p.y);
	printf("Length is : %f", length);
	return 0;
}
