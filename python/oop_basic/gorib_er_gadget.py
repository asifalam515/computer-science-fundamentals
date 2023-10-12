class Laptop:
    def __init__(self,brand,price,color,memory) -> None:
        self.brand=brand
        self.price=price
        self.color=color
        self.memory=memory
    
    def run(self):
        return f'Runnning laptop: {self.brand}'
    
    def coding(self):
        return f'learning python and practicing'
class Phone:
    def __init__(self,brand ,price,color,dual_sim) -> None:
        self.brand=brand
        self.price=price
        self.color=color
        self.dual_sim=dual_sim
    def run(self):
        return f'phone tipa tipi kore jibon sesh'  
    def phone_call(self,number,text):
        return f'sending SMS to: {number} with: {text} '
    def __repr__(self) -> str:
        return f'phone :{self.dual_sim}'
    
class Camera:
    def __init__(self,brand,price,color,pixel) -> None:
        self.brand=brand
        self.price=price
        self.color=color
        self.pixel=pixel
        
    def run(self):
        pass
    def change_lens(self):
        pass
    
#inheritance
my_phone=Phone('samsung',1000,'red',True)
# my_phone.phone_call()
print(my_phone)
    
    