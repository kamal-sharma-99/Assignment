# Q.5)_ How will you compare two lists?
list1 = [1,2,3]
list2 = [1,2,3]

for i in list1:
    ind = list1.index(i)
    if list1[ind] == list2[ind]:
        print("Both Are Same")
