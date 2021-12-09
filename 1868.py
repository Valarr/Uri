def printa(z):
    for i in z:
        print("".join(i))
    print('@')


while(True):
    p = int(input())
    if(p==0):
        break
    else:
        x = []
        i = j = int(p/2)
        for k in range(p):
            x.append(['O']*p)
        x[i][j] = 'X'
        printa(x)
        x[i][j] = 'O'
        a = int(0)
    while(True):
        a+=1
        
        for q in range(a):
            j+=1
            if p == j:
                break
            x[i][j] = 'X'
            printa(x)
            x[i][j] = 'O'
        if p ==j:
            break
        for q in range(a):
            i-=1
            x[i][j] = 'X'
            printa(x)
            x[i][j] = 'O'
        a+=1
        for q in range(a):
            j-=1
            x[i][j] = 'X'
            printa(x)
            x[i][j] = 'O'
            
        for q in range(a):
            i+=1
            x[i][j] = 'X'
            printa(x)
            x[i][j] = 'O' 