n = int(input())
for i in range(n):
  soma = 0
  a1, a2 = list(map(int,input().split()))
  for v in range (a2):
    if a1%2 == 0:
      a1 += 1
    soma += a1
    a1 += 1

  print(soma)