k = 0
p = 0.0
h = 0
while(k<2):
    n = float(input())
    if(n>=0 and n<=10 and k==0):
        k+=1
        p = n
    elif(n>=0 and n<=10 and k==1):
        print("media = %.2f" %((p+n)/2))
        print("novo calculo (1-sim 2-nao)")
        h = float(input())
        while(k!=0):            
            if(h==1):
                k=0
            elif(h==2):
                k=2
                break
            else:
                print("novo calculo (1-sim 2-nao)")
                h = float(input())
    elif(n<0 or n>10):
        print("nota invalida")

        
    

