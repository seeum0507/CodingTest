def solution(age):
    age_list = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j']
    answer = ''
    for i in str(age):
        answer+= age_list[int(i)]
    return answer