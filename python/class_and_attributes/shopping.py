class Shopping:
    def __init__(self,name):
        self.name=name
        self.cart=[] #empyt list dilam
        
    def add_to_cart(self,item,price,quantity):
        product={'item':item,'price':price,'quantity':quantity}
        self.cart.append(product)
    
    def checkout(self,amount):
        total=0
        for item in self.cart:
            # print(item)
            total+=item['price'] * item['quantity']
        print('total price ',total)
        if amount<total:
            print(f'Please provide {total - amount} more')
        else:
            extra=amount-total
            print(f'Here is your item and extra money {extra}')
    
swapan=Shopping('alan shopon')
swapan.add_to_cart('alu',10,2)
swapan.add_to_cart('dim',12,5)
swapan.add_to_cart('rice',50,3)
# print(swapan.cart)
swapan.checkout(100)