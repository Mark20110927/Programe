
import random
counts = 3
answer = random.randint(1, 10)
while counts > 0 :
    temp = input("猜一下小甲鱼想的是什么数字\n")
    guess = int(temp)
    if guess == answer:
        print("你是小甲鱼心里的蛔虫吗？！")
        print("哼，猜中了也被有奖励！")
        break
    else:
        if guess < answer:
            print("小啦~")
        else:
            print("大啦~")
        counts = counts - 1
print("游戏结束，不玩啦^_^")
