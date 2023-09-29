numbers=[12,14,16,88,89,100]
person1=['kala chand','kumarkhali',23,'student1']
#key value pair/dictionary/object/hash table
#overlap with set
person={'name':'kaala pakhi','address':'kumarkhali','age':23,'job':'facebooker'}
# print(person['job'])
person['language']='python'
# print(person)
#evabe korle value gula pabo na .key gula pabo na
for item in person:
    print(item)
    
#special dictonary looping
for key,value in person.items():
    print(key,value)