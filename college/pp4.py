t=(1,2,3,4,5)
l=[]
for i in range(-1,-1-len(t),-1):
    l.append(t[i])
a=tuple(l)
print(a)

import practice.naitik_def_ as p

t=(1,2,3,4,55,6,7,8)
print(p.max_of(t))