x= input()
l = list(x)

a= ""
b= ""
c= ""

i=0
for i in range((len(x))):
    if l[i]!=" ":
        a+=l[i]
        i+=1
    elif l[i]==" ":
        i+=1
        break
for i in range(i,(len(x))):
    if l[i]!=" ":
        b+=l[i]
        i+=1
    elif l[i]==" ":
        i+=1
        break
for i in range(i,(len(x))):
    if l[i]!=" ":
        c+=l[i]
        i+=1
    elif l[i]==" ":
        i+=1
        break

if b=="+":
    print(int(a)+int(c))
if b=="-":
    print(int(a)-int(c))
if b=="*":
    print(int(a)*int(c))
if b=="/":
    print(int(a)/int(c))
if b=="%":
    print((int(a)*int(c))/100)

