# file i/o

f= open("sample.txt","r")             
print(f.read())
f.close()

f= open("sample.txt","w")
f.write("goddamn right")
f.close()

with open("sample.txt","a") as f:
    f.write("\nhell yeah")


with open ("sample.txt","r") as f:
    print(f.readline())

import os                                  #module
os.remove("sample.txt")



