import matplotlib.pyplot as plt
import numpy as np
plt.rcParams['font.sans-serif']=['SimHei'] #用来正常显示中文标签

x = [1980, 1985, 1990, 1995]
y = [1000, 3000, 2000, 1500]

x_label =["1980年","1985年","1990年","1995年"]
# 修改x轴坐标的值
plt.xticks(x, x_label)

# 设置x轴和y轴具体指的是什么
plt.xlabel("年份")
plt.ylabel("销量")
# 标题
plt.title("年份销量对比图")

# 绘制折线、曲线、直线，使用plot
# 绘制散点图，主要使用scatter
# 绘制柱状图使用bar
plt.bar(x, y, width=3)
plt.show()
