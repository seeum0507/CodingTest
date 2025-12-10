a = int(input())
b = int(input())
sum = 0
for i in range(b):
  price, cnt = map(int, input().split())
  sum += (price*cnt)

if a == sum:
  print("Yes")
else:
  print("No")