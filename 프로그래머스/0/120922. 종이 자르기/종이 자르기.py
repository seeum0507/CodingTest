def solution(M, N):
    answer = (M-1)+M*(N-1)
    if M and N == 1:
        answer = 0    
    return answer