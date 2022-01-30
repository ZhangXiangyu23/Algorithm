import matplotlib.pyplot as plt
import numpy as np

# 生成0-4的数
x = np.arange(5)
# 播撒随机种子
np.random.seed(0)
y = np.random.randint(-5, 5, 5)
# 确定分区位置
plt.subplot(2, 2, 1)
plt.bar(x, y, color="r")
# 水平方向加上线条
plt.axhline(0, color="blue", linewidth="2")

# 2区
plt.subplot(2, 2, 2)
# barh函数是将x,y轴相关调换
plt.barh(x, y, color="b")
# 竖直方向加上线条
plt.axvline(0, color="red", linewidth="2")
plt.show()
print(x)

