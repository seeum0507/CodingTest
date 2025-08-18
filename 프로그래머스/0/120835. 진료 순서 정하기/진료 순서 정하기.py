def solution(emergency):
    ex = sorted(emergency, reverse=True)
    answer = []
    for i in emergency:
        answer.append(ex.index(i) + 1)
    return answer
