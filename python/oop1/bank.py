class Bank:
    def __init__(self,balance) -> None:
        self.balance=balance
        self.min_withdraw=100
        self.max_withdraw=100000
    def get_balance(self):
        print(self.balance)
        
    def deposit(self,amount):
        if amount>0:
            self.balance += amount
    
    def withdraw(self,withdraw_amount):
        if withdraw_amount <self.min_withdraw:
            print (f' you cannt withdraw ')
        elif withdraw_amount >self.max_withdraw:
            print (f'your amount is much higher.u cannot withdraw more than {self.max_withdraw}')
        else:
            self.balance -=withdraw_amount
            print(f'here is your money {withdraw_amount}')
            print(f'your balance after withdraw {self.balance}')
            
brac=Bank(10000)
brac.withdraw(100)
dbbl=Bank(5000)
dbbl.deposit(100)
dbbl.get_balance()