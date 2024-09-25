print('This program Swaps Two given Numbers')

x = int(input('Enter number 1 : '))
y = int(input('Enter number 2 : '))

temp = x
x = y
y = temp

print (' Using temp variable values are:',x,y)

x = x+y
y = x-y
x = x-y
print (' without using temp variable values are:',x,y)

