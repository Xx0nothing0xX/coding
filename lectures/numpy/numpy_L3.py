#Arithmetic Operations in NumPy
import numpy as np

"""1"""
print("\n#1")
#adding
arr1=np.array([1,2,3])    #adding by index
arr2=np.array([1,2,3])
added1=arr1+arr2          #+,-*,/,% operations can be done in the same way
print(added1)

added2=arr1 + 2   #2 will get added to each element of arr1
print(added2)

added3=np.add(arr1,arr2)   #using numpy function
print(added3)

"""2"""
print("\n#2")
#2D array
arr1=np.array([[1,2,3],[4,5,6]])
arr2=np.array([[1,2,3],[4,5,6]])
added1=arr1+arr2
print(added1)

added2=arr1 + 2
print(added2)

added3=np.add(arr1,arr2)
print(added3)

"""3"""
print("\n#3")
#arithmetic functions
arr=np.array([1,2,3,4,5])
print(np.min(arr))    #minimum value
print(np.max(arr))    #maximum value
print(np.mean(arr))   #mean value 
print(np.median(arr)) #median value
print(np.argmin(arr)) #index of minimum value
print(np.argmax(arr)) #index of maximum value
print(np.sin(arr))    #sine of each element
print(np.cos(arr))    #cosine of each element
print(np.sqrt(arr))   #square root of each element
print(np.cumsum(arr)) #cumulative sum of elements

"""
for 2 or more dimensional array we can specify axis parameter (var, axis=0/1)
axis=0 -> column wise operation
axis=1 -> row wise operation
"""
 