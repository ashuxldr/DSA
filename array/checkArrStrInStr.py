inarr = input().split(',')
instr = input()
outstr = []

for i in inarr:
    x = set(i)
    if len(x) == len(i):
        if x <= set(instr):
            outstr += [i]
    else:
        t = 0
        for j in i:
            if j in instr:
                if i.count(j) == instr.count(j):
                    t += 1
        if (t==len(i)):
            outstr += [i]


if(outstr == []):
    print(-1)
else:
    outstr = ','.join(outstr)
    print(outstr)