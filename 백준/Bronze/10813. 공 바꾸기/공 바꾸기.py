n, m = map(int, input().split())
baskets = list(range(1, n+1))

for change in range(m):
    i, j = map(int, input().split())
    baskets[i-1], baskets[j-1] = baskets[j-1], baskets[i-1]

for basket in baskets:
    print(basket, end=' ')