class Resturant:
    def __init__(self,name,menu=[]) -> None:
        self.name=self.name
        self.chef=None
        self.server=None
        self.manager=None
        self.menu=menu
        self.revenue=0
        self.expanse=0
        self.profit=0
        self.balance=0
        
        
    def add_employee(self,employee_type,employee):
        if employee_type=='chef':
            self.chef=employee
        elif employee_type=='server':
            self.server=employee
        elif employee_type=='manager':
            self.manager=employee
            
    def receive_payment(self,order,amount,customer):
        if amount >= order.bill <amount:
            self.revenue+=order.bill
            customer.due_amount=0
            self.balance +=order.bill
            return amount - order.bill
        
            
    def pay_expense(self,amount,description):
        if amount < self.balance:
            self.expanse += amount
            self.balance-= amount
            print(f'Expense {amount} for {description}')
        else:
            print(f'Not enough money to pay {amount}')
    
    def pay_salary(self,employee):
        if employee.salary < self.balance:
            employee.receive_salary()