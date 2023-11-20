class Phone:
    manufactured='China'
    def __init__(self,owner,brand ,price):
        self.owner=owner
        self.brand=brand
        self.price=price
    
    def send_sms(self,phone,sms):
        text=f'sending to: {phone} {sms}'
        print(text)
    
my_phone=Phone('asibul alam','samsung',23423)
her_phone=Phone('eva',"Iphone",100324)
dad_phone=Phone('abbu','Nokia',2342)
her_phone.send_sms('01634235','what are you doing?')