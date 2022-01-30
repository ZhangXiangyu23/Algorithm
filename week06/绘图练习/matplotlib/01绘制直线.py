# 导入matplotlib中的绘图模块pyplot,并且重新命名为plt,防止多次导入
import matplotlib.pyplot as plt

# 具体坐标
x = [1, 2]
y = [4, 8]

# 绘制
plt.plot(x, y)
# 进行展示
plt.show()