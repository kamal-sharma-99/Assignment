# How Do You Check The Presence Of A Key In A Dictionary?

dic1 = {
    1 : 'hemendra',
    2 : 'kamal',
    3 : 'naresh',
    4 : 'anushka',
}

def checkFunc(dic1,k):
    if k in dic1.key():
        print("Yes, given key is exist")
    else:
        print("No, given key is not exist")


k = int(input("Enter Key : "))
checkFunc(dic1, k)