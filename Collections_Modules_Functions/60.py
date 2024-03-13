# Write a Python program to calculate the area of a trapezoid
# area  = (a+b)*h / 2

def area(b1,b2,h):
    a = (b1+b2)*(h/2)
    return a

base_a = int(input("Enter Base A of Trapezoid : "))
base_b = int(input("Enter Base B of Trapezoid : "))
height = int(input("Enter Height of Trapezoid : "))

print("Area of Trapezoid is",area(base_a,base_b,height))