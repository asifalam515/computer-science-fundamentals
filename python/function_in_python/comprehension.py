numbers=[45,76,43,85,14,26,71]
odds=[]
for num in numbers:
    if num%2!=0 and num%5==0:
        odds.append(num)
    else:
        continue
# print(odds)
#we can do it this way also but its not readable
odd_nums=[num for num in numbers if num%2==1 and num%5==0]
# print(odd_nums)

players=['sakib','mushfiq','liton']
ages=[38,39,32]
age_comb=[]
for player in players:
    # print('player : ',player)
    for age in ages:
        # print(player,age)
        age_comb.append([player,age])
# print(age_comb)

age_comb_2=[[player,age] for player in players for age in ages]
print(age_comb_2)