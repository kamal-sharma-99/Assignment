# Q.4)_ Write a Python function to get the largest number, smallest num and sum of all from a list.

list1 = [23,45,98,76,5]
sum=0

for i in list1:
    sum+=i

max = list1[0]
min = list1[0]

for i in list1:
    if max < i:
        max = i

for i in list1:
    if min > i:
        min = i


print("Sum : ",sum)
print("Max : ",max)
print("Min : ",min)