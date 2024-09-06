#include<stdio.h>
int main() {
	int y, m, d;
	scanf("%04d.%02d.%02d", &y, &m, &d);
	printf("%02d-%02d-%04d", d, m, y);
}
