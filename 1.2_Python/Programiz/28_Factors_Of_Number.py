print("This program prints the factors of a given number")

x = int(input("Enter a number : "))

y = int(x/2)

print(1)

for i in range(2, x+1):
    if x % i == 0:
     print(i)