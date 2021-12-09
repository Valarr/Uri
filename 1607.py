def teste(letra1, letra2):
    if ord(letra1) < ord(letra2):
        dif = (ord(letra2)-ord(letra1))
    elif abs(ord(letra1)-ord(letra2)) == 0:
             dif = 0
    else :
        dif = (ord("z")-ord(letra1)) + (ord(letra2)-ord("a")) + 1
    return dif

i = int(input())
while i > 0:
    x, y = map(str, input().split())
    op = 0
    if x==y:
        print(op)
    else:
        j = 0
        while j < len(x):
            op+=teste(x[j],y[j])
            j+=1
        print(op)
    i-=1