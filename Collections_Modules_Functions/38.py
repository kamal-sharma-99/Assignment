# Write a Python script to print a dictionary where the keys are numbers between 1 and 15.



dic1 = {
    1 : 'hemendra',
    2 : 'chris',
    5 : 'suresh',
    19 : 'asuka',
    25 : 'hemeni',
    9 : 'kamal',
    7 : 'rashi',
    20 : 'anu',
}


def checkFunc(dic1):
    for k in dic1.keys():
        if k >= 1 and k <= 15:
            print(k)


checkFunc(dic1)