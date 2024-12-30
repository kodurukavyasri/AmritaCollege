import math

print("This program displays the powers of 2")

n = int(input("Enter the no of powers you want : "))

for x in range (1,n+1) :
    print("2^",x ,"=", pow(2,x))
