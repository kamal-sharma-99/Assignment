# Write a Python function to get the largest number, smallest num and sum
# of all from a list

l1 = [23,45,67,89,51]

min=l1[0]
max=l1[0]
sum=0

for i in l1:
    if i > max:
        max=i
    if i < min:
        min=i
    sum+=i

print("Minimum Number in List is ",min)
print("Maximum Number in List is ",max)
print("Sum of all Numbers in List is ",sum)