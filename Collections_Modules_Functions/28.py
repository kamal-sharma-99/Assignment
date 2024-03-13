# Write a Python program to remove an empty tuple(s) from a list of tuples.

l1 = [(2,3),(4,5),(),(6,7)]
l2=[]
for i in l1:
    if i != ():
        l2.append(i)

print(l2)