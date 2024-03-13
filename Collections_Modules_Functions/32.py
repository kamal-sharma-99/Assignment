# Write a Python script to sort (ascending and descending) a dictionary by value.
# dic1 = {
#     1 : 45,
#     2 : 67,
#     3 : 89,
#     4 : 23,
#     5 : 90,
# }

dic1={
    1:45,
    2:23
}

def ascending_Func(dic1):
    l=len(dic1)
    for i in range(l):
        for j in range(1,l):
            if dic1[i] > dic1[j]:
                dic1[i] , dic1[j] = dic1[j] , dic1[i]
    return dic1
    
print(ascending_Func(dic1))