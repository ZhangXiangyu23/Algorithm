import matplotlib.pyplot as plt
# 导入numpy这种关于数学的库，并且重新命名为np,防止多次导入
import numpy as np

# 生成0到10之间，100个数
x = np.linspace(0, 10, 100)
sin_y = np.sin(x)

# 绘制sin
plt.plot(x, sin_y)
# 绘制cos
cos_y = np.cos(x)
plt.plot(x, cos_y)
plt.savefig("sin_cos.jpg")
plt.show()