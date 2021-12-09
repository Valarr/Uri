while(True):
    try:
        pc_task, pc_time = map(int,input().split())

        mon = [[] for i in range(pc_time)]
        cont = 0
        while (cont < pc_task):
            money, time = map(int, input().split())
            mon[pc_time - time].append(money)
            cont += 1

        aux1 = [0]
        aux2 = 0
        while (aux2 < pc_time):
            aux1 += mon[aux2]
            if aux1:
                aux1.remove(max(aux1))
            aux2 +=1
        print(sum(aux1))
    except:
        break