def full_name(firstName,lastName):
    name=f'{firstName} {lastName}'
    return name
# take parameter in order (serial wise)
# name=full_name('Alu','kodu')
name=full_name(lastName='kodu',firstName='alu')
print(name)

#def famous(**kargs)
def famous_name(first,last,**addditional):
    name=f'{first} {last}'
    print(addditional['tittle'])
    return name

name=famous_name(first='taheri' ,last='ali',tittle='hujur ', addditional='taheri')
# print(name)

#def function_name(num1,num2,*args,**kargs):


#we can return multiple thing from a function also
def a_lot(num1,num2):
    sum=num1+num2
    mult=num1*num2
    substrack=num1-num2
    return sum,mult,substrack

everything=a_lot(55,21)
print(everything)