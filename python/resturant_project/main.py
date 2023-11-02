from Menu import Pizza,Burger,Menu,Drinks
from Resturant import Resturant
from Users import Chef,Customer,Server,Manager
from Order import Order

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
    # menu.show_menu()
    
    resturant=Resturant('Sai Baba Resturant',2000,menu)
    
    # add employees
    
    manager=Manager('Kala chand manager',5,'kalachad@gmail.com','kaliapur',1500,'january 1 2020','core')
    
    resturant.add_employee('manager',manager)
    chef=Chef('Rustom Barborchi',6,'chuparustom.com','rustom nagar',3500,'feburary 2020','chef','everything')
    resturant.add_employee('chef',chef)
    server=Server('Chootu Server',6,'naijai@gmail.com','returant',2100,"march 1 2020",'server')
    resturant.add_employee('server',server)
    
    # show employees
    # resturant.show_employees()
    
    # customer 1 placing an order
    customer_1=Customer('sakib khan',5,'asif@gmail.com','banani',10000)
    order_1=Order(customer_1,[pizza_3,coffe])
    customer_1.pay_for_order(order_1)
    resturant.add_order(order_1)
    
    # customer one paying for order 1
    resturant.receive_payment(order_1,2000,customer_1)
    
    print('revenue and balance after first customer ',resturant.revenue,resturant.balance)
    
    # customer 2 placing an order
    customer_2=Customer('arifin shuvo',15,'arif@gmail.com','uganda',10000)
    order_2=Order(customer_2,[pizza_1,burger_2,burger_1,pizza_2,coffe])
    customer_2.pay_for_order(order_2)
    resturant.add_order(order_2)
    
    # customer one paying for order 1
    resturant.receive_payment(order_2,15000,customer_2)
    
    print('revenue and balance after second customer ',resturant.revenue,resturant.balance)
    
    # pay rent
    resturant.pay_expense(resturant.rent,'Rent')
    print('After rent ',resturant.revenue,resturant.balance, resturant.expanse)
    
    resturant.pay_salary(chef)
    print('After salary ',resturant.revenue,resturant.balance, resturant.expanse)
    
# call the main method
if __name__=='__main__':
    main()