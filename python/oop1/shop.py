class Shop:
    cart =[]
    def __init__(self,buyer) -> None:
        self.buyer=buyer
    
    def add_to_cart(self,item):
        self.cart.append(item)
        
mehzabein=Shop('mehjabein')
mehzabein.add_to_cart('shoes')
mehzabein.add_to_cart('phone')
print(mehzabein.cart)

nisho=Shop('nisho')
nisho.add_to_cart('car')
nisho.add_to_cart('sun glass')
print(nisho.cart)