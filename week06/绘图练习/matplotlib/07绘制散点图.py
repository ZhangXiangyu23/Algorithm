import matplotlib.pyplot as plt
import numpy as np


x = np.linspace(0, 10, 100)
sin_y =np.sin(x)


# plt.plot(x, sin_y, "o")

plt.scatter(x, sin_y)
# 使用plot或scatter绘制出来的图像都是一样的，plot绘制速度快与scatter
# 绘制不同形式（颜色、大小）的点时，使用scatter
plt.show()

