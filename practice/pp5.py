

x=int(input())
z=0
for y in range(1,x):
    if y%2==0:
        z-=y
    else:
        z+=y
print(z)
