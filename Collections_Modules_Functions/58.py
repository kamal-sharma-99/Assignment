# Write a Python program to read a random line from a file.
import random

page = "There are two types of functions in python: User-Defined Functions - these types of functions are defined by the user to perform any specific task. Built-in Functions - these types of functions are pre-defined in python."

r = random.randint(0,len(page))