n1=int(input("Enter First Number : "))
n2=int(input("Enter Second Number : "))
n3=int(input("Enter Third Number : "))

if n1==n2 or n2==n3 or n3==n1:
    print("0")
else:
    print("Sum of Three Given Number is : ",n1+n2+n3)