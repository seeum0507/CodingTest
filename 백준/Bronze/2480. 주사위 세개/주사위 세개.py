numbers = list(map(int, input().split()))
arrCount = [0] * 7

for n in numbers:
    arrCount[n] += 1

for i in range(1, 7):
    if arrCount[i] == 3:
        print(10000 + i * 1000)
        break
    elif arrCount[i] == 2:
        print(1000 + i * 100)
        break
else:
    print(max(numbers) * 100)
