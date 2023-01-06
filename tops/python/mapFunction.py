name=["22","54","45","8"]
name = list(map(int,name)) #  function convert the string number into integer

name = list(map(lambda x:x*x,name)) # sqaure done by the map function
print(name)