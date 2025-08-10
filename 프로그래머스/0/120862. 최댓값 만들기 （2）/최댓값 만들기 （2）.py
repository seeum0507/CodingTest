def solution(numbers):
    numbers.sort()
    maybe_min = numbers[0] * numbers[1]
    maybe_max = numbers[-1] * numbers[-2]
    if(maybe_min > maybe_max):
        return maybe_min
    else:
        return maybe_max