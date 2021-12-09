vet = ['Dasher', 'Dancer', 'Prancer', 'Vixen', 'Comet', 'Cupid', 'Donner', 'Blitzen', 'Rudolph']
a = list(map(int , input().split()))
b = sum(a)
for i in range(b):
  b-=9
  if(b<10):
    break
print(vet[b-1])