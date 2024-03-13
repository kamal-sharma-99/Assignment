# Write a Python program to check multiple keys exists in a dictionary

dic1 = {
    1 : 'hemendra',
    4 : 'anushka',
    2 : 'kamal',
    3 : 'naresh',
    1 : 'aqsa',
    4 : 'kashish',
}

def checkFunc(dic1):
    for k in dic1.keys():
        for mult in dic1.keys():
            if k == mult:
                print("Yes, multiple keys exist")


checkFunc(dic1)

# ma'am will teach me