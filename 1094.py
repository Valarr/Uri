n = int(input())
c,r,s,t=0, 0, 0, 0
for i in range(n):
    a,b = input().split()
    str(b)
    if(b == "C"):
        c+=int(a)
    elif(b == "R"):
        r+=int(a)
    elif(b == "S"):
        s+=int(a)
t = c+r+s
print("Total:",t,"cobaias")
print("Total de coelhos:",c)
print("Total de ratos:",r)
print("Total de sapos:",s)
print("Percentual de coelhos: %.2f" %float(((100*c)/t)),"%")
print("Percentual de ratos: %.2f" % float(((100*r)/t)),"%")
print("Percentual de sapos: %.2f" % float(((100*s)/t)),"%")

