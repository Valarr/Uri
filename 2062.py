n = int(input())
s = list(input().split(' '))
s3 = []
for c in s:
    if(len(c) == 3):
        if((c[0] == 'O' and c[1] == 'B') or (c[0] == 'U' and c[1] == 'R')):
            s2 = list(c)
            s2[2] = 'I'
            c = "".join(s2)
    s3.append(c)

print(" ".join(s3))