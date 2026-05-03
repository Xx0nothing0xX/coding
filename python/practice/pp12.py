#typing 

import random as r
with open ("20k.txt", "r") as f:
    a = f.read().split("\n") 
while True:
    b=r.choice(a)
    print(b)
    i = input()
    if i=="exit":
        exit()
    if i!=b:
        while True:
            print("Wrong")
            print(b)
            i = input()
            if i==b:
                break
            elif i=="exit":
                exit()


    















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

