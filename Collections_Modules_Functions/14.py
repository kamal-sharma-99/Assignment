# Q.14)_ Write a Python program to find the second smallest number in a list.

list1 = [7,5,4,9,8,2]

# list1.sort()
# print("Second Smallest In Given List Is :",list1[1])


l = len(list1)

for i in range(l):
    for j in range(l-1):
        if list1[i]<list1[j]:
            list1[i],list1[j] = list1[j],list1[i]

print(list1)