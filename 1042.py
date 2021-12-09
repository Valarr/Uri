a, b, c = map(int,input().split())
d, e ,f = a, b, c 
if(a<b):
    aux = a
    a = b
    b = aux
if(b<c):
    aux = b
    b = c
    c = aux
if(a<b):
    aux = a
    a = b
    b = aux
    
print(c)
print(b)
print(a)
print()
print(d)
print(e)
print(f)


