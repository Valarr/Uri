n,m = list(map(int,input().split()))
k = 1
for i in range(1,int((m/n)+1)):
    r=""
    for y in range(n):
        r+=str(k)+" "
        k+=1
    print(r[:-1])
