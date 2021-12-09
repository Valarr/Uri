a = list(map(int, input().split()))
b = list(map(int, input().split()))
tot=0
if(a[0]<b[0]):
  tot+=b[0]-a[0]
if(a[1]<b[1]):
  tot+=b[1]-a[1]
if(a[2]<b[2]):
  tot+=b[2]-a[2]
print(tot)