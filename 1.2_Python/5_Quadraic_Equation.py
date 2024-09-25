import math

print('This Program Solves the Quadratic Equations')

a = int(input('Enter number a : '))
b = int(input('Enter number b : '))
c = int(input('Enter number c : '))

# ax^2 + bx + c
# b^2 - 4ac

d = ((b**2) - 4*a*c )

e = (-b + math.sqrt(d))/(2*a)
f = (-b - math.sqrt(d))/(2*a)

#print('The Solutions are : '.format(e,f))

print('Possible x values are : ',e,f)

