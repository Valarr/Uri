m = 0
f = 0
n = int(input())
for i in range(0,n):
    que = input().split()
    if(que[1] == 'F'):
        f+=1
    elif(que[1] == 'M'):
        m+=1
print(m,'carrinhos')
print(f,'bonecas')