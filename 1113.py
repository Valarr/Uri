a, b = map(int, input().split())
while a!=b:
    if(a>b):
        print("Decrescente")
    elif(b>a):
        print("Crescente")
    a, b = map(int, input().split())
