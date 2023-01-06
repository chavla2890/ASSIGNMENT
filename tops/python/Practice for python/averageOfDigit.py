num1=int(input("enter the digit to find its average :- "));
n= len(str(num1))

sum=0
for s in range(n):
    sd = num1%10
    sum=sum+sd
    num1=num1//10
average=sum/n
print("average of of a guven digit is :- ")
print(average)