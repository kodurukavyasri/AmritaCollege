print('This program Prints armstrong numbers in a given Interval')

x = (int(input('Enter a lower number : ')))
y = (int(input('Enter a uppper number : ')))


for num in range (x , y+1) :
    order = len(str(num))
    sum = 0
    #print(order)

    temp = num
    #print(temp)
        
    while temp > 0:
        digit = temp % 10 
        sum += digit ** order
        temp //= 10 
        
        if num == sum:
            print(num)
