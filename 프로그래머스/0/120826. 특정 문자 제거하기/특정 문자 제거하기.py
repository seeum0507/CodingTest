def solution(my_string, letter):
    if letter in my_string:
        my_string = my_string.replace(letter, '')
    return my_string