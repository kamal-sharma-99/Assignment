# Q.22)_ Write a Python program to check whether an element exists within a tuple.

tup = ("mahipal", "hemendra", "kamal", "anushka")
exists = False
elem = input("Enter what you want to search : ")
for i in tup:
    if i == elem:
        exists = True



if exists == True:
    print("Element Exists")
else:
    print("Element Doesn't Exists")