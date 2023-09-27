t = int(input())
while t != 0:
    n = int(input())
    while n != 0:
        digit = n % 10  # Get the last digit
        print(digit,end="")
     
        n = n // 10  # Remove the last digit
        print(end=" ")
    print()
    t = t - 1
