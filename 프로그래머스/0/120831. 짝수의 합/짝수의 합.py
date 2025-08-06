def solution(n):
    a = 2
    answer = 0
    while(a <= n):
        answer += a
        a+= 2
    return answer