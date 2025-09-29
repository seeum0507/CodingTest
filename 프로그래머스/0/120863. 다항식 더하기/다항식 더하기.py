def solution(polynomial):
    sep = polynomial.split(' + ')
    x = 0
    num = 0

    for i in sep:
        if 'x' in i:
            if i == 'x':
                x += 1
            else:
                x += int(i.replace('x', ''))
        else:
            num += int(i)
    result = []
    if x:
        result.append(f"{x}x" if x > 1 else "x")
    if num:
        result.append(str(num))
    
    return ' + '.join(result)