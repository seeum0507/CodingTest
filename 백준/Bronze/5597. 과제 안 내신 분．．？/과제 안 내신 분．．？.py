student=[]
no_student=[]
for i in range(28):
    n=int(input())
    student.append(n)
for i in range(1,31):
    if i not in student:
        no_student.append(i)
print(min(no_student))
print(max(no_student))