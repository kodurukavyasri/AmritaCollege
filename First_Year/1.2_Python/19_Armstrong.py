import math

print('This progrm checks if a given number is Armstrong number')

num = (int(input('Enter a number : ')))
len = 0
sum = 0

x = num
while x != 0:
    x = int(x / 10)
    len = len + 1
#print('length: ',len)

x = num
for i in range(len):
    y = int(x % 10)
    x = int(x / 10)
    sum = sum + pow(y,len)

if sum == num:
    print('It is an armstrong number')
else:
    print('It is not an armstrong number')

