a = list(input())
tot=0
for i in range(len(a)):
  if(a[i]=='1'):
    tot+=1
if(tot%2==0 or tot==0):
  a.append('0')
else:
  a.append('1')
print(*a, sep = '')