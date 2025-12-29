import random as r
import os
os.system("cls")
x=r.randrange(1,10,1)
print("Guess number between 1 to 10:")
p=1
while p<=3:
    i=int(input())
    if i== x:
        print("congrats!!!!!!")
        break
    elif(i<x):
        if p==3:
            print("You lose")
        else :
            print("Try larger") 
        p+=1
    else:
        if p==3:
            print("You lose")
        else:
            print("Try smaller")
        p+=1 

