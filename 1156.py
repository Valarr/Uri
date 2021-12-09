s = 1.0
par = 2.0
for impar in range(3,40,2):
    s += (impar)/(par)
    par*=2.0
   
print("%.2f" %s)
