numbers=[13,45,65,98]
numbers.append(56)
numbers.insert(2,71)
if 71 in numbers:
    numbers.remove(71)
    
lastItem=numbers.pop()
print(lastItem)
if 5 in numbers:
    index_of=numbers.index(5)
    print(index_of)
    
sorted=numbers.sort()
numbers.reverse()
print(numbers)