v=[]
r=0
v.append(float(input()))
v.append(float(input()))
v.append(float(input()))
v.append(float(input()))
v.append(float(input()))
v.append(float(input()))

for n in v:
    if(float(n)>0):
        r+=1

print(r,"valores positivos")
