num1=input('Enter first Number: ')
num1_int=int(num1)
num2=input('Enter second Number: ')
num2_int=int(num2)
num3=input('Enter third Number: ')
num3_int=int(num3)
sum=0
numbers=[num1_int,num2_int,num3_int]
for num in numbers:
    sum+=num
print(sum)
