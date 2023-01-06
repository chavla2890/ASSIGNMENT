# user difine function
# def sum(a,b=4):
#     print(a+b)
# sum(5)

# factorial fuction and rec urrsion
def factorial(n, fact):
    if n==0:
        print(fact)
        return
    fact=fact*n
    factorial(n-1, fact)

n=int(input("enter the number to find the factorial :- "))
factorial(n, 1)