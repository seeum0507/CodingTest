def solution(spell, dic):
    for word in dic: 
        if all(ch in word for ch in spell):  
            return 1
    return 2
