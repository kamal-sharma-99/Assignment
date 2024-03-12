# Write a Python program to find the repeated items of a tuple.

tup = (23,45,67,89,45,89,78,23,89)
l1=[]
l2=[]
for i in tup:
    if i not in l1:
        l1.append(i)
    else:
        if i not in l2:
            l2.append(i)

print(l2)