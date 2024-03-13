# How will you create a dictionary using tuples in python?
t1 = [(1 , 'hemendra'),(2 , 'naresh'),(3 , 'kamal')]
d1 = {}

for k, v in t1:
    d1.setdefault(k,v)
print(d1)


# d1 = dict(t1)
# print(d1)