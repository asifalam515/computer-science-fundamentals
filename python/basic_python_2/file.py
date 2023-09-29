#.csv commma separated valueu
#.txt text file
# with open('message.txt','w')as file:
#     file.write('I love you,Python!')
with open('message.txt','r')as file:
    text=file.read()
    print(text)