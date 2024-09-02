#include<stdio.h>
int main() {
	char arr[21];
	scanf("%s", &arr);
	for (int i = 0; arr[i] != '\0'; i++) {
		printf("\'%c\'\n", arr[i]);
	}
}
