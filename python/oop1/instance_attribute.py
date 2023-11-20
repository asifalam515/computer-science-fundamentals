class Shop:
    shopping_mall='jamuna'
    def __init__(self,buyer) -> None:
        self.buyer=buyer
        self.cart=[] #cart is an instance attribute
    def add_to_cart(self,item):
        self.cart.append(item)

mehjabein=Shop('mehjabein')
mehjabein.add_to_cart('shoe')
mehjabein.add_to_cart('phone')
print(mehjabein.cart)

nisho=Shop('nisho')
nisho.add_to_cart('watch')
nisho.add_to_cart('cap')
print(nisho.cart)
        