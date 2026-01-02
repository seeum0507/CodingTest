n = int(input())

for _ in range(n):
    cnt, w = input().split()
    for i in w:
        print(i*int(cnt), end='')
    print()