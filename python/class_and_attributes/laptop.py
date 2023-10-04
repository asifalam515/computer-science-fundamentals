class Laptop:
    def __init__(self,brand,price,model):
        self.brand=brand
        self.price=price
        self.model=model
        # lets add some method here
        def add(self,num1,num2):
            return num1+num2

# instance crate kori
my_laptop=Laptop('hp',58000,'x2')
najmul_laptop=Laptop('apple',230000,'m1')
print(my_laptop.price)