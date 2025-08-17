def solution(s):
    arrays = s.split()
    stack = []
    for i in arrays:
        if i == 'Z':
            if stack:  
                stack.pop()  
        else:
            stack.append(int(i))  
    return sum(stack)
