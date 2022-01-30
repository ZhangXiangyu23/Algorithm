import matplotlib.pyplot as plt
import numpy as np

# 生成1000个正态分布随机数
x = np.random.randn(1000)

"""
(1)绘制直线、折线、曲线使用plot
(2)绘制散点图，可以使用带有参数的plot，也可以使用scatter
(3)绘制柱形图使用bar或者barh
(4)绘制饼图使用pie
(5)绘制直方图使用hist
"""
# plt.hist(x)
# bins=100,将10个柱子绑在一起
plt.hist(x, bins=100)
plt.show()