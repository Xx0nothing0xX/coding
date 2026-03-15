import numpy as np 
ar1=np.array([1,2,6,53,5,268,3])

print("after appending ",np.append(ar1,20))

print("after inserting",np.insert(ar1,1,90))

print("index of 53 is ",np.where(ar1==53)[0][[0]])
print("remove number by indexing ",np.delete(ar1,2))
print("removing number ",ar1[ar1!=53])

print("after sorting ",np.sort(ar1))
ar1=np.sort(ar1)[::-1]
print("after reversing",ar1)