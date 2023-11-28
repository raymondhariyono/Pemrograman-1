def reverse(num):
    reversedNum = 0
    while num > 0:
        reversedNum = reversedNum * 10 + num % 10
        num //= 10
    return reversedNum

A, B = map(int, input().split())
A = reverse(A)
B = reverse(B)
C = A + B
print(reverse(C))

