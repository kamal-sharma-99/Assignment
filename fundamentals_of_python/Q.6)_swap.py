a=int(input("Enter Value of a : "))
b=int(input("Enter Value of b : "))

print("Before Swappig A is",a)
print("Before Swappig B is",b)

#Without Using Temp Variable
# a,b=b,a   

# With Temp Variable
temp = a
a = b
b = temp

print("After Swappig A is",a)
print("After Swappig B is",b)