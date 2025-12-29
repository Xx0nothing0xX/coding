import numpy as np

# # Broadcasting
# """1"""
# print("\n#1")
# #adding 2 arrays
# """
# case 1: both arrays have same shape
# simple element wise addition

# case 2: arrays have different shapes but compatible for broadcasting
# smaller array is "broadcast" across the larger array so that they have compatible shapes

# case 3: arrays have different shapes and not compatible for broadcasting
# raises error
# """

# #case2
# """
# examples 
# 1X3 & 3X1
# 2X3 & 2X1
# 1X3 & 4X3 
# """
# print("1X3 & 3X1\n")
# a=np.array([1,2,3])
# b=np.array([[4],[5],[6]])
# print(a+b)

# #Indexing
# """2"""
# print("\n#2")
# arr= np.array(([[1,2,3],[4,5,6],[7,8,9]]))
# print(arr[1][1])


# #slicing
# """3"""
# print("\n#3")
# arr=np.array([[[1,2,3],[4,5,6]],[[3,2,1],[6,5,4]]])
# print(arr[0,1,1:3])

# #Iteration
# """4"""
# print("\n#4")
# """each for loop goes one bracket deeper"""
# arr=np.array([[1,2,3],[4,5,6]])
# for i in arr:
#     print(i)

# for i in arr:
#     for j in i:
#         print(j)

# #Iteration fxn
# """5"""
# print("\n#5")
# for i in np.nditer(arr):
#     print(i)
# for i,d in np.ndenumerate(arr):
#     print(i,d)

# #copy & view 
# arr2=arr.copy()
# arr2=arr.view()

# #joining/stacking
# """
#                             IMPORTANT
# """
# """6"""
# print("\n#6")
# arr1= np.array([[1,2],[3,4]])
# arr2= np.array([[2,1],[4,3]])
# a1= np.concatenate((arr1,arr2),axis=1)    #np.stack(),np.hstack(),np.vstack(),np.dstack()
# a2=np.stack((arr1,arr2),axis=1)
# a3=np.hstack((arr1,arr2))          #row
# a4=np.vstack((arr1,arr2))           #coloumn
# a5=np.dstack((arr1,arr2))
# print(a1)
# print(a2)
# print(a3)
# print(a4)
# print(a5)

#Spliting
"""7"""
print("\n#7")
arr=np.array([1,2,3,4,5])
s= np.array_split(arr,3)
print(s)

