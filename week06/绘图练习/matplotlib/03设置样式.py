import matplotlib.pyplot as plt

x = [1, 2, 3, 4, 5]
y = [1, 4, 9, 16, 25]


# 可以通过添加linewidth，来设置线条宽度
plt.plot(x, y, linewidth=10)

# xlabel可以设置x轴名称
plt.xlabel("x")
# ylabel可以设置y轴名称
plt.ylabel("y=x^2")

plt.rcParams['font.sans-serif']=['SimHei'] # 用来正常显示中文标签
# title可以设置标题
plt.title("折线图")

plt.show()