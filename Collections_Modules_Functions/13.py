# Q.13)_ Write a Python program to select an item randomly from a list.
import random

list1 = ["C","C++","Java","Python","Javascript"]
length = len(list1)
rand = random.randint(0,length-1)

print(list1[rand])