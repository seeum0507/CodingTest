def solution(s):
    counts = []
    for i in s:
        if(s.count(i) == 1):
            counts.append(i)
    counts.sort()
    return ''.join(counts)