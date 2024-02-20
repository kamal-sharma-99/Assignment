# Q.15)_ Write a Python program to get unique values from a list

list1 = [4,0,8,6,3,6,7,9,7,6,4,9,0,4,6]
list2 = []
for i in list1:
    if i not in list2:
        list2.append(i)

print("Unique Elements : ",list2)