#listing 
var =  [12, 98.99, "naitik"]
print (type (var))
print (var)
print (var[1])
var[1] = 99
print (var)
print (var [0 : 2])


#list fxns
var = [7, 3, 8, 9, 0, 7]
print (var)
var.append(5)
print (var)
var.sort()
print (var)
var.sort(reverse = True)
print (var)
var.reverse()
print (var)
var.insert(3, 2)
print ( var)
var.remove (7)
print (var)
var.pop (3)
print ( var)
p = "naitik"
l = list(p)
print(l)

#tuples
tup = (2, 4, 5.9, "hi")
print (type(tup))
print (tup)

#external knowledge
my_list = [1, 2, 3]
print(", ".join(map(str, my_list)))


l=[]
while True:
    a=input()
    if a=="":
        break
    else:
        l.append(a)
print(l)