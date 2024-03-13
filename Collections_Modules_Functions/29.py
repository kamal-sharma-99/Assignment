# Write a Python program to unzip a list of tuples into individual lists.

t1 = [(1 , "hemendra"),(2 , "naresh"),(3 , "kamal")]

result = list(zip(*t1))

print(result)