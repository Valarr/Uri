n = []
k = int(input())
inn = 0
out = 0
for i in range(k):
    n.append(int(input()))
        
    if(n[i]<=20 and n[i]>=10):
        inn+=1
    else:
        out+=1

print(inn,"in")
print(out,"out")
