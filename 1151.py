vet = [0,1]
n = int(input())
lp = n-2
if n<46:
  for i in range(lp):
    fib = vet[i]+vet[i+1]
    vet.append(fib)
else:
  for i in range(44):
    fib = vet[i]+vet[i+1]
    vet.append(fib)
print(str(vet).replace(",","").replace("[","").replace("]",""))