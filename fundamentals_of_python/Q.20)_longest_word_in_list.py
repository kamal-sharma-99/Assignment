# Write a Python function that takes a list of words and returns the length of the longest one.


list = input("Enter Words: ")
list = list.split()

max = list[0]
for word in list:
    current_word = word
    if len(current_word) > len(max):
        max = current_word


print("Longest word in given string is : ",max)