A='A'
B='B'
C='C'
D='D'
E='E'
F='F'
G='G'
H='H'
I='I'
J='J'
K='K'
L='L'
M='M'
N='N'
O='O'
P='P'
Q='Q'
R='R'
S='S'
T='T'
U='U'
V='V'
W='W'
X='X'
Y='Y'
Z='Z'

while(True):
    try:
        a = input()
        b = ""
        e = []
        al = []
        f = []
        l = len(a)
        for i in range(l):
            if(a[i] >= 'A' and a[i] <= 'Z'):
                b += a[i] + ","
            elif(a[i] == '*'):
                al.append(len(b))
                e.append(len(b))
                b += '&'
            elif(a[i] == '+'):
                al.append(len(b))
                b += '|'
            elif(a[i] == '-'):
                al.append(len(b))
                b += '-'
            elif(i < l - 1 and a[i] == '{' and a[i+1] == '}'):
                b += a[i]
                b += "' '"
            else:
                b += a[i]

        l1 = len(e)
        k = 0
        for i in range(l1):
            while(b[k] != '&'):
                k+=1
            esq, dir = k-1, k+1
            if(b[esq] == '}'):
                while(True):
                    if(b[esq] == '{'):
                        break
                    esq = esq - 1
            else:
                g = 0
                while(True):
                    if(b[esq] == ')'):
                        g = g + 1
                    if(b[esq] == '('):
                        g = g - 1
                    if(not g):
                        break
                    esq = esq - 1
                    
            if(b[dir] == '{'):
                while(True):
                    if(b[dir] == '}'):
                        break
                    dir = dir + 1
            else:
                g = 0
                while(True):
                    if(b[dir] == '('):
                        g = g + 1
                    if(b[dir] == ')'):
                        g = g - 1
                    if(not g):
                        break
                    dir = dir + 1
            l = len(b)
            b = b[0:esq] + "(" + b[esq:dir+1] + ")" + b[dir+1:l]
            k += 2
            
        k = 0
        l2 = len(al)
        for i in range(l2):
            while(b[k] != '&' and b[k] != '-' and b[k] != '|'):
                k+=1
            esq, dir = k-1, k+1
            if(b[esq] == '}'):
                while(True):
                    if(b[esq] == '{'):
                        break
                    esq = esq - 1
            else:
                g = 0
                while(True):
                    if(b[esq] == ')'):
                        g = g + 1
                    if(b[esq] == '('):
                        g = g - 1
                    if(not g):
                        break
                    esq = esq - 1
                    
            if(b[dir] == '{'):
                while(True):
                    if(b[dir] == '}'):
                        break
                    dir = dir + 1
            else:
                g = 0
                while(True):
                    if(b[dir] == '('):
                        g = g + 1
                    if(b[dir] == ')'):
                        g = g - 1
                    if(not g):
                        break
                    dir = dir + 1
            l = len(b)
            b = b[0:esq] + "(" + b[esq:dir+1] + ")" + b[dir+1:l]
            k += 2
            
        r = sorted(eval(b))
        if (' ' in r):
            r.remove(' ')
        print('{', end="")
        for i in r:
            print(i, end="")
        print('}')
    except Exception as e:
        break
