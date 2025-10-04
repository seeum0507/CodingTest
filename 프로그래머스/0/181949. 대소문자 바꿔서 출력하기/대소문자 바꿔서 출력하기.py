str = input()
str2 = ''

for i in str:
    if i.isupper() == True:
        str2 += i.lower()
    elif i.islower() == True:
        str2 += i.upper()

print(str2)