a = int(input())

while(a>0):
    b = int(input())
    if b == 0:
        print("NULL")
    elif b%2 == 0:
        if b>0:
            print("EVEN POSITIVE")
        else:
            print("EVEN NEGATIVE")
    else:
        if b>0:
            print("ODD POSITIVE")
        else:
            print("ODD NEGATIVE")
    a-=1
