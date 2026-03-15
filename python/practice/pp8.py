#ncr 

n=int(input("n:"))
r=int(input("r:"))
def f(i):
    z=1
    while i>=1:
        z*=i
        i-=1
    return z
print(f(n)/(f(r)*f(n-r)))