#Fleet Management
class Company:
    def __init__(self,name,address)->None:
        self.name=name
        self.bus=[]
        self.routes=[]
        self.counter=[]
        self.manager=[]
        self.supervisor=[]
        self.fare=[]
        
class Driver:
    def __init__(self,name,lincence,age) -> None:
        self.lincence=lincence
        self.name=name
        self.age=age
        
class Counter:
    def __init__(self)->None:
        pass
    def purchase_a_ticket(self,start,destination):
        pass
        

class Passanger:
    pass

class Supervisor:
    pass

red_mia=Driver('a','123',32)
