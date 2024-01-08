str = "Hello World!"

length = len(str)
length = length//2
print(length)


new_str = input("Enter Something Good : ")

space = " "
new_str+=space

result = str[:length] + new_str + str[length:]

print(result)