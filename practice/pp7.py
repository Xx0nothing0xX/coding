#Fibonacci series

x=[0,1]
for i in range(10):
    x.append(x[len(x)-1]+x[len(x)-2])
print(x)
