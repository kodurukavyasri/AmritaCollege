print("This Program coverts the given decimal value to binary, octal and hexadecimal")

x = int(input("Enter a number : "))
a = bin(x)
b = oct(x)
c = hex(x)

print("The number in binary is :", a, ",the number in octal is : ", b, ",the number in hexadecimal is : ", c)
