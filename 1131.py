sera = True
l= 0
k = 0
j = 0
e = 0
while(sera==True):
    inter, gremio = map(int,input().split())
    if(inter>gremio):
            l+=1
    if(inter<gremio):
            k+=1
    if(inter==gremio):
            j+=1
    e+=1
    print("Novo grenal (1-sim 2-nao)")
    amor = int(input())
    if(amor==1):
        sera=True
    else:
        sera=False

print(e,"grenais");
print("Inter:%d"%l);
print("Gremio:%d"%k);
print("Empates:%d"%j);
if(l>k):
    print("Inter venceu mais");
if(l<k):
    print("Gremio venceu mais");
if(k==l):
    print("Nao houve vencedor");
    
        
