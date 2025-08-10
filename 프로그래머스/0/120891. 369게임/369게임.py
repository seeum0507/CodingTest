def solution(order):
    count = 0
    for i in str(order):
        if(i == '3'):
            count += 1
        elif(i == '6'):
            count+= 1
        elif(i == '9'):
            count+= 1
    return count