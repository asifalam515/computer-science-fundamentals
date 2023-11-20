class Shopping:
    def __init__(self ,name) -> None:
        self.name=name
        self.cart=[]
        
    def add_to_cart(self,item,price,quantity):
        product={'item':item,'price':price,'quantity':quantity}
        self.cart.append(product)
    
    def checkout(self,amount):
        total=0
        for item in self.cart:
            total += item['price'] * item['quantity']
        print('total price',total)
        if amount <total:
            print(f'please provide {total - amount} more')
        else:
            extra=amount-total
            print(f'here is your items and extra money {extra}')
        
swapan=Shopping("Alan Swapan")
swapan.add_to_cart('alu',50,5)
swapan.add_to_cart('dim',10,8)
swapan.add_to_cart('rice',50,5)
# print(swapan.cart)
swapan.checkout(34234)