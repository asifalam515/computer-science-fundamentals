from Menu import Pizza,Burger,Menu,Drinks
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
    
# call the main method
if __name__=='__main__':
    main()