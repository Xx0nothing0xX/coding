#oops
class Cars:
    model = "720s"
    eng = "V8"
    hp = "1100"

c1 = Cars()           #objects
print(Cars.eng)

#constructor     __init__ fxn
class student:
    def __init__(self, name, marks ) :
        self.name = name
        self.marks = marks
        print("naming...")

s1 = student("ayush", 99)
print(s1.name , s1.marks)

s2 = student("naitik", 98)
print(s2.name , s2.marks)

#attributes
class student:
    clg = "nitr"               #class attr
    def __init__(self, name, marks ) :
        self.name = name
        self.marks = marks
        print("naming...")

s1 = student("ayush", 99)       #obj attr
print(s1.name , s1.marks, s1.clg)

#methods
class student(Cars):     #inheritance
    clg = "nitr"   
    def __init__(self, name, marks ) :
        self.name = name
        self.__marks = marks        #private
    
    @staticmethod
    def hello  ():
        print("hello")

    def welcome(self):
        print("welcome", self.name)

    def marks(self):
        return self.__marks

s1 = student("ayush", 99) 
s1.name = "naitik"
s1.hello()
s1.welcome() 
# print(s1.__marks)    

#del
del s1.name

#imp
class fxn1():
    def __init__(self,a,b,c):
            self.a=a
            self.b=b
            self.c=c
    def fxn2(self):
          print("hi i am %s.i live in %s.i am %s years old." %(self.a,self.b,self.c))


s1=fxn1("ayush","jbp",18)
s1.fxn2()