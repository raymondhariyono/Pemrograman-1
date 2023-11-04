for i in range(3):
    a, b =map(int, input().split())
    
    if a > b :
        print(b, a)
        print()
    elif a < b:
        print(a, b)
        print()    
    else :print(a, b)
print ()