a=int(input()) #or 8
b=int(input()) #or 4
l=[a,b]
m=min(l)
gcd=1
for i in range(1,m+1):
    if a%i==0 and b%i==0:
        gcd=i
print(gcd)
