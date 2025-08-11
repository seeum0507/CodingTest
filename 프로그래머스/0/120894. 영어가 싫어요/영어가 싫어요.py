def solution(numbers):
    mapping = {
        "zero": "0", "one": "1", "two": "2", "three": "3", "four": "4",
        "five": "5", "six": "6", "seven": "7", "eight": "8", "nine": "9"
    }
    
    result = []
    temp = ""

    for char in numbers:
        temp += char
        if temp in mapping:
            result.append(mapping[temp])
            temp = ""
    return int(''.join(result))
