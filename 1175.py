vet = []
vex = []
j = 0
for i in range(20):
  h = int(input())
  vet.append(h)
pos = 0
for l in vet[::-1]:
    print("N[%d] = %d" %(pos,l))
    pos += 1
  