
# import os 
# os.system('cls')

# #Time module
# import time as time
# start = time.perf_counter()
# x=2**14284

# print(x)
# end = time.perf_counter()
# print("Execution time:", end - start, "seconds")

# #eval function
# x = 10
# expression = "x"
# result = eval(expression)
# print(result)
# print(type(eval)
# print(eval(input()))

# #try and except
# a= 5
# b= input()
# try:
#     n=int(b)
#     print(n)
#     print("badhiya")
# except ValueError :
#     print ("laude sahi se number daal")
#     pass

# #random module
# import random as r
# print(r.randint(500000,599999))

#lambda
z=lambda x,y:x+y
a=z(2,2)
print(a)               #or
print((lambda h,k:h+k)(2,2))

#reduce fxn
from functools import reduce as red
num = [1,2,3,4]
sum = red(lambda a,x: a+x,num)
print(sum)

#sorted fxn
num=[2,3,1,5,4,7,6]       #also uses key fxn
sort = sorted(num)
print((sort))

#map fxn
num=[1,2,3,4]
map=list(map(lambda x:x+1,num))
print(map)

#filter fxn
num=[1,2,3,4,5]
f=filter(lambda x: x%2!=0,num)
print(list(f))

#help fxn 
"""help(print)"""

#to call a def fxn via user input
def f_c(a):
    print((a-32) * 5/9)
def c_f(a):
    print((9/5 * a) + 32)
def c_k(a):
    print(a + 273.15)
def k_c(a):
    print(a-273.15)
dic={
    "f_c":f_c,
    "c_f":c_f,
    "c_k":c_k,
    "k_c":k_c
}
i=input()
j=input()
if i in dic :
    dic[i](float(j))
    
#a decent one
p=input()
for i in p :
    if i in ",.!?;:-":
        p=p.replace(i , "")
w=p.split()
d={}
for i in w:
    d[i] = d.get(i, 0) + 1
print(d)
m=max(d.values())
t=[a for a,b in d.items() if b==m]
print("The para mainly talks about",str(t))

#enumerate