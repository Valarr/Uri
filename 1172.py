a = 0
for i in range(10):
    vet = int(input())
    if(vet<0 or vet==0):
        vet = 1
    a=str(i)
    print("X["+a+"] =",vet)
