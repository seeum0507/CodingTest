#include<stdio.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	b = 1 << b;
	printf("%d", a * b);
}
