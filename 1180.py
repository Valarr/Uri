v = []
a = int(input())
v = list(map(int, input().split()))
tot = v[0]
p = 0
for i in range(1,a):
  if(tot>v[i]):
    tot = v[i]
    p = i
print("Menor valor:",tot)
print("Posicao:",p)