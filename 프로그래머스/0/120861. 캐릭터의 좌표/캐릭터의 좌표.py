def solution(keyinput, board):
    x, y = 0, 0
    max_x, max_y = board[0] // 2, board[1] // 2

    for i in keyinput:
        if i == "left":
            if x > -max_x:
                x -= 1
        elif i == "right":
            if x < max_x:
                x += 1
        elif i == "up":
            if y < max_y:
                y += 1
        elif i == "down":
            if y > -max_y:
                y -= 1

    return [x, y]
