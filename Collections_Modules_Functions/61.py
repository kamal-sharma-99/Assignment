# Write a Python program to calculate the area of a parallelogram
# Area = base * height

def area(b,h):
    return b*h

height = int(input("Enter Height of Parallelogram : "))
base = int(input("Enter Base of Parallelogram : "))
print("Area of Parallelogram is",area(height,base))