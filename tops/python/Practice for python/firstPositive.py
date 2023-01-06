n=int(input("enter the size of triagle :- "))
s=1
for i in range(n):
    for j in range(i):
        print(s,end=" ")
        s=s+1
    print()
    