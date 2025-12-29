#Functions
 #fxn definition
def calc_sum (a , b):  # parameters
    sum = a + b
    print (sum)
    return sum

calc_sum(3,4)    #fxn call

#default para
def avg (a=0, b=0, c=0):
    print ((a+b+c)/2)


#recursive fxn
def fxn_1 (n):
    if n == 0:     #base case 
        return
    print(n)
    fxn_1(n-1)









