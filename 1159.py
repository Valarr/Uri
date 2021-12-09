x = 0
a = int(input())
while(a!=0):
  soma = 0  
  while(x<5):
    if a%2 == 0:
      soma += a
      a += 1
      x += 1
    a += 1
  print(soma)
  x = 0
  a = int(input())