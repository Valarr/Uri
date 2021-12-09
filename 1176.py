vet = []
fib = []
fin = 0
mas = 0
fib.append(0)
fib.append(1)
for j in range(60):
  fin = fib[j]+fib[j+1]
  fib.append(fin)

q = int(input())
for i in range(q):
  mas = int(input())
  print("Fib(%d) = %d" %(mas, fib[mas]))