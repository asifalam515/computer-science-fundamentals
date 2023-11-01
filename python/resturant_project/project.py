class Train:
    def __init__(self,name,id,location,destination) -> None:
        self.name=name
        self.id=id
        self.location=location
        self.destination=destination
        
    
class Admin(Train):
    train_list=[]
    passanger_list=[]
    seats={} #train er id onujayi sit thakbe
    def __init__(self,email) -> None:
        self.email=email  
        
    def add_train(self,name,id,location,destination):
        new_train=Train(name,id,location,destination)
        self.train_list.append(new_train)
        seat=[] #1D
        for i in range(10): #ei list ta 10 bar append hobe.mane row 10 ta hobe
            seat.append(['A','A','A','A']) # er moddhe arekta dilei 2D
        self.seats[id]=seat
            
        
    def show_available_train(self):
        for train in self.train_list:
            print(f'name :{train.name}, id:{train.id}, location: {train.location}, destination: {train.destination}')
    
    
    def show_available_seats(self,id):
       for i in self.seats[id]:
           for j in i:
               print(j,end=' ')
           print() 
    def book_seats(self,id):
        row=int(input("Enter  row "))
        col=int(input("Enter column "))
        self.seats[id][row][col]='X'
        print("booked successfully ")
        
class User:
    def __init__(self,name,email,password) -> None:
        self.name=name
        self.email=email
        self.password=password
admin=Admin('admin@gmail.com')
        

      

while(True):
    user_type=input("User or Admin ?")
    if user_type=="user":
        print("1.Log in ")
        print("2. Register ")
        print("3.Exit ")
        choice=int(input("Enter your choice"))
        if choice==1:
            #login
            # email password must be matched
            email=input("Enter your email: ")
            password=input("Enter your password: ")
            
            flag=False
            for user in admin.passanger_list:
                if user.email== email and user.password==password:
                    flag=True
                    print("welcome ",user.name)
                    # 3 ti options dekte parbe.
                    while(True):
                        print("1. Show all available Trains ")
                        print("2.Show all available Sits ")
                        print("3. Book seats ")
                        print("4. Log out")
                        
                        choice=int(input("enter ur choice : "))
                        if choice==1:
                            # availbale train dekte parbe
                            admin.show_available_train()
                        elif choice==2:
                            # seats dekbe
                            id=input(("Enter Train id: "))
                            admin.show_available_seats(id)
                        elif choice==3:
                            pass
                        else:
                            break
                            
            if(flag==False):
                    print("Wrong email and password")    
            
            
            
        if choice==2:
            name=input("enter your name: ")
            email=input("enter your email: ")
            password=input("enter your password")
            
            new_user=User(name,email,password)
            admin.passanger_list.append(new_user)
            print("Registered successfully ")
            
        else:
            break
    
    
    
    elif user_type=='admin':
        email=input("Enter your email: ")
        password=input("Enter your password: ")
        if email=='admin' and password=='123':
             #admin login kore felese
            print("admin successfully logged in ")
            # admin er kaj gular options dekhabo
            while(True):
                print("1. Show all available Trains ")
                print("2. Show all users ")
                print("3. Add Trains ")
                print("4. Log out. ")
                
                choice=int(input("Enter your choice : "))
                
                if choice==1:
                    admin.show_available_train()
                
                
                elif choice ==2:
                    pass
                elif choice==3:
                    name=input("Enter Train Name: ")
                    id=int(input("Enter the train id: "))
                    location=input("Enter the train location")
                    destination=input("Enter the train destination: ")
                    admin.add_train(name,id,location,destination)
                    
                elif choice==4:
                    #log out
                    break
            
        else:
            print('wrong email or password')
             
        
    else:
        print("invalid")