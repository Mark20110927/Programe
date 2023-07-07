import matplotlib.pyplot as plt

# 设定数据
x = [1, 2, 3, 4, 5]  # x轴数据
y1 = [1, 4, 9, 16, 25]  # y轴数据1
y2 = [1, 8, 27, 64, 125]  # y轴数据2

# 创建一个新的图形
plt.figure()

# 在当前的图形中添加一个子图，参数111的意思是：图形是1x1的，且当前子图是第一个。
plt.subplot(111)

# 画出y1 = x^2的折线图
plt.plot(x, y1, 'o-', label='y=x^2')

# 画出y2 = x^3的折线图
plt.plot(x, y2, 's-', label='y=x^3')

# 对于每一个x, 连接y1和y2
for i in range(len(x)):
    plt.plot([x[i], x[i]], [y1[i], y2[i]],  color = 'green', linewidth=4)  # 线宽设置为2

# 添加图例
plt.legend()

# 显示这个图形
plt.show()
