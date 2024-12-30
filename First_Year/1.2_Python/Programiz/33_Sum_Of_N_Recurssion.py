print("This program prints the sum of natural numbers")

def sum_natural_numbers(n):
    if n == 0:
        return 0
    else:
        return n + sum_natural_numbers(n - 1)

n = int(input("Enter the value for n: "))

if n <= 0:
    print("Please enter a valid natural number")
else:
    print("The sum of natural numbers from 1 to", n, "is: ", sum_natural_numbers(n))