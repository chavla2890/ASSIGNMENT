def fact(n, an):
    
    if n==0:
        print(an)
        return;
    an= an*n
    fact(n-1, an)
an=1
n=int(input("enter the number to find the factorial :- "))
fact(n, an)

