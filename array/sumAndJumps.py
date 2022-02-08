inarr = [int(s) for s in input().split(',')]
pos = 0
sum = inarr[0]
jumps = 0
while(pos<len(inarr)):
    if(inarr[pos]==0):
        pos = -1
        break
    s = sum
    curr = inarr[pos]
    if(pos+curr >= len(inarr)-1):
        pos = len(inarr)
        sum = sum + inarr[-1]
        jumps +=1
        break
    k = inarr[pos]
    for i in range(0,curr):
        g = sum + inarr[pos+i+1]
        if (g>s):
            s=g
            k=i+1
    pos = pos+k
    sum = s
    jumps+=1
if pos==-1:
    print(-1)
else:
    print(sum,jumps)

