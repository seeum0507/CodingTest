def solution(array, n):
    length = float('inf')
    answer = None
    for i in array:
        ex = abs(n - i)
        if ex < length:
            length = ex
            answer = i
        elif ex == length and i < answer:
            answer = i
    return answer
