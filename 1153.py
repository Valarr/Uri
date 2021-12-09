fat,mat = int, 1
n = int(input())
for i in range(n-1):
  mat *= (n-i)
print(mat)