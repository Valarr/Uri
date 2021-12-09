c,g,d=0,0,0
k=1
while(k>0):
    a = int(input())
    if(a==1):
        c+=1
    elif(a==2):
        g+=1
    elif(a==3):
        d+=1
    elif(a==4):
        break
print("MUITO OBRIGADO")
print("Alcool:",c)
print("Gasolina:",g)
print("Diesel:",d)
