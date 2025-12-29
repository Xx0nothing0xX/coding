with open("demo1.txt") as f1:
    with open("demo2.txt") as f2:
        a=f1.read()
        b=f2.read()
        c=eval(a)+eval(b)
        print(sorted(c))
        
