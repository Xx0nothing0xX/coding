#armstrong no.

l=[]
for i in range(1700):
    l.append(i)
for x in l:
    p=len(str(l[x]))
    l2=[]
    for y in str(l[x]):
        l2.append(y)
        z=0
        for n in range(len(l2)):
            k=int(l2[n])**p
            z+=k
            if l[x]==z:
                print(z)
