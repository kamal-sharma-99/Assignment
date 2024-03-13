# Q.10)_ Write a Python program to generate and print a list of first and last 5
# elements where the values are square of numbers between 1 and 30.

list1 = []
for i in range(1,31):
    j = i*i
    list1.append(j)

print("Square Of First Five Elements : ",list1[:5])
print("Square Of Last Five Elements : ",list1[-5:])