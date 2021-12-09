n = int(input())
s = list("ABCDEFGHIJKLMNOPQRSTUVWXYZ")
while(n>0):    
    num = int(input())
    nome = list(input())
    k = 0
    i = 0
    j = 0
    a = 0
    for k in range(num):
        if(s[i] == nome[i]):
            i+=1
        else:
            j = i
            while(s[i]!= nome[j]):
                j+=1
            temp = nome[j]
            nome[j] = nome[i]
            nome[i] = temp
            a += 1
            
    if(a<=1):
        print("There are the chance.")
    else:
        print("There aren't the chance.")
        
    n-=1
    
