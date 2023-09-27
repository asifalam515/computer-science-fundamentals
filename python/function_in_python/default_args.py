def sum(num1,num2,num3=0,num4=0,num5=0):
    result=num1+num2+num3+num4+num5
    return result

total=sum(98,11)
# print('total: ',total)

#args
def add_all(num1,num2,*args):
    for x in args:
        print(x)

total=add_all(10,20,30,49)