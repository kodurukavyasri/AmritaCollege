print("This program works as a simple calculator")

x = int(input("Enter number 1 : "))
y = int(input("Enter number 2 : "))
z = input("Enter the operator")

if z =="+":
    print("The sum is", x+y)
if z =="-":
    print("The subtration  is", x-y)
if z =="*":
    print("The multiplication  is", x*y)
if z =="/":
    print("The division is", x/y)