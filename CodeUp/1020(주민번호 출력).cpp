#include<stdio.h>
int main() {
	int y, m, d, g, a, e;
	scanf("%02d%02d%02d-%02d%02d%03d", &y, &m, &d, &g, &a, &e);
	printf("%02d%02d%02d%02d%02d%03d", y, m, d, g, a, e);
}
