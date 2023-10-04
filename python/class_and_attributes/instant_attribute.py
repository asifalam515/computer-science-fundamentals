class Shop:
    shopping_mall='Jamuna'
    def __init__(self,buyer):
        self.buyer=buyer
        self.cart=[] #cart is an instant attribute
    def add_to_cart(self,item):
        self.cart.append(item)
        
mehjabein=Shop('Mehjabein')
mehjabein.add_to_cart('shoe')
mehjabein.add_to_cart('phone')
print(mehjabein.cart)
nisho=Shop('nisho')
nisho.add_to_cart('hat')
nisho.add_to_cart('watch')
print(nisho.cart)