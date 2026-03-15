#typing 


import random as r
l=open("20k.txt", "r")
# ls=[]
# for i in range(20000):
#     ls.append(l.readline())
# print(ls[0],"\n")

while True:
    p=r.randint(0,20000)
    read=l.readline(p)
    print(read)
    inp=input()
    if inp=="exit":
        break
    elif inp==read:
        pass
    else :
        while True:
            print(read)
            i=input()
            if i==read:
                break
            if i=="exit":
                break


# another way

# import random as r
# from english_words import get_english_words_set
# words = get_english_words_set(['web2'], lower=True)       # words is a set of all the english words
# words2 = list(words)

# while True:
#     idx =  r.randint(0,len(words2))
#     b=words2[idx]
#     print(b)
#     a = input()
#     if a!=b:
#         break

