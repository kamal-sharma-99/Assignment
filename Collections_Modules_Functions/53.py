# How can you pick a random item from a list or tuple?
import random

list1 = [23,45,67,89,5,7,2,4,6,9,5,8]
l = len(list1)+1
r = random.randint(0,l)
print(list1[r])