#include <stdio.h>

int main() {
    int n, p, visited[100] = { 0 }, sequence[100], count = 0;
    scanf("%d %d", &n, &p);


    while (!visited[n % p]) {
        visited[n % p] = count + 1;
        sequence[count++] = n % p;
        n = (n * sequence[0]) % p;
    }

    printf("%d\n", count - visited[n % p] + 1);
}
