# def doubled(x):
#     return x*2
# result =doubled(33)


#function_name=lamda parameter:return_things
doubled=lambda num:num*2
# print(doubled(33))

squre=lambda x:x**2
# print(squre(5))

add =lambda x,y:x+y
# print(add(3,4))

#pyton map
numbers=[12,43,46,75,89,100,110]
double_numbers=map(doubled,numbers)
print(list(double_numbers))
doubleNums=map(lambda x:x*2,numbers)
# print(list(doubleNums))
squared_mus=map(lambda x:x**2,numbers)
print(list(squared_mus))

actors=[
 {'name':'sabana','age':65},
 {'name':'Katrin','age':23},
 {'name':'Faria','age':26},
 {'name':'serabonti','age':55}
]
juniors=filter(lambda actor:actor['age']<30,actors)
Fivers=filter(lambda actor:actor['age']%5==0,actors)
print(list(Fivers))