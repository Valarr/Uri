n=int(input())
a,b=1,1
for i in range(n+1):
    if(i==0):
        i=0
    else:
        a=i**2
        b=i**3
        print(i,a,b)
