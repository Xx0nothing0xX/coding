d1 = {
    "a": 1, 
    "b": 2
    }
d2 = {
    "b": 3, 
    "c": 4
    }

merged=d1.copy()
list1=[]
list2=[]
for i in d1:
    for j in d2:
        if i==j:
           print('same')
           list1.append(j)
        elif i!=j and j not in list2:
            print('not same')
            list2.append(j)

print(list1)
print(list2)

