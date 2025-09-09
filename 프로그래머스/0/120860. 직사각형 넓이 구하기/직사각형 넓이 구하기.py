def solution(dots):
    x_max = max(x for x, y in dots)
    x_min = min(x for x, y in dots)
    y_max = max(y for x, y in dots)
    y_min = min(y for x, y in dots)
    
    width = x_max - x_min
    length = y_max - y_min

    return width * length
