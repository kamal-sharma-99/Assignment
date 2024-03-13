# Q.62)_ Write a Python program to calculate surface volume and area of a cylinder.
# volume is π r² h, and its surface area is 2π r h + 2π r²


r = int(input("Enter Radius of Cylinder : "))
h = int(input("Enter Height of Cylinder : "))
pi = 3.14
volume = pi*r*r*h
area = (2*pi*r*h) + (2*pi*r*r)
print("Volume of Cylinder is : ",volume)
print("area of Cylinder is : ",area)