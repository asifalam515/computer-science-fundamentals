class Book:
    def __init__(self,name) -> None:
        self.name=name
        
    def read(self):
        raise NotImplemented
        
        
class Physics(Book):
    def __init__(self, name,lab) -> None:
        self.lab=lab
        super().__init__(name)
    def read(self):
        print('reading physics vector chapter')
        
topon=Physics('topon ',True)
print(issubclass(Physics,Book))
print(isinstance(topon,Book))
topon.read()