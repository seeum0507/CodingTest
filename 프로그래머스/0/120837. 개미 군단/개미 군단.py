def solution(hp):
    big_ant = hp // 5
    left_ant = hp % 5
    middle_ant = left_ant // 3
    left_ant = left_ant % 3
    small_ant = left_ant // 1
    return big_ant + middle_ant + small_ant