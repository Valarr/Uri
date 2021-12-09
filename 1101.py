m,n = map(int, input().split())
while m>0 and n>0:
    v=[]
    if m>n:
        for i in range(n, m+1):
            v.append(i)
    elif m<n:
        for i in range(m, n+1):
            v.append(i)
    print("%s Sum=%s" % (' '.join(map(str,sorted(v))),sum(v)))
    m,n = map(int, input().split())
