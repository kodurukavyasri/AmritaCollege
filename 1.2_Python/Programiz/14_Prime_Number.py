import math

print('This program checks if a given number is Prime')
n = float(input('Enter a number : '))
x = int(math.sqrt(n))

found = 0
for i in range(2 , x):
    if n % i == 0:
        print('The number is composite')
        found = 1
        break

if (found == 0):
    print('The number is Prime')