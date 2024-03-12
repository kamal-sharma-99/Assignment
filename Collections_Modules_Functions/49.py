# Write a Python function to check whether a number is in a given range
def rangefunc(num):
    if num>5 and num<10:
        print("Number in within range (5 to 10)")
    else:
        print("Number in not within range (5 to 10)")

number = int(input("Enter Number : "))
rangefunc(number)