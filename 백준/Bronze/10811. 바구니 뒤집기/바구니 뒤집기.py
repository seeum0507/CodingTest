n, m = map(int, input().split())
num = [i for i in range(1, n+1)]
    
for i in range(m):
    j, k = map(int, input().split())
    tmp = num[j-1:k]
    tmp.reverse()
    num[j-1:k] = tmp
    
for i in range(n):
    print(num[i], end=" ")