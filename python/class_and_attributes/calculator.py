class Calculator:
    brand='casio'
    color='black'
    model='Ms 991'
    def add(self,num1,num2):
        return num1+num2
    def subtraction(self,num1,num2):
        if  num1>num2:
            return  num1-num2
        else:
            return num2-num1
    def division(self,num1,num2):
        return num1//num2

my_calculator=Calculator() #calculator class hote instance create kore nilam.ebar ei instance diye method call korte parbo
addition=my_calculator.add(34,34)
print(addition)

    