#set:unique items collection,No duplicate item allows
#List --->[]
#set-->{}
#tuple--->()
numbers=[12,546,76,12,6,98]
print(numbers)
numbers_set=set(numbers)
# print(numbers_set)
numbers_set.add(55)
# print(numbers_set)
numbers_set.remove(6)
for item in numbers_set:
    print(item)

A={1,4,6,7}
B={1,2,4,6,7}
print(A&B) #duitar moddhe ja ja ase segula disse
print(A|B)#a union b.sobgulai cole asbe

