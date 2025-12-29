import numpy as np

#Matrix
mat=np.matrix([[1,2],[3,4]])      #works like array but multiplies like matrixz
print(mat)
                                  #always remember not all matrixz can be multiplied
mat1=np.matrix([[1,2],[3,4]])
mult=np.dot(mat,mat1)
print(mult,"\n")


print(np.transpose(mat))
print(np.swapaxes(mat,0,1))
print(np.linalg.inv(mat))
print(np.linalg.matrix_power(mat,2))   #n=0:identity , n>0:mult, n<0:inverse*power
print(np.linalg.det(mat))