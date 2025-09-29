def solution(board):
    answer = 0
    n = len(board)
    dx = [-1, 1, 0, 0, -1, -1, 1, 1]
    dy = [0, 0, -1, 1, -1, 1, -1, 1]
    boom = []
    for i in range(len(board)):
        for j in range(len(board)):
            if board[i][j] == 1:
                boom.append((i, j))
    for x, y in boom:
        for i in range(8):
            nx = x + dx[i]
            ny = y + dy[i]
            if 0 <= nx < n and 0 <= ny < n:
                board[nx][ny] = 1
    for i in board:
        answer += i.count(0)

    return answer