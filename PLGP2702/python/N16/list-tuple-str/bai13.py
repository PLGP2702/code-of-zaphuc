A = [0,2,4,6,8,10, 13, 16, 17]
B = [1,3,5,7]
C = []
na = len(A)
nb = len(B)
if na <= nb:
    n1 = na
else:
    n1 = nb
for i in range(n1):
    C.append(A[i])
    C.append(B[i])
if na < nb:
    C += B[n1:]
elif na > nb:
    C += A[n1:]
print(C)