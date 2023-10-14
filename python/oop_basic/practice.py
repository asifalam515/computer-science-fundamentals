"""
Inside the Shop class, create a method name add_product which adds products using the Product class to the Shop class.
Inside the Shop class, create a method name buy_product which is used to buy a product and check whether this product is available or not. If you successfully buy a product, then throw a Congress message.
What is Inheritance? Explain with examples
What are Encapsulation and Access Modifiers? Explain with examples

"""
product_list=[]
class Product:
    def __init__(self,name,price,available) -> None:
        self.name=name
        self.price=price
        self.available=available

class Shop(Product):
    def __init__(self, name, price, available) -> None:
       
        super().__init__(name, price, available)
    def buy_product(self,added):
        self.added=added
        if self.available==True:
            print("Yes you made the shopping")
            product_list.append(self.name)
        else:
            print("product is not available")
            
my_Shop=Product('biriyani',2000,True)
print(product_list)
        