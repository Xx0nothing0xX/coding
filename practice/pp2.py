import random as r
ch=['rock','paper','scissor']
i=r.randrange(0,3,1)
c=ch[i]
u=input("Enter you input:")
print("computer plays",c)
if c=='rock':
    if u=='scissor':
        print("Computer wins!!!!")
    elif u=='paper':
        print("you win")
    else:
        print("draw")
elif c=='scissor':
    if u=='paper':
        print("Computer wins!!!!")
    elif u=='rock':
        print("you win")
    else:
        print("draw")
elif c=='paper':
    if u=='rock':
        print("Computer wins!!!!")
    elif u=='scissor':
        print("you win")
    else:
        print("draw")
else:
    print("invalid input")

