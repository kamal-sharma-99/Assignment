# Q.51)_ Write a Python function that checks whether a passed string is palindrome or not.
def palFunc(str):
    if str[0::] == str[::-1]:
        print("Given String is Palindrome")
    else:
        print("Given String is not Palindrome")



str = input("Enter String : ")
palFunc(str)