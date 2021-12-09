a = list(map(float, input().split()))
a.sort(reverse=True)
b = a[0]
c = a[1]
d = a[2]
if(b>=c+d):
    print("NAO FORMA TRIANGULO")
else:
    if((b**2)==(c**2+d**2)):
       print("TRIANGULO RETANGULO")
    if((b**2)>(c**2+d**2)):
       print("TRIANGULO OBTUSANGULO")
    if((b**2)<(c**2+d**2)):
       print("TRIANGULO ACUTANGULO")
    if(b==c==d):
       print("TRIANGULO EQUILATERO")
    if((b==c and (b and c != d)) or (c==d and (c and d != b)) or (b==d and (b and d != c))):
       print("TRIANGULO ISOSCELES")
