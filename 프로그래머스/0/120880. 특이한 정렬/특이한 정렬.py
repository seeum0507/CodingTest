def solution(numlist, n):
    distance = []
    for i in numlist:
        distance.append(i - n)
    answer = []
    for i in sorted(distance[:], key=lambda x:[abs(x), -x]): 
        answer.append(numlist[distance.index(i)])

    return answer