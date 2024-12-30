# This program prints febonacci series upto a given number.

print("This program prints the febonacci using recurssion")

def recursive_febo(n):
    if n<= 1:
        return n
    else:
        return(recursive_febo(n-1)+recursive_febo(n-2))
    
n = (int(input("Enter the value for n : ")))

if n<=0:
    print("Invalid Input")
else:
    for i in range(n):
        print( i+1," : ", recursive_febo(i))
        