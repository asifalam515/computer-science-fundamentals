class Book:
    def __init__(self,id,name,quantity) -> None:
        self.name=name
        self.id=id
        self.quantity=quantity

class User:
    def __init__(self,id,name) -> None:
        self.id=id
        self.name=name
        self.borrowedBook=[]
        self.returndedBook=[]
        
class Library:
    def __init__(self,name) -> None:
        self.name=name
        self.users=[]
        self.books=[]
    
    def addBook(self,name,id,quantity):
        book=Book(id,name,quantity)
        self.books.append(book)
        
    def addUser(self,name,id,password):
        user=User(id,name,password)
        self.users.append(user)
        return user


bsk=Library("Bishwya Shahitto kendro")
# first user
admin=bsk.addUser("asif",1009,4212321) 
ratin=bsk.addUser("ratin",23,3427)
cpBook=bsk.addBook("pera moy life er parachitamol",3212,2)
currentUser=None #kono user nai.log in korar pore user pabe
while True:
    # surutei check korbo kono user log in kora ase kina
    if currentUser==None:
        print("No logged in user")
        # user ke ask krbo tmi ki korbe caw?login ?naki register
        option=input("Login or Register: (L/R): ")
        
        if option=="L":
            # log in korte id ar password dorkar hobe so seta input niye ni
            id=int(input("Enter you Id"))
            password=input("Enter password")    
            # ebar dekbo user match kore kina
            match=False
            for user in bsk.users:
                if user.id==id  and user.password==password:
                    currentUser=user #ekhon kar user ei holo current user
                    match=True #user mile gele true kroe dibo
                    break
            if match==False:
                print("No User found ")
                
        elif option=="R":
            # register =>new user create korte hobe
            id=int(input("Enter your Id: "))
            name=input("Enter you Name")
            password=input("Enter your password")
            
            for user in bsk.user:
                if user.id==id:
                    print("User Already Exists")
            
            user=bsk.addUser(name,id,password)
            currentUser=user
    
    else:
        if  currentUser.name=="admin":
            # admin ke book dekhar,delete korar options ow dibo
            print("Optins :")