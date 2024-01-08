'''
    Write a Python program to get a single string from two given strings,
    separated by a space and swap the first two characters of each string.
'''

str1 = input("Enter 1st string : ")
str2 = input("Enter 2nd string : ")

swap1 = str1[:2]
swap2 = str2[:2]

s_new1 = str1[:2] + str2[2:]
s_new2 = str2[:2] + str1[2:]

new_str = s_new1 + " " + s_new2

print(new_str)
