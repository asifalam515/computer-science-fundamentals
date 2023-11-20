class Pen:
    def __init__(self,color,price) -> None:
        self.color=color
        self.price=price
    def gift(self,name,person):
        print(f'{name} is gifted to {person}')
    
asif_pen=Pen('black',10)
asif_pen.gift('all time ','eva')