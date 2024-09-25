print('This program Prints if a given year is leap\n')

x = int(input('Enter a year : '))

if(x%100==0): 
    if(x%400==0):
        print('The given year is leap year ')
    else:
        print('The given year is not a leap year ')
    

elif(x % 4 == 0):
    print('The given year is leap year ')
    
else:
    print('The given year is not a leap year ')
       


