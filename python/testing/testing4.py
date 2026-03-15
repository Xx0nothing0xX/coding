password=1234
for i in range(5):
    x=int(input("Enter the password: "))
    if x==password:
        print("Access granted")
        break
    else:
        print("Access denied")