x = int(input())
Z = int(input())
j = 0

while(x >= Z):
    Z = int(input())
p = x
while(x<Z):
    x+=p+1
    j+=1
print(j)
