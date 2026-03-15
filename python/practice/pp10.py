# 4300 digits rule in python
i=0
while True:
    x=2**i
    y=str(x)
    if len(y)>=4300:
        print(i-1)
        break
    else:
        i+=1

print("done")
 