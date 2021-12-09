a = int(input())
b = int(input())
t = 0
if(b>a):
    for i in range(a,b+1):
        if((i%13)!=0):
            t+=i
elif(a>b):
    for i in range(b,a+1):
        if((i%13)!=0):
            t+=i
print(t)

