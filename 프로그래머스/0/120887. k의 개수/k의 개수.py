def solution(i, j, k):
    answer = 0
    temp = ''
    for a in range(i, j+1):
        temp += str(a)
    answer = temp.count(str(k))
    return answer