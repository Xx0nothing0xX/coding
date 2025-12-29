def max_of(t):
    a=0
    for i in t:
        a=i
        for j in t:
            if i>=j:
                continue
            else:
                a=j
    return a

def subset(a,b):
    x=0
    for i in a :
        if i not in b :
            x=1
            pass
    if x==0:
        print('yes')            
    else:
        print('no')