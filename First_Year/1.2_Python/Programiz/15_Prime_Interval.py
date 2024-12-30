print('This program Prints prime numbers in a given Interval')
import math

a = int(input('Enter the first number: '))
b = int(input('Enter the second number: '))

for x in range(a,b+1):

    y = int(math.sqrt(x))

    found = 0
    for i in range(2 , x):
        if x % i == 0:
            print(x,'is composite')
            found = 1
            #print(x)
            break

    if (found == 0):
        print(x,'is Prime')