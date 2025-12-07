import math

h, m = map(int, input().split())
time = int(input())

time += m
h += math.floor(time / 60)
m = time % 60

if h > 23:
    h -= 24

print(h, m)