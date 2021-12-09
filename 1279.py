idiota = 0
while(True):
    try:
        a = int(input())
        if(idiota == 0):
           idiota = 1
        else:
            print("\n", end ="")
        leap = 0
        hulu = 0
        bulu = 0
        if((a%4 == 0 and a%100 !=0) or a%400 ==0):
            leap = 1
            print("This is leap year.\n", end ="")
        if(a%15 == 0):
            hulu = 1
            print("This is huluculu festival year.\n", end ="")
        if(a%55 == 0 and leap == 1):
            bulu = 1
            print("This is bulukulu festival year.\n",  end ="")
        if(leap == 0 and hulu == 0 and bulu == 0):
            print("This is an ordinary year.\n", end ="")
    except Exception:
        break
