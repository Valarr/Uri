tot = 0
b = int(input())
for i in range(b):
  a = list(map(float, input().split()))
  if(a[0]==1001):
    tot+=a[1]*1.5
  elif(a[0]==1002):
    tot+=a[1]*2.5
  elif(a[0]==1003):
    tot+=a[1]*3.5
  elif(a[0]==1004):
    tot+=a[1]*4.5
  elif(a[0]==1005):
    tot+=a[1]*5.5
print("%.2f" % (tot))