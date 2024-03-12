# Q.50)_ Write a Python function to check whether a number is perfect or not.
def perfectFunc(num):
    sum=0
    for i in range(1,num):
        if num%i==0:
            sum+=i
    return sum


num = int(input("Enter Number : "))
result = perfectFunc(num)
if num == result:
    print(result," is a Perfect Number")
else:
    print(num," is not a Perfect Number")





# There are only 4 perfect number between 1 to 10,000

# def perfectFunc(num):
#     sum=0
#     for i in range(1,num):
#         if num%i==0:
#             sum+=i
#     return sum


# num = 1
# while num < 10000:
#     result = perfectFunc(num)
#     if num == result:
#         print(result," is a Perfect Number")
#     num+=1