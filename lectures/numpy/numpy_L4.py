#Shaping and reshaping arrays
import numpy as np

"""1"""
print("\n#1")
arr= np.array([[[1,2,3],[4,5,6]],[[7,8,9],[10,11,12]]])
print(arr)
print(arr.shape)   #shape of array   rows, columns
print(np.shape(arr))  #another way to get shape

"""2"""
print("\n#2")
#reshaping
arr= np.array([1,2,3,4,5,6])
x=arr.reshape(2,3)  #reshaping rows,columns
print(x)

"""3"""
print("\n#3")
#reshaping to 1D array
arr= np.array([[1,2,3],[4,5,6]])
x=arr.reshape(-1)  #reshaping to 1D array
print(x)



ar1=np.array([1,2,6,53,5,268,3])

print("after appending ",np.append(ar1,20))

print("after inserting",np.insert(ar1,1,90))

print("index of 53 is ",np.where(ar1==53)[0][[0]])
print("remove number by indexing ",np.delete(ar1,2))
print("removing number ",ar1[ar1!=53])

print("after sorting ",np.sort(ar1))
ar1=np.sort(ar1)[::-1]
print("after reversing",ar1)