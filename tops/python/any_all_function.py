odd =[1,3,5,7,9,11]
even = [0,2,4,6,8,10]

# all and any functio give boolean values

check = all([num%2==0 for num in odd])#it return false because there is no even value in odd
check2 = all([num%2!=0 for num in odd])#it return true because there is odd value in odd

print(check)
print(check2)

#any function check their any value present that condition true