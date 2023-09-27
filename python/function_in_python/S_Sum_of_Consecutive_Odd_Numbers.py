t = int(input())
while t != 0:
    x,y=map(int, input().split())
    odd_sum = 0  # Initialize odd_sum inside the loop
    for num in range(x + 1, y):
        if num % 2 == 1:
            odd_sum += num  # Use odd_sum instead of sum
    print(odd_sum)  # Print odd_sum, not sum
    t = t - 1
