class Bank:
    # attribute will be here
    #lets create a constructor
    def __init__(self,balance):
        self.balance=balance
        
    def deposit(self,amount):
        self.balance+=amount
    def withdraw(self,amount):
        self.balance-=amount
    
    def total(self):
        print(self.balance)

asif_bank=Bank(10000)
asif_bank.withdraw(200)
asif_bank.deposit(10000)
asif_bank.total()