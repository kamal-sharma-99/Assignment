# Q.48)_ Write a Python function to calculate the factorial of a number (a non negative integer)
def factFunc(n):
    if n==1 or n==0:
        return 1
    else:
        return n * factFunc(n-1)
    
num = int(input("Enter Number You Want Factorial Of : "))

print("Factorial of Given Number : ",factFunc(num))