from Menu import Pizza,Burger,Menu,Drinks
from Resturant import Resturant
from Users import Chef,Customer,Server,Manager
def main():
    menu=Menu()
    pizza_1=Pizza("shutki pizza", 600,"large",['shutki','onion'])
    menu.add_menu_item('pizza',pizza_1)
    pizza_2=Pizza("alur vorta pizza", 400, "large",['potato','onion','oil'])
    menu.add_menu_item('pizza',pizza_2)
    pizza_3=Pizza("dal pizza", 500,'large',['dal','oil'])
    menu.add_menu_item('pizza',pizza_3)
    
    # add burger to the menu
    burger_1=Burger("Naga Burger",1000,'chicken',['bread','chili'])
    menu.add_menu_item('burger',burger_1)
    burger_2=Burger('Beef Burger',1200,'beef',['goru','haddi'])
    menu.add_menu_item('burger',burger_2)
    
    
    # add drinks to the menu
    coke=Drinks('coke',50,True)
    menu.add_menu_item('drinks',coke)
    coffe=Drinks('Mocha',300,False)
    menu.add_menu_item('drinks',coffe)
    
# show menu
    menu.show_menu()
    
    resturant=Resturant('Sai Baba Resturant',2000,menu)
    
    # add employees
    
    manager=Manager('Kala chand manager',5,'kalachad@gmail.com','kaliapur',1500,'january 1 2020','core')
    
    resturant.add_employee('manager',manager)
    chef=Chef('Rustom Barborchi',6,'chuparustom.com','rustom nagar',3500,'feburary 2020','chef','everything')
    resturant.add_employee('chef',chef)
    server=Server('Chootu Server',6,'naijai@gmail.com','returant',2100,"march 1 2020",'server')
    resturant.add_employee('server',server)
    
    # show employees
    resturant.show_employees()
    
    
# call the main method
if __name__=='__main__':
    main()