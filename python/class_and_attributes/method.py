def call():
    print('calling someone i don\'t know')
    return 'call done'

class Phone:
    price=12000
    color='blue'
    brand='samsung'
    features=['camera','speaker','hammer']
    
    # self thaktei hobe
    def call(self):
        print('calling one person')
    def send_sms(self,phone,sms):
        text=f'sending SMS to :{phone} and message : {sms}'
        return text
        
my_phone=Phone()
# print(my_phone.features)  
# print(my_phone.brand)  
# my_phone.call()
result=my_phone.send_sms(343236,'i forgot to miss you')
print(result)
