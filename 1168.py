i = int(input())
while(i):
    s = list(input())
    x = s.__len__()
    
    j = 0
    t = 0
    while(x>0):
        if s[j]=='0':
            t+=6
        elif s[j]=='1':
            t+=2
        elif s[j]=='2':
            t+=5
        elif s[j]=='3':
            t+=5
        elif s[j]=='4':
            t+=4
        elif s[j]=='5':
            t+=5
        elif s[j]=='6':
            t+=6
        elif s[j]=='7':
            t+=3
        elif s[j]=='8':
            t+=7
        else:
            t+=6
            
        j+=1
        x-=1
            
            
    print(t,"leds")
    
    i-=1
