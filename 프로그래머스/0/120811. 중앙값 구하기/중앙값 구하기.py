def solution(array):
    array.sort()
    idx = len(array) // 2
    answer = array[idx ]
    return answer