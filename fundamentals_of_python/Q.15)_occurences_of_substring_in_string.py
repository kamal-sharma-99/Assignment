'''
    Write a Python program to count occurrences of a substring in a string.
    
'''


str1 = input("Enter string : ")

str2 = input("Search Word : ")

str1 = str1.split()
count = 0
for i in str1:
    if i == str2:
        count+=1

print(str2,":",count)