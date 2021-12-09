n=int(input())
a,b=1,1
for i in range(n+1):
    if(i==0):
        i=0
    else:
        a=i**2
        b=i*a
        print(i,a,b)
        print(i,a+1,b+1)
