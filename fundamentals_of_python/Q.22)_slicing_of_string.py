'''
Write a Python program to get a string made of the first 2 and the last
2 chars from a given a string. If the string length is less than 2, return
instead of the empty string.

'''

my_str = input("Enter Something Good : ")

if len(my_str) > 1:

    str1 = my_str[:2]
    str2 = my_str[-2:]
    new_str = str1 + str2
    print(new_str)

else:
    print(my_str)