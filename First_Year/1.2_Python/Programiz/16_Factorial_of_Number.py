print ('This program prints the factorial of a given number')

x = int(input('Enter a number : '))

factorial = 1

for x in range (1, x + 1):
    factorial = factorial * x 
    x = x-1

print (factorial)
