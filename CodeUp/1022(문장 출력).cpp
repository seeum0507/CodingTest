#include<stdio.h>
int main() {
	char str[2001] = "";
	fgets(str, sizeof(str), stdin);
	printf("%s", str);
}