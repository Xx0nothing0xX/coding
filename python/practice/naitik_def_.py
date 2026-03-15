def name():
    print("Naitik")

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

