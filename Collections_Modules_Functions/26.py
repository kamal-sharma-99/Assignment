# Q.25)_ Write a Python program to replace last value of tuples in a list.

tup = ("mahipal", "hemendra", "kamal", "anushka")

replace = input("Enter what you want to replace : ")

tup = list(tup)
l = len(tup)-1

tup.pop(l)

tup.insert(l,replace)

tup = tuple(tup)

print(tup)