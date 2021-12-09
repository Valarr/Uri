q = int(input())
soma = 0
conta = input()

for i in range(12):
    for j in range(12):
        valor = float(input())
        if(i == q):
            soma += valor
               
if(conta == 'S'):
     print("%.1f" %soma)
else:
     print("%.1f" %(soma/12.0))