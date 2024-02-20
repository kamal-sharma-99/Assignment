# Q.27)_ Write a Python program to find the repeated items of a tuple.

tup = (23,45,78,90,45,78)
list = []
repeated = []
for i in tup:
    if i not in list:
        list.append(i)
    else:
        repeated.append(i)


print("Repeated items : ",repeated)