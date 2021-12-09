a, c = map(int, input().split())
b = 0 
if(a==c):
    print("O JOGO DUROU 24 HORA(S)")
else:
    if(a<c):
        b=c-a
    else:
        b=(24-a)+c

    print("O JOGO DUROU",b,"HORA(S)")
