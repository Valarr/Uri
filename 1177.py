t=int(input())
v=[]
q = 0
for i in range(1000):
  print("N[%d] = %d" %(i,q))
  q+=1
  if q==t:
    q=0