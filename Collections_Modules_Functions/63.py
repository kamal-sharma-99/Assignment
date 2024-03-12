# Write a Python program to returns sum of all divisors of a number
def divisorsFunc(num):
    sum=0
    for i in range(1,num+1):
        if num%i==0:
            sum+=i
            print(i)
    return sum

number = int(input("Enter a Number : "))
result = divisorsFunc(number)
print("Sum of All Divisors is",result)