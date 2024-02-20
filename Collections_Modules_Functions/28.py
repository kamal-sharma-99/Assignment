# Q.27)_ Write a Python program to remove an empty tuple(s) from a list of tuples

list = [(1,2),(),(3,4),(),(),(5,6)]

for i in list:
    if i == ():
        list.remove(i)

print(list)