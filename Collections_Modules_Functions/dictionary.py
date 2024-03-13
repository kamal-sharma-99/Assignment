dic = {
    1 : 'hemendra',
    2 : 'naresh',
    3 : 'anushka',
}

print(dic)
print(dic.keys())
print(dic.values())

for key in dic.keys():
    print(key,":",dic[key])


for v in dic.values():
    print(v)

print(dic.items())

for k, v in dic.items():
    print(k,":",v)


# Methods
    
ep1={
}
ep2={
}

ep1.update(ep2)
ep1.clear() # delete all data from dictionary
# ep1.pop(key_name) remove particular key value pair

ep1.popitem() # remove last pair

del ep1[key]