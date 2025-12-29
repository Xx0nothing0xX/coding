import numpy as np
"""1"""
print("\n#",1)
l=[1,2,3]
n=np.array(l)
print(n)

"""2"""
print("\n#",2)
print(np.arange(1,9))

"""3"""
#array dimentions

print("\n#",3)
#1D array
d1= np.array([1,2,3])           #all items in 2d or 3d array must be of same length
#2D array
d2=np.array([[1,2,3],[4,5,6]])
#3D array
d3=np.array([[[1,2,3],[4,5,6],[7,8,9]]])

print(d1)
print(d2)
print(d3)

"""4"""
#gives dimention of an array 
print("\n#",4)
print(np.ndim(d2)) #d2.ndim

"""5"""
print("\n#",5)
#creating multidimentional array 
md=np.array([1,2,3],ndmin= 10)
print(md)
print(md.ndim)

"""6"""
print("\n#",6)
#array filled with zeroes
zero_array= np.zeros(4)
zero_array_multi=np.zeros((3,4))        #3 rows 4 elements/columns
print(zero_array)
print(zero_array_multi)

"""7"""
print("\n#",7)
#array filled with ones
ones_array=np.ones(4)
print(ones_array)

"""8"""
print("\n#",8)
#empty array
mt_array=np.empty(4)
print(mt_array)           #previous values in memory are stored here

"""9"""
print("\n#",9)  
#array with range of elements
ran_array=np.arange(1,10,2)     #start,end,step
print(ran_array)                #like range function

"""10"""
print("\n#",10)
#diagonal array
diag_array=np.eye(3)   #3x3 identity matrix
print(diag_array)       

"""11"""
print("\n#",11)
#linearly spaced array
lin_array=np.linspace(0,20,5)  #start,end,no of elements
print(lin_array)               #like AM arithmetic mean

""""12"""
print("\n#",12)
#array with random values
rand_array=np.random.random((3,2))   #3 rows 2 columns
print(rand_array)
print(rand_array.ndim)      #gives number of dimensions
print(rand_array.shape)     #gives shape of array
print(rand_array.size)      #gives total number of elements in array
print(type(rand_array))     #gives type of array
print(type(rand_array[0]))  #gives type of first element of array

kk=np.random.randint(1,10,3)  #gives random integer between 1 to 10
print(kk)



