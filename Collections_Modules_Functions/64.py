# Q.63)_ Write a Python program to returns sum of all divisors of a number.

num = 54
sum = 0
for i in range(1,num+1):
    if num%i==0:
        print(i,end=" ")
        sum+=i

print("Sum of all divisors : ",sum)