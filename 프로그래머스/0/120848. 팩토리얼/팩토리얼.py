def solution(n):
    temp = 1
    i = 1
    while True:
        temp *= i
        if temp > n:
            return i - 1
        i += 1
