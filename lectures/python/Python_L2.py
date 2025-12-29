
#escape serquence characters
str1 = "my name is naitik. \ni live in jbp."
print (str1)
str2 = "my name is naitik. \ti live in jbp."
print (str2)

# basic ops
str1 = "hello"
str2 = "world"
print (str1 + " " + str2)
print (len(str1))

#indexing
str = "hello world"
print (str[6])

#slicing
str = "hello world"
print ( str[2:6])
print (str [6:])
print (str [:-6])

# string funcs
str = "hello world!"
print (str.endswith("rld!"))
str = str.capitalize()
print (str)
print (str.replace("o","a"))
print (str.find("w"))
print (str.find("wr"))
print (str.count("l"))

#conditional statement
light = "green"
if (light == "red"):
    print ("stop")
elif (light == "yellow"):
    print ("look")
elif (light == "green"):
    print ("go")
else:
    print ("broken")

#nesting
age = 18
if (age >= 18):
    if (age <=20):
        print("perfect")
    elif(age > 20 and age < 40):
        print ("milf")
    else:
        print ("hail naw")
else:
    print ("illigal")





