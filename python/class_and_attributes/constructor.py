class Phone:
    manufactor='China'
    
    def __init__(self,owner,brand,price):
        self.owner=owner
        self.brand=brand
        self.price=price
        
        # pass    ei jaigata khali,kisu lekhi nai
    
    def send_sms(self,number,text):
        text=f'sending to {number} {text}'
        print(text)
        
my_phone=Phone('kala chad','0ppo',4000)
her_phone=Phone('she','iphone',10000)
# my_phone.send_sms(10232,'how are you')
print(my_phone.owner,my_phone.brand,my_phone.price)
print(her_phone.brand,her_phone.manufactor,her_phone.price)