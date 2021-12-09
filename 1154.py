age = []
x = 0
while x>=0:
  x = int(input())
  if x >= 0:
    age.append(x)
print("%.02f" % (float(sum(age))/float(len(age))))