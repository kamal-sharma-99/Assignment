# Write a Python program to find the maximum and minimum numbers from the specified decimal numbers.
l1 = [.9,.7,.8,.2,.1]

# l1.sort()
# print(l1)


l = len(l1)

for i in range(l):
    for j in range(l-1):
        if l1[i]<l1[j]:
            l1[i],l1[j] = l1[j],l1[i]

print(l1)