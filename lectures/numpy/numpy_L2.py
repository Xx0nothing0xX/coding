##DATA TYPES IN NUMPY
import numpy as np

"""1"""
print("\n#1")
#to check datatype of a variable
var1=np.array([1,2,3])
print(var1.dtype)    #will give datatype of array elements
var2=np.array([1.0,2.0,3.0])
print(var2.dtype) 
var3=np.array(['1','2','3'])
print(var3.dtype)

"""2"""
print("\n#2")
#to convert datatype of a variable
var4=np.array([1,2,3],dtype=np.float32)     #or
var5=np.array([1,2,3],dtype= "f")           #or
var6=np.array([1,2,3])                      #or
new=np.float32(var6)
neu=var6.astype(np.float32)    
print(var4.dtype)
print(var5.dtype)
print(new.dtype)
print(neu.dtype)

"""
total number of datatypes in numpy= 23
1. int8(i1)
2. int16(i2)
3. int32(i4)
4. int64(i8)
5. uint8(u1)
6. uint16(u2)
7. uint32(u4)
8. uint64(u8)
9. float16(f2)
10. float32(f4)
11. float64(f8)
12. complex64(c8)
13. complex128(c16)
14. bool(b1)
15. object(o)
16. string_(S)
17. unicode_(U)
18. datetime64(D)
19. timedelta64(m8)
20. void(V)
21. half
22. single
23. longdouble
"""

"""
total number of datatypes in numpy
bool_
int_
int8
int16
int32
int64
uint8
uint16
uint32
uint64
float_
float16
float32
float64
complex_
complex64
complex128
"""

"""
short forms of datatypes in numpy
i  int
b  bool
u  unsigned int
f  float
c  complex float
m  timedelta
M  datetime
O  object
S  string
U  unicode string
V  void
"""

