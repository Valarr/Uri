a = list(map(int ,input().split()))
for i in range(a[1]):
  if(input()=="fechou"):
    a[0]+=1
  else:
    a[0]-=1
print(a[0])