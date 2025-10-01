def solution(num, total):
    a=0
    for i in range(1, num):
        a += i
    start=(total-a)//num
    answer = [i for i in range(start, start+num)]
    return answer