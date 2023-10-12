class Bank:
    def __init__(self,holder,balance) -> None:
        self.holder=holder
        self.__balance=balance
    def withdraw(self,amount):
        if self.__balance>amount:
            self.__balance-=self.__amount-amount
            return amount
        else:
            return f'tmr tk nai' 
    def deposit(self,amount):
        self.__balance+=amount
        return f'your money is {self.__balance}'
        
        
asif_bank=Bank('asbul alam',10000)
# asif_bank.deposit(1000)
print(asif_bank.deposit(150))
        
        