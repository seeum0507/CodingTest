def solution(bin1, bin2):
    sum = int(bin1, 2) + int(bin2, 2)
    return bin(sum)[2: ]