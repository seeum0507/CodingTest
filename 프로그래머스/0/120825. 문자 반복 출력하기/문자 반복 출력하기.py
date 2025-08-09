def solution(my_string, n):
    answer = []
    my_string = list(my_string)
    for i in my_string:
        for _ in range(n):
            answer.append(i)
    return ''.join(answer)