h = int(input())
j = 0
while(h!=j):
  j+=1
  soma = 0
  n = int(input())
  for i in range(1,n):
    if n%i ==0:
      soma += i
  if soma == n:
    print(n,"eh perfeito")
  elif soma != n:
    print(n,"nao eh perfeito")