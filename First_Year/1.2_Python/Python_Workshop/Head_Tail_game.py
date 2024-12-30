import random
num=random.randint(0,1)
choice=2
if num==1:
    print("heads")
    print("You win")
else:
    print("You loose")
    choice-=1
    if choice>0:
        num = random.randint(0, 1)
        if num == 1:
            print("heads")
            print("You win")
        else:
            print("You loose")
            choice -= 1