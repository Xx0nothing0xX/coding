#dictionary
dict = {
    "key" : "value",
    "name" : "naitik",
    "ben" : 10,
    10 : ["hi", "hello", 24]
}

print (type(dict))
print (dict)
print (dict["key"])

dict["name"] = "ayush"
print (dict)

dict["clg"] = "nit"
print(dict)

#nested dictionary

info = {
    "name":"naitik", 
    "subjects":{
        "phy":99,
        "chem":98,
        "math":97,
    }
}

print(info["subjects"]["phy"])

#fxns
print(info.keys())
print(list(info.keys()))
print(info.values())
print(info.items())
print(info.get("name")) #returns none instead of error when wrong

info.update({"city": "jbp"}) #overwrites if key already exists
print ("info")

#sets
sets = {1, 2, 3, 4, "a", "s"}#sets are mutable but its elements arent
my_set = set()

print(type(sets))

#funx

sets.add(5)
sets.remove(4)
print (sets)

sets.clear()
print (sets)

set = {1, 2, 3, 4, 5}
print(set.pop())

set1 = {1, 2, 3, }
set2 = {3, 4, 5, }

print (set1.union( set2))
print( set1.intersection(set2))








