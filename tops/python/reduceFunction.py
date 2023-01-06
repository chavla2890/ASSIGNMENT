from functools import reduce

name = [12,35,12,36,45,21,2]
total = reduce(lambda x,y : x+y, name) # this add all the number

greater = reduce(lambda x,y : x if x> y else y, name) # find the maximun from the  list 
print(total)
print(greater)