dial = ['ABC', 'DEF', 'GHI', 'JKL', 'MNO', 'PQRS', 'TUV', 'WXYZ']
s = input()
answer = 0
for i in range(len(s)):
    for j in dial:
        if s[i] in j:
            answer += dial.index(j)+3
print(answer)
