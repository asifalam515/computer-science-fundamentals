#global variable
balance=3000

def buy_things(item,price):
    global balance
    dream_phone="iphone"
    print(f'previious balance value:',balance)
    balance=balance-price
    print(f'balance after buying  {item} ',balance)
    
buy_things('sunglass ',1000)
print('global balance after buy',balance)