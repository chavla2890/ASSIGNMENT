#try and except finally
a = input("enter number1 ")
b = input("enter number2 ")

try:
    print("sum is ", int(a)+int(b))

except Exception as e:
    print(e)
