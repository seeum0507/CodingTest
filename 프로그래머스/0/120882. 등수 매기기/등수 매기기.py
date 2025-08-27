def solution(score):
    avg = [sum(s)/len(s) for s in score]
    sorted_avg = sorted(avg, reverse=True)
    grade = []
    for s in avg:
        grade.append(sorted_avg.index(s) + 1)
    return grade