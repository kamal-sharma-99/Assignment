'''
    Write a Python program to find the first appearance of the substring
    'not' and 'poor' from a given string, if 'not' follows the 'poor', replace the
    whole 'not'...'poor' substring with 'good'. Return the resulting string.

'''

str = "he is not poor boy"

str = str.split()
print(str)

for i in str:
    index = str.index(i)
    if i == "not":
        if str[index+1] == "poor":
            str.pop(index)
            str.pop(index)
            str.insert(index,"good")
            
new_str = " ".join(str)
print(new_str)