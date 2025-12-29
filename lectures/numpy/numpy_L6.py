import numpy as np

#Functions

"""1"""
print("#1")
arr=np.array([1,2,4,6])
s=np.where(arr%2==0)
print(s)

"""2"""
print("\n#2")
s=np.searchsorted(arr,3)
print(s)

"""3"""
print("\n#3")
arr1=np.array([2,4,23,54,342,3,5,423])
arr2=np.array (['d','a','B','c'])
print(np.sort(arr1))
print(np.sort(arr2))

"""4"""
print("\n#4")
v=[True,False,True,False]
print(arr2[v])

"""5"""
# print("\n#5")
# arr=np.array ([1,2,3,4,5])
# np.random.shuffle(arr)
# print(arr)

"""6"""
print("\n#6")
arr=np.array ( [1,2,3,2,2,1,3,4])
print( np.unique(arr, return_index=True, return_counts=True))

"""7"""
print("\n#7")
arr=np.array([1,2,3,4])
a= np.resize(arr, (2,2))
print(a)

"""8"""
print("\n#8")
arr=np.array([[1,2],[3,4]])
print(a.flatten(order="C"))

"""9"""
print('\n#9')
print( np.ravel(arr,order="F"))

'''10'''
print('\n#10')
arr=np.array([1,2,3,4])
i=np.insert(arr,1,9)      #inserts [x] when inserting floating values
print(i )

arr1= np.array([[1,2],[3,4]])          #2D
i1=np.insert(arr1,1,[5,6],axis=0)
i2=np.insert(arr1,1,[5,6],axis=1)
print(i1)
print(i2)

'''11'''
print('\n#11')
a=np.append(arr,[5,6])
b=np.append(arr1,[[5,6]],axis=0)
print(a)

'''12'''
print('\n#12')
d=np.delete(arr,1)
print(d)

'''13'''
print('\n#13')
arr=np.asarray([1,2,3,4,5])
arr=arr.reshape(-1,1)
print(arr)