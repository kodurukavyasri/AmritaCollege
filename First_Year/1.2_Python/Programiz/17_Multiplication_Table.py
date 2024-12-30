print('This progrma prints the multiplication table of a given number')

x = int(input('Enter a number : '))

for i in range (1, 11):
    num = x * i
    print (x,"*",i,"=",num)