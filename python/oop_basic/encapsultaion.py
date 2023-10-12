#Encapsulation ==>hide details
#Access modifier:public ,protected,private
class Bank:
    def __init__(self,holder_name,initial_deposit) -> None:
        self.holder_name=holder_name #public attribute
        self._branch="bonani 11" #protected variable
        self.__balance=initial_deposit #private attribute
        
    def deposit(self,amount):
        self.__balance+=amount #private attribute
    
    def withdraw(self,amount):
        if amount<self.__balance:
            self.__balance=self.__balance-amount
            return amount
        else:
            return f'fokira taka nai'
            
    def get_balance(self):
        return self.__balance
        
    def __repr__(self) -> str:
        return f'{self.holder_name} deposit : {self.balance}'
rafsan=Bank("chooto vai",10000)
# rafsan.balance=0
rafsan.holder_name='boro vai'
rafsan.deposit(40000)
# print(rafsan.holder_name)
print(rafsan.get_balance())
# print(rafsan._branch)
print(dir(rafsan))

print(rafsan._Bank__balance)

