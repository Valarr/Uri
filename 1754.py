a = int(input())
n=0
for i in range(a):
    x, y = map(int, input().split())
    if(y>x):
        print(2)
    else:
        if(x%y==0):
            n = 0
        else:
            n = 1
        n = x/y + n
        print(int(n))
