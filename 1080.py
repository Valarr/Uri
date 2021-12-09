v = int(input())
a,b = v, 0
for i in range(1,100):
    v = int(input())
    if(v>a):
        a = v
        b = i+1
print(a)
print(b)
