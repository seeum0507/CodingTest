def solution(my_string):
    ex = []
    for i in my_string:
        if i not in ex:
            ex.append(i)
    return ''.join(ex)
