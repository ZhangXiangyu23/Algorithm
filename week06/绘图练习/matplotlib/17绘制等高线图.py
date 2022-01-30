import matplotlib.pyplot as plt
import numpy as np

x = np.linspace(-10, 10, 100)
y = np.linspace(-10, 10, 100)
X,Y = np.meshgrid(x,y)
Z = np.sqrt(X**2+Y**2)

# 绘制等高线图
# plt.contour(X, Y, Z)

# 将等高线圈进行填充
plt.contourf(X, Y, Z)
plt.show()

