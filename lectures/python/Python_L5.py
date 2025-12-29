# Loops 
count = 1             #iteraters
while count <=5 :     #iteration
    print ("hi")
    count += 1
print (count)
print ("end")

#treverse
list = [2,4, 6, 3 , 8, 9 , 0, 5, 7]
s = 0
while s < len(list) :
    print (list[s])
    s+=1
print ("end")

#break
c = 1           
while c <=5 :    
    print (c)
    if (c == 3):
        break
    c += 1
print( "end")

#continue
i = 0 
while i<6 :
    if (i == 3):
        i += 1 
        continue
    print(i)
    i += 1
print ("end")

#for loop 
n = [1, 2, 3, 4, 5]
for v in n :
    print (v)
else:            #optional
    print ('end')

#range
v = range(2,11,2)      # start, stop, step
for i in v :
    print (i) 
print ('end')

#pass
for v in i :
    pass
print ('end')


#k3b

t=(1,2,4,5,6)
i = int(input())
try :
    t.index(i)==ValueError
    print("ooh")
except :
    print("nope")
