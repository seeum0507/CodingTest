def solution(my_string):
    total = 0
    temp = ""
    for ch in my_string:
        if ch.isdigit():
            temp += ch
        else:
            if temp:
                total += int(temp)
                temp = ""
    if temp:
        total += int(temp)
    return total
