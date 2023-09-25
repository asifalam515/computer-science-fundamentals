#in,not in,is,is not
#any conditional can be used
#we can use and or
a=1
boss=True
if a>5:
    print('5 er besi')
    print('koto besi ke jane')
elif a>3:
    print('3 er theke booro')
elif a==2:
    print('ekdom 2 er soman soman')
else:
    print('choto chooto number')
    
    
if boss is True:
    print('tel box niye astesi booss re tel dibo')
else:
    print('lunch er pore aso')
    
if boss is not True:
    print('dhur miya')
else:
    print('boss boss boss')

coin='head'
#nested condition
if boss==True:
    print('boss you are joss')
    if coin=='tail':
        print('batting ')
    else:
        print('bowling')
        if 5>2:
            print('do something')
            if 8%2==0 and 5%2==1:
                print('even 8 is an even number')
else:
    print('youi are loss not a boss')