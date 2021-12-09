a = int(input())

while(a>0):
    total = 0
    b,c = map(int,input().split())
    aux = 0
    if(c < b):
        aux = c
        c = b
        b = aux
    if(b < c):
        for i in range(b+1,c):
            if(i%2 != 0):
                total+=i
        
    print("%d" %total)
    a-=1
