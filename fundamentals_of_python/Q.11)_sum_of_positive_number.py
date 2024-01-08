n=int(input("Enter a Number : "))

sum = (n*(n+1))/2
print("Sum of n numbers with formulae is ",sum)



sum2=0
for i in range(1,n+1):
    sum2=sum2+i
print("Sum of n numbers with for loop is ",sum2)