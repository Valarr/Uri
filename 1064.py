v=[]
r=0
t= 0.0
v.append(float(input()))
v.append(float(input()))
v.append(float(input()))
v.append(float(input()))
v.append(float(input()))
v.append(float(input()))

for n in v:
    if(float(n)>0):
        t=t+float(n)
        r+=1
n=t/r
print(r,"valores positivos")
print ("%.1f"%n)
