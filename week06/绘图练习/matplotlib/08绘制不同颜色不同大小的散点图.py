import matplotlib.pyplot as plt
import numpy as np

# 保证每次产生的随机数一样
np.random.seed(0)

x = np.random.rand(100)
y = np.random.rand(100)

# 设置点的大小
size = np.random.rand(100)*1000
# 设置点的颜色
color = np.random.rand(100)*1000

# 设置散点图中的形式（大小、颜色、透明度），用scatter
# 参数里面写上s c alpha
plt.scatter(x, y, s=size, c=color, alpha=0.9)
# 果然是逐行解释，逐行执行
# Python是脚本语言，编译型语言的话，就是全局进行编译，进行执行了
plt.show()
print(x)