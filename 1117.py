k = 0
p = 0.0
while k<2:
    n = float(input())
    if(n>=0 and n<=10 and k==0):
        k+=1
        p = n
    elif(n>=0 and n<=10):
         k+=1
    else:
        print("nota invalida")
print("media =",((p+n)/2))
        
    

