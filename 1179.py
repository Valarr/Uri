p = []
imp = []
q = int(0)
m = int(0)
for i in range(15):
  n = int(input())
  if(n%2==0):
    p.append(n)
    q+=1
    if(q==5):
      for j in range(5):
        print("par[%d] = %d" %(j,p[j]))
      q=0
      p = []
  else:
    imp.append(n)
    m+=1
    if(m==5):
      for k in range(5):
        print("impar[%d] = %d" %(k,imp[k]))
      m=0
      imp = []
  if(i==14):
    for l in range(len(imp)):
      print("impar[%d] = %d" %(l,imp[l]))
    for o in range(len(p)):
        print("par[%d] = %d" %(o,p[o]))
