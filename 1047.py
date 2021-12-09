a, d, c ,e = map(int, input().split())
tot = e-d
b = c-a
if(b<0):
    b = 24+(b)
if(tot<0):   
    tot=60+(tot)
    b-=1
if(a==c and d==e):
    print("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)")
else:
    print("O JOGO DUROU",b,"HORA(S) E",abs(tot),"MINUTO(S)")
