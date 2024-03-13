# Q.9)_ Write a Python function that takes two lists and returns true if they have at least one common member.

list1 = [9,5,6,7]
list2 = [9,8,3,5]

for i in list1:
    for j in list2:
        if i==j:
            print(True)