#include <stdio.h>
#define kOffset 8
int main(int argc, char *argv[]) {
	int a = 10;
	int b = 20;
	int c = a + b + kOffset;
	printf("%d",c);
}