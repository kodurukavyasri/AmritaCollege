print("this program prints the factorial of a number using reccursion method")

def fact(x):
    if x==0:
        return 1
    else :
        return x*fact(x-1)
    
x = int(input("Enter the number "))
print(fact(x))