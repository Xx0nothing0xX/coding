# default_value = 42  # your default integer
# raw = input(f"Enter an integer (default {default_value}): ")

# if raw.strip() == "":        # user pressed Enter
#     number = default_value
# else:
#     try:
#         number = int(raw)    # convert input to int
#     except ValueError:
#         print("Invalid input, using default.")
#         number = default_value

# print("You entered:", number)
i=int(input("Enter a number: "))
if i%1!=0 :
    raise ValueError("Negative number not allowed")