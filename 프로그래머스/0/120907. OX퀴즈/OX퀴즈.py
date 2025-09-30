def solution(quiz):
    answer = []
    for i in quiz:
        ex = i.split("=")
        for j in range(len(ex)):
            if eval(ex[0]) == eval(ex[len(ex) - 1]):
                answer.append("O")
                break
            else:
                answer.append("X")
                break
    return answer