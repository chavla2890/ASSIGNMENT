n =int(input("enter  the size of triangle :- "))
for i in range(n):
    for j in range(n):
        if i==n-1 or j==0 or i==j:
            print("*",end="")
        else:
            print(end=" ")
    print("")
