def call():
    print('calling someone i dont know')
    return 'call done'


class Phone:
    price=12000
    color='red'
    brand='samsung'
    features=['camera','speaker','hammer']
    def call(self):
        print('calling one person')
    def send_sms(self,phone,sms):
        text=f'sending sms to :{phone} and message: {sms}'
        print(text)
        
my_phone=Phone()
print(my_phone.features)
my_phone.send_sms(8342,"I love you")
