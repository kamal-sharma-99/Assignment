# How can you pick a random item from a range?

import random
s_range = int(input('Enter Starting Range : '))
e_range = int(input('Enter Ending Range : '))

r = random.randint(s_range,e_range)

print(r)