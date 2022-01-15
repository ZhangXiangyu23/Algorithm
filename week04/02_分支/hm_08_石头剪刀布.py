import random
player = int(input("请您出拳，1代表石头，2代表剪刀，3代表布"))

computer = random.randint(1,3)
print("玩家出的是%d,电脑出的是%d" % (player, computer))

if ((player == 1 and computer == 2)
        or (player == 2 and computer == 3)
        or (player == 3 and computer == 1)):

    print("玩家胜利!")
elif player == computer:
    print("平局!")
else:
    print("电脑胜利")
