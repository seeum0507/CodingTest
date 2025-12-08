a = input()
answer = []

for i in range(len(a)):
    answer.append(a[i:])

answer.sort()

for i in answer:
    print(i)