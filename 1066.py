v=[]
p,i,pos,neg=0,0,0,0
v.append(float(input()))
v.append(float(input()))
v.append(float(input()))
v.append(float(input()))
v.append(float(input()))

for n in v:
    if(float(n)%2==0):
        p+=1
        if(float(n)>0):
            pos+=1
        elif(float(n)<0):
            neg+=1
            
    elif((float(n)%2)!=0):
        i+=1
        if(float(n)>0):
            pos+=1
        elif(float(n)<0):
            neg+=1
            
        
print(p,"valor(es) par(es)")
print(i,"valor(es) impar(es)")
print(pos,"valor(es) positivo(s)")
print(neg,"valor(es) negativo(s)")
