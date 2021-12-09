n = int(input())
d = 0.0
for i in range(n):
    a,b = map(int, input().split())
    if(b==0):
        print("divisao impossivel")
    elif(b!=0):
        d = a/b
        print("%.1f" %d)

    

