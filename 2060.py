b = int(input())
a = list(map(int ,input().split()))
dois = 0
tres = 0
quatro = 0
cinco = 0
for i in range(b):
  if(a[i]%2==0):
    dois+=1
  if(a[i]%3==0):
    tres+=1
  if(a[i]%4==0):
    quatro+=1
  if(a[i]%5==0):
    cinco+=1
print(dois,"Multiplo(s) de 2")
print(tres,"Multiplo(s) de 3")
print(quatro,"Multiplo(s) de 4")
print(cinco,"Multiplo(s) de 5")
